// Fill out your copyright notice in the Description page of Project Settings.

#include "FpCharacter.h"

AFpCharacter::AFpCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFpCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AFpCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFpCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
