#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeManager.generated.h"

UCLASS()
class KILLERIMPULSE_API ATimeManager : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		FString hyperateID;

	UPROPERTY(EditAnywhere)
		FString webSocketKey = "6qmpn9OjjuVgRxYnP25UDBaq3cKKN6PUaCgtryZUZv7YbSc25kjqT3OYkyYmGY9i";

	UPROPERTY(VisibleAnywhere)
		float timeElapsed = 0;

	UPROPERTY(EditAnywhere)
		float lerpTime = 0.5;

	UPROPERTY(VisibleAnywhere)
		float currentTimeDilation = 1.0;

	UPROPERTY(EditAnywhere)
		USoundBase* heartbeatSFX;

public:	

	ATimeManager();

protected:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void ConnectToHypeRate(bool useID);

	virtual void DisconnectFromHypeRate();

	void UpdateGlobalTimeDilation(float& deltaTime);

	void PlayHeartbeatSound();

public:

	UFUNCTION(BlueprintCallable)
		virtual void Updatehyperateid(FString newID, UPARAM(DisplayName = "isValid") bool& isValid);

	UFUNCTION(BlueprintCallable)
		virtual void Usehyperateid(bool useID);

};
