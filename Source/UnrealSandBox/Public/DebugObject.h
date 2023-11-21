// "Made By  Excell Pepple "

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugObject.generated.h"

UCLASS()
class UNREALSANDBOX_API ADebugObject : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADebugObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	float RunningTime{0.f};
	UPROPERTY(EditAnywhere)
	float Amplitude{0.25f};
	UPROPERTY(EditAnywhere)
	float TimeConstant{5.f};
};
