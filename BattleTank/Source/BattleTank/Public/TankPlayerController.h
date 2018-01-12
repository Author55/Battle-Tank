// (c) Shreyansh Anshuman

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"

#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"  // must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	//start the tank moving the barrel so that it would hit where
	//the crosshair intersects the world
	void AimTowardsCrosshair();

	// Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

public:
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
	
	
};
