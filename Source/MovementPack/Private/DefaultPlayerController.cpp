// Gradess & Novaturion Company. All rights reserved.


#include "DefaultPlayerController.h"

void ADefaultPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAxis("MoveForward", this, &ADefaultPlayerController::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &ADefaultPlayerController::MoveRight);
    InputComponent->BindAxis("MoveUp", this, &ADefaultPlayerController::MoveUp);
    InputComponent->BindAxis("TurnAround", this, &ADefaultPlayerController::TurnAround);
    InputComponent->BindAxis("LookUp", this, &ADefaultPlayerController::LookUp);
    InputComponent->BindAxis("Scroll", this, &ADefaultPlayerController::Scroll);
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
