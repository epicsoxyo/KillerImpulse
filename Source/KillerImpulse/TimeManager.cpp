#include "TimeManager.h"

#include "../Plugins/HypeRateHeartbeat.1.0/HypeRateHeartbeat/Source/HypeRateHeartbeat/Public/BPHypeRateHeartbeat.h"

#include "Math/UnrealMathUtility.h"
#include "GameFramework/WorldSettings.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
ATimeManager::ATimeManager()
{

	PrimaryActorTick.bCanEverTick = true;

}



// Called when the game starts or when spawned
void ATimeManager::BeginPlay()
{

	Super::BeginPlay();
	
}



// Called every frame
void ATimeManager::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

	UpdateGlobalTimeDilation(DeltaTime);

}



// Called on destruction or at end of game
void ATimeManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{

	Super::EndPlay(EndPlayReason);

	DisconnectFromHypeRate();

}



// Connects to HypeRate API
void ATimeManager::ConnectToHypeRate(bool useID)
{

	FString ID = useID ? hyperateID : "internal-testing";

	if(!useID || hyperateID != "") UBPHypeRateHeartbeat::Connect(ID, webSocketKey);

}



// updates the global time dilation using deltaTime and the heartbeat from HypeRateAPI
void ATimeManager::UpdateGlobalTimeDilation(float& deltaTime)
{

	float heartRate = (float)UBPHypeRateHeartbeat::GetHeartBeat();
	heartRate = FMath::Clamp(heartRate, 0.01, 300);

	timeElapsed += deltaTime / currentTimeDilation;
	if (timeElapsed > (60 / heartRate))
	{
		timeElapsed = 0;
		PlayHeartbeatSound();
	}

	currentTimeDilation = FMath::Lerp(1.0, 0.0, timeElapsed / lerpTime);
	currentTimeDilation = FMath::Clamp(currentTimeDilation, 0.1, 1);

	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), currentTimeDilation);

}



void ATimeManager::PlayHeartbeatSound()
{

	UGameplayStatics::PlaySound2D(this, heartbeatSFX);

}



void ATimeManager::DisconnectFromHypeRate()
{

	UBPHypeRateHeartbeat::Disconnect();

}



void ATimeManager::Updatehyperateid(FString newID, UPARAM(DisplayName = "isValid") bool& isValid)
{

	hyperateID = newID;

	isValid = (hyperateID != "");

	Usehyperateid(isValid);

}



void ATimeManager::Usehyperateid(bool useID)
{

	DisconnectFromHypeRate();
	ConnectToHypeRate(useID);

}