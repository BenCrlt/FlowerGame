// Fill out your copyright notice in the Description page of Project Settings.

#include "Model/Weapons/Weapon.h"

#define print(text) \
	if (GEngine)    \
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, text)
// Sets default values
AWeapon::AWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MagSize = 5;
	AmmoPerShot = 5;
	Mag = 0;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

int32 AWeapon::LoadWeapon(int32 Ammo)
{
	int32 AmmoLeft = Ammo;
	if (Ammo != 0)
	{
		if (MagSize != Mag)
		{
			if (Ammo > MagSize - Mag)
			{
				AmmoLeft -= MagSize - Mag;
				Mag = MagSize;
			}
			else
			{
				Mag += Ammo;
				AmmoLeft = 0;
			}
		}
	}
	return AmmoLeft;
}

int32 AWeapon::GetAmmoPerShot()
{
	return AmmoPerShot;
}

void AWeapon::Fire()
{
	Mag -= AmmoPerShot;
	print(FString::FromInt(Mag));
}