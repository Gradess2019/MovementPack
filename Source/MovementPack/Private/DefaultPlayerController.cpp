// Gradess & Novaturion Company. All rights reserved.


#include "DefaultPlayerController.h"

#include "MovementPack/Interfaces/InputControllable.h"

ADefaultPlayerController::ADefaultPlayerController(const FObjectInitializer& ObjectInitializer)
    : APlayerController(ObjectInitializer)
{
    ForwardAxisName = "MoveForward";
    RightAxisName = "MoveRight";
    UpdAxisName = "MoveUp";
    TurnAroundAxisName = "TurnAround";
    LookUpAxisName = "LookUp";
    ScrollAxisName = "Scroll";
}

void ADefaultPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAxis(ForwardAxisName, this, &ADefaultPlayerController::MoveForward);
    InputComponent->BindAxis(RightAxisName, this, &ADefaultPlayerController::MoveRight);
    InputComponent->BindAxis(UpdAxisName, this, &ADefaultPlayerController::MoveUp);
    InputComponent->BindAxis(TurnAroundAxisName, this, &ADefaultPlayerController::TurnAround);
    InputComponent->BindAxis(LookUpAxisName, this, &ADefaultPlayerController::LookUp);
    InputComponent->BindAxis(ScrollAxisName, this, &ADefaultPlayerController::Scroll);
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

bool ADefaultPlayerController::IsValidPawn() const
{
    const auto CurrentPawn = GetPawn();
    return IsValid(CurrentPawn) && CurrentPawn->GetClass()->ImplementsInterface(UInputControllable::StaticClass());
}
