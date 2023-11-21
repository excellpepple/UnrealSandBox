// "Made By  Excell Pepple "


#include "DebugObject.h"
#include "UnrealSandBox/DebugMacros.h"
#include "UnrealSandBox/UnrealSandBox.h"


// Sets default values
ADebugObject::ADebugObject()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>("ItemMeshComponent");
	RootComponent = ItemMesh;
}

// Called when the game starts or when spawned
void ADebugObject::BeginPlay()
{
	Super::BeginPlay();
	
}

float ADebugObject::TransformedSine()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

float ADebugObject::TransformedCosSine()
{
	return Amplitude * FMath::Cos(RunningTime * TimeConstant);
}

// Called every frame
void ADebugObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

	
	RunningTime += DeltaTime;
	

}

