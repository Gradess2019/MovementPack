// Gradess & Novaturion Company. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DefaultPlayerController.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class MOVEMENTPACK_API ADefaultPlayerController : public APlayerController
{
    GENERATED_BODY()


protected:

    UFUNCTION()
    void MoveForward(const float AxisValue);

    UFUNCTION()
    void MoveRight(const float AxisValue);

    UFUNCTION()
    void MoveUp(const float AxisValue);

    UFUNCTION()
    void TurnAround(const float AxisValue);

    UFUNCTION()
    void LookUp(const float AxisValue);

    UFUNCTION()
    void Scroll(const float AxisValue);

    virtual void SetupInputComponent() override;
};
