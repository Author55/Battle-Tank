// (c) Shreyansh Anshuman

#include "MyGameInstance.h"
#include "Blueprint/UserWidget.h"
#include "MoviePlayer.h"

void UMyGameInstance::Init()
{
	Super::Init();

	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &UMyGameInstance::BeginLoadingScreen);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UMyGameInstance::EndLoadingScreen);

	if (wLoadingWidget) // Check if the Asset is assigned in the blueprint.
	{
		// Create the widget and store it.
		MyLoadWidget = CreateWidget<UUserWidget>(this, wLoadingWidget);
	}
}

void UMyGameInstance::BeginLoadingScreen(const FString& InMapName)
{
	if (!IsRunningDedicatedServer())
	{
		FLoadingScreenAttributes LoadingScreen;
		LoadingScreen.bAutoCompleteWhenLoadingCompletes = true;
		LoadingScreen.WidgetLoadingScreen = FLoadingScreenAttributes::NewTestLoadingScreenWidget();
		
		GetMoviePlayer()->SetupLoadingScreen(LoadingScreen);
	}
}

void UMyGameInstance::EndLoadingScreen(UWorld* InLoadedWorld)
{

}