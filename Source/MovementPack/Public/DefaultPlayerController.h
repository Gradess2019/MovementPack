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


public:
    ADefaultPlayerController(const FObjectInitializer& ObjectInitializer);

protected:

    // Input
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input | Axis Names")
    FName ForwardAxisName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input | Axis Names")
    FName RightAxisName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input | Axis Names")
    FName UpdAxisName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input | Axis Names")
    FName TurnAroundAxisName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input | Axis Names")
    FName LookUpAxisName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input | Axis Names")
    FName ScrollAxisName;

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

    UFUNCTION(BlueprintCallable, Category = "Movement Pack | Controller")
    bool IsValidPawn() const;

};
