// Gradess & Novaturion Company. All rights reserved.

// ReSharper disable CppMemberFunctionMayBeConst
#include "DefaultPlayerController.h"
#include "Interfaces/InputControllable.h"

ADefaultPlayerController::ADefaultPlayerController(const FObjectInitializer& ObjectInitializer)
	: APlayerController(ObjectInitializer)
{
	ForwardAxisName = "MoveForward";
	RightAxisName = "MoveRight";
	UpAxisName = "MoveUp";
	TurnAroundAxisName = "TurnAround";
	LookUpAxisName = "LookUp";
	ScrollAxisName = "Scroll";

	FireActionName = "Fire";
	InteractActionName = "Interact";
	SpaceActionName = "Jump";
}

void ADefaultPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis(ForwardAxisName, this, &ADefaultPlayerController::MoveForward);
	InputComponent->BindAxis(RightAxisName, this, &ADefaultPlayerController::MoveRight);
	InputComponent->BindAxis(UpAxisName, this, &ADefaultPlayerController::MoveUp);
	InputComponent->BindAxis(TurnAroundAxisName, this, &ADefaultPlayerController::TurnAround);
	InputComponent->BindAxis(LookUpAxisName, this, &ADefaultPlayerController::LookUp);
	InputComponent->BindAxis(ScrollAxisName, this, &ADefaultPlayerController::Scroll);

	InputComponent->BindAction(FireActionName, IE_Released, this, &ADefaultPlayerController::Fire);
	InputComponent->BindAction(InteractActionName, IE_Released, this, &ADefaultPlayerController::Interact);

	InputComponent->BindAction(SpaceActionName, IE_Pressed, this, &ADefaultPlayerController::Space);
}

void ADefaultPlayerController::MoveForward(const float AxisValue)
{
	if (!IsValidPawn()) { return; }
	IInputControllable::Execute_AddForward(GetPawn(), AxisValue);
}

void ADefaultPlayerController::MoveRight(const float AxisValue)
{
	if (!IsValidPawn()) { return; }
	IInputControllable::Execute_AddRight(GetPawn(), AxisValue);
}

void ADefaultPlayerController::MoveUp(const float AxisValue)
{
	if (!IsValidPawn()) return;
	IInputControllable::Execute_AddUp(GetPawn(), AxisValue);
}

void ADefaultPlayerController::TurnAround(const float AxisValue)
{
	if (!IsValidPawn()) { return; }
	IInputControllable::Execute_AddTurnAround(GetPawn(), AxisValue);
}

void ADefaultPlayerController::LookUp(const float AxisValue)
{
	if (!IsValidPawn()) { return; }
	IInputControllable::Execute_AddLookUp(GetPawn(), AxisValue);
}

void ADefaultPlayerController::Scroll(const float AxisValue)
{
	if (!IsValidPawn()) { return; }
	IInputControllable::Execute_AddScroll(GetPawn(), AxisValue);
}

void ADefaultPlayerController::Fire()
{
	if (!IsValidPawn()) { return; }
	IInputControllable::Execute_Fire(GetPawn());
}

void ADefaultPlayerController::Interact()
{
	if (!IsValidPawn()) { return; }
	IInputControllable::Execute_Interact(GetPawn());
}

void ADefaultPlayerController::Space()
{
	if (!IsValidPawn()) { return; }
	IInputControllable::Execute_Space(GetPawn());
}

bool ADefaultPlayerController::IsValidPawn() const
{
	const auto CurrentPawn = GetPawn();
	return IsValid(CurrentPawn) && CurrentPawn->GetClass()->ImplementsInterface(UInputControllable::StaticClass());
}
