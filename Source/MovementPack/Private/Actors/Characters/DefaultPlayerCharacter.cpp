// Gradess & Novaturion Company. All rights reserved.

#include "Actors/Characters/DefaultPlayerCharacter.h"

ADefaultPlayerCharacter::ADefaultPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ADefaultPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADefaultPlayerCharacter::AddForward_Implementation(const float AxisValue)
{
	AddMovementInput(GetActorForwardVector(), AxisValue);
}

void ADefaultPlayerCharacter::AddRight_Implementation(const float AxisValue)
{
	AddMovementInput(GetActorRightVector(), AxisValue);
}

void ADefaultPlayerCharacter::AddUp_Implementation(const float AxisValue)
{
	AddMovementInput(GetActorUpVector(), AxisValue);
}

void ADefaultPlayerCharacter::AddTurnAround_Implementation(const float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

void ADefaultPlayerCharacter::AddLookUp_Implementation(const float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}
