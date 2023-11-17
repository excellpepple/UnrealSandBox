// "Made By  Excell Pepple "


#include "DebugObject.h"
#include "DrawDebugHelpers.h"


// Sets default values
ADebugObject::ADebugObject()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ADebugObject::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine){
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString("Hello World"));
	}
	UWorld* world = GetWorld();
	if(world)
	{
		FVector Location = GetActorLocation();
		DrawDebugCircle(world, Location, 40.f, 24, FColor::Red, true);	
	}
	
}

// Called every frame
void ADebugObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

