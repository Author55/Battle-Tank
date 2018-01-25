// (c) Shreyansh Anshuman

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
	
public:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	// How close can the AI tank get
	float AcceptanceRadius = 3000;

};
