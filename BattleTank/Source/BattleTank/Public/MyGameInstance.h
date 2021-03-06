// (c) Shreyansh Anshuman

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	
public:
	virtual void Init() override;

	UFUNCTION()
	virtual void BeginLoadingScreen(const FString& MapName);
	UFUNCTION()
	virtual void EndLoadingScreen(UWorld* InLoadedWorld);
	// Reference UMG Asset in the Editor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> wLoadingWidget;

private:

	// Variable to hold the widget After Creating it.
	UUserWidget* MyLoadWidget;
};
