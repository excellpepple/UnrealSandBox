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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sine Parameters")
	float Amplitude{0.25f};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sine Parameters")
	float TimeConstant{5.f};

	UFUNCTION(BlueprintPure)
	float TransformedSine();
	UFUNCTION(BlueprintPure)
	float TransformedCosSine();

	template<typename T>
	T Avg(T First, T Second);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

private:
	UPROPERTY(VisibleInstanceOnly)
	float RunningTime{0.f};
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ItemMesh;
};

template <typename T>
T ADebugObject::Avg(T First, T Second)
{
	return (First + Second)/2;
}
