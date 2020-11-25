// Gradess & Novaturion Company. All rights reserved.


#include "DefaultPlayerController.h"

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
    if (AxisValue == 0) { return; }
    UE_LOG(LogTemp, Warning, TEXT("MoveForward"));
}

void ADefaultPlayerController::MoveRight(const float AxisValue)
{
    if (AxisValue == 0) { return; }
    UE_LOG(LogTemp, Warning, TEXT("MoveRight"));
}

void ADefaultPlayerController::MoveUp(const float AxisValue)
{
    if (AxisValue == 0) { return; }
    UE_LOG(LogTemp, Warning, TEXT("MoveUp"));
}

void ADefaultPlayerController::TurnAround(const float AxisValue)
{
    if (AxisValue == 0) { return; }
    UE_LOG(LogTemp, Warning, TEXT("TurnAround"));
}

void ADefaultPlayerController::LookUp(const float AxisValue)
{
    if (AxisValue == 0) { return; }
    UE_LOG(LogTemp, Warning, TEXT("LookUp"));
}

void ADefaultPlayerController::Scroll(const float AxisValue)
{
    if (AxisValue == 0) { return; }
    UE_LOG(LogTemp, Warning, TEXT("Scroll"));
}
