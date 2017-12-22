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
	
	

public:
	ATank* GetControlledTank() const;

	
	
};
