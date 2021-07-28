// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/TouchInput.h"

UTouchInput::UTouchInput()
{
}

void UTouchInput::UpdateDetection(float DeltaTime)
{
    UpdateGameKeys(DeltaTime);
    ProcessKeyStates(DeltaTime);
}

void UTouchInput::ProcessKeyStates(float DeltaTime)
{
    for (const FActionBinding1P& AB : ActionBindings1P)
    {
        const FSimpleKeyState* KeyState = KeyStateMap.Find(AB.Key);

        if (KeyState && KeyState->Events[AB.KeyEvent] > 0)
        {
            AB.ActionDelegate.ExecuteIfBound(KeyState->Position, KeyState->DownTime);
        }
    }

    for (const FActionBinding2P& AB : ActionBindings2P)
    {
        const FSimpleKeyState* KeyState = KeyStateMap.Find(AB.Key);

        if (KeyState && KeyState->Events[AB.KeyEvent] > 0)
        {
            AB.ActionDelegate.ExecuteIfBound(KeyState->Position, KeyState->Position2, KeyState->DownTime);
        }
    }

    // update states
    for (TMap<EGameKey::Type, FSimpleKeyState>::TIterator It(KeyStateMap); It; ++It)
    {
        FSimpleKeyState* const KeyState = &It.Value();

        if (KeyState->Events[IE_Pressed])
        {
            KeyState->bDown = true;
        }
        else if (KeyState->Events[IE_Released])
        {
            KeyState->bDown = false;
        }

        FMemory::Memzero(KeyState->Events, sizeof(KeyState->Events));
    }
}

void UTouchInput::UpdateGameKeys(float DeltaTime)
{
    AFlowerGamePlayerController * MyController = CastChecked<AFlowerGamePlayerController>(GetOuter());

    // gather current states
    uint32 CurrentTouchState = 0;
    for (int32 i = 0; i < UE_ARRAY_COUNT(MyController->PlayerInput->Touches); i++)
    {
        if (MyController->PlayerInput->Touches[i].Z != 0)
        {
            CurrentTouchState |= (1 << i);
            UE_LOG(LogTemp, Warning, TEXT("1.UpdateGameKeys()::CurrentTouchState:%X,PrevTouchState:%X"), CurrentTouchState, PrevTouchState);
        }
    }

    // detection
    FVector2D LocalPosition1 = FVector2D(MyController->PlayerInput->Touches[0]);
    FVector2D LocalPosition2 = FVector2D(MyController->PlayerInput->Touches[1]);

    DetectOnePointActions(CurrentTouchState & 1, PrevTouchState & 1, DeltaTime, LocalPosition1, TouchAnchors[0], Touch0DownTime);

    DetectTwoPointsActions((CurrentTouchState & 1) && (CurrentTouchState & 2), (PrevTouchState & 1) && (PrevTouchState & 2),
        DeltaTime, LocalPosition1, LocalPosition2);

    // save states
    PrevTouchState = CurrentTouchState;
}

void UTouchInput::DetectOnePointActions(bool bCurrentState, bool bPrevState, float DeltaTime, const FVector2D& CurrentPosition, FVector2D& AnchorPosition, float& DownTime)
{
    const float HoldTime = 0.3f;

    if (bCurrentState && !bTwoPointsTouch)
    {
        // just pressed? set anchor and zero time
        if (!bPrevState)
        {
            DownTime = 0;
            AnchorPosition = CurrentPosition;
            UE_LOG(LogTemp, Warning, TEXT("2.DetectOnePointActions()::AnchorPosition is :%f-%f"), AnchorPosition.X, AnchorPosition.Y);
        }

        // swipe detection & upkeep
        FSimpleKeyState& SwipeState = KeyStateMap.FindOrAdd(EGameKey::Swipe);
        if (SwipeState.bDown)
        {
            SwipeState.Events[IE_Repeat]++;
            SwipeState.Position = CurrentPosition;
            SwipeState.DownTime = DownTime;
            UE_LOG(LogTemp, Warning, TEXT("3.DetectOnePointActions()::SwipeState.bDown ; SwipeState.Position is :%f-%f, SwipeState.DownTime is:%f"), CurrentPosition.X, CurrentPosition.Y, DownTime);
        }
        else if ((AnchorPosition - CurrentPosition).SizeSquared() > 0)
        {
            SwipeState.Events[IE_Pressed]++;
            SwipeState.Position = AnchorPosition;
            SwipeState.DownTime = DownTime;
            UE_LOG(LogTemp, Warning, TEXT("4.DetectOnePointActions()::SwipeState.Position is :%f-%f, SwipeState.DownTime is:%f"), AnchorPosition.X, AnchorPosition.Y, DownTime);
        }

        // hold detection
        if (DownTime + DeltaTime > HoldTime && DownTime <= HoldTime && !SwipeState.bDown)
        {
            FSimpleKeyState& HoldState = KeyStateMap.FindOrAdd(EGameKey::Hold);
            HoldState.Events[IE_Pressed]++;
            HoldState.Position = AnchorPosition;
            HoldState.DownTime = DownTime;
            UE_LOG(LogTemp, Warning, TEXT("5.DetectOnePointActions()::SwipeState.Position is :%f-%f, SwipeState.DownTime is:%f"), AnchorPosition.X, AnchorPosition.Y, DownTime);
        }

        DownTime += DeltaTime;
    }
    else
    {
        // just released?
        if (bPrevState)
        {
            // tap detection
            if (DownTime < HoldTime)
            {
                FSimpleKeyState& TapState = KeyStateMap.FindOrAdd(EGameKey::Tap);
                TapState.Events[IE_Pressed]++;
                TapState.Position = AnchorPosition;
                TapState.DownTime = DownTime;
                UE_LOG(LogTemp, Warning, TEXT("6.DetectOnePointActions()::SwipeState.Position is :%f-%f, SwipeState.DownTime is:%f"), AnchorPosition.X, AnchorPosition.Y, DownTime);
            }
            else
            {
                FSimpleKeyState& HoldState = KeyStateMap.FindOrAdd(EGameKey::Hold);
                if (HoldState.bDown)
                {
                    HoldState.Events[IE_Released]++;
                    HoldState.Position = AnchorPosition;
                    HoldState.DownTime = DownTime;
                    UE_LOG(LogTemp, Warning, TEXT("7.DetectOnePointActions()::SwipeState.Position is :%f-%f, SwipeState.DownTime is:%f"), AnchorPosition.X, AnchorPosition.Y, DownTime);
                }
            }

            // swipe finish
            FSimpleKeyState& SwipeState = KeyStateMap.FindOrAdd(EGameKey::Swipe);
            if (SwipeState.bDown)
            {
                SwipeState.Events[IE_Released]++;
                SwipeState.Position = CurrentPosition;
                SwipeState.DownTime = DownTime;
                UE_LOG(LogTemp, Warning, TEXT("8.DetectOnePointActions()::SwipeState.Position is :%f-%f, SwipeState.DownTime is:%f"), SwipeState.Position.X, SwipeState.Position.Y, DownTime);
            }
        }
    }
}

void UTouchInput::DetectTwoPointsActions(bool bCurrentState, bool bPrevState, float DeltaTime, const FVector2D& CurrentPosition1, const FVector2D& CurrentPosition2)
{
    const float MaxSwipeDistance = 150.0f;       // swipe only if initial distance is lower
    const float PinchDistanceThreshold = 150.0f; // don't break pinch if distance exceeded threshold
    const float PinchMoveThreshold = 50.0f;      // break pinch if midpoint moved further from initial spot

    bTwoPointsTouch = bCurrentState;
    //UE_LOG(LogGame, Error, TEXT("DetectTwoPointsActions()::bTwoPointsTouch:%d,bCurrentState:%d,bPrevState:%d,DeltaTime:%f,CurrentPosition1 is :%f-%f,CurrentPosition2 is :%f-%f"), bTwoPointsTouch, bCurrentState, bPrevState, DeltaTime, CurrentPosition1.X, CurrentPosition1.Y, CurrentPosition2.X, CurrentPosition2.Y);

    if (bCurrentState)
    {
        // just pressed? set anchors, time and pinch/swipe distinction
        if (!bPrevState)
        {
            TouchAnchors[0] = CurrentPosition1;
            TouchAnchors[1] = CurrentPosition2;
            TwoPointsDownTime = 0.0f;
            MaxPinchDistanceSq = 0.0f;

            const float DistanceSq = (CurrentPosition1 - CurrentPosition2).SizeSquared();
            if (DistanceSq < FMath::Square(MaxSwipeDistance))
            {
                FSimpleKeyState& SwipeState = KeyStateMap.FindOrAdd(EGameKey::SwipeTwoPoints);
                SwipeState.Events[IE_Pressed]++;
                SwipeState.Position = CurrentPosition1;
                SwipeState.Position2 = CurrentPosition2;
                SwipeState.DownTime = TwoPointsDownTime;
            }

            FSimpleKeyState& PinchState = KeyStateMap.FindOrAdd(EGameKey::Pinch);
            PinchState.Events[IE_Pressed]++;
            PinchState.Position = CurrentPosition1;
            PinchState.Position2 = CurrentPosition2;
            PinchState.DownTime = TwoPointsDownTime;
        }

        FVector2D AnchorMidPoint = (TouchAnchors[0] + TouchAnchors[1]) * 0.5f;
        FVector2D CurrentMidPoint = (CurrentPosition1 + CurrentPosition2) * 0.5f;
        float MovementDistanceSq = (CurrentMidPoint - AnchorMidPoint).SizeSquared();
        float PinchDistanceSq = FMath::Abs((CurrentPosition2 - CurrentPosition1).SizeSquared() - (TouchAnchors[1] - TouchAnchors[0]).SizeSquared());
        MaxPinchDistanceSq = FMath::Max(PinchDistanceSq, MaxPinchDistanceSq);

        // finish swipe if distance changed before midpoint moved away from anchors
        FSimpleKeyState& SwipeState = KeyStateMap.FindOrAdd(EGameKey::SwipeTwoPoints);
        if (SwipeState.bDown)
        {
            bool bFinishSwipe = false;
            if (MovementDistanceSq < FMath::Square(PinchMoveThreshold) &&
                MaxPinchDistanceSq > FMath::Square(PinchDistanceThreshold))
            {
                bFinishSwipe = true;
            }

            SwipeState.Events[bFinishSwipe ? IE_Released : IE_Repeat]++;
            SwipeState.Position = CurrentPosition1;
            SwipeState.Position2 = CurrentPosition2;
            SwipeState.DownTime = TwoPointsDownTime;
        }

        // finish pinch if midpoint moved away from anchors before any distance changed
        FSimpleKeyState& PinchState = KeyStateMap.FindOrAdd(EGameKey::Pinch);
        if (PinchState.bDown)
        {
            bool bFinishPinch = false;
            if (MovementDistanceSq > FMath::Square(PinchMoveThreshold) &&
                MaxPinchDistanceSq < FMath::Square(PinchDistanceThreshold))
            {
                bFinishPinch = true;
            }

            PinchState.Events[bFinishPinch ? IE_Released : IE_Repeat]++;
            PinchState.Position = CurrentPosition1;
            PinchState.Position2 = CurrentPosition2;
            PinchState.DownTime = TwoPointsDownTime;
        }

        TwoPointsDownTime += DeltaTime;
    }
    else
    {
        // just released?
        if (bPrevState)
        {
            // swipe finish
            FSimpleKeyState& SwipeState = KeyStateMap.FindOrAdd(EGameKey::SwipeTwoPoints);
            if (SwipeState.bDown)
            {
                SwipeState.Events[IE_Released]++;
                SwipeState.Position = CurrentPosition1;
                SwipeState.Position2 = CurrentPosition2;
                SwipeState.DownTime = TwoPointsDownTime;
            }

            // pinch finish
            FSimpleKeyState& PinchState = KeyStateMap.FindOrAdd(EGameKey::Pinch);
            if (PinchState.bDown)
            {
                PinchState.Events[IE_Released]++;
                PinchState.Position = CurrentPosition1;
                PinchState.Position2 = CurrentPosition2;
                PinchState.DownTime = TwoPointsDownTime;
            }
        }
    }
}

FVector2D UTouchInput::GetTouchAnchor(int32 i) const
{
    return (i >= 0 && i < UE_ARRAY_COUNT(TouchAnchors)) ? TouchAnchors[i] : FVector2D::ZeroVector;
}