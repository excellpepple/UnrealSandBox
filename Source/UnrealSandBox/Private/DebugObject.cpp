// "Made By  Excell Pepple "


#include "DebugObject.h"
#include "UnrealSandBox/DebugMacros.h"
#include "UnrealSandBox/UnrealSandBox.h"


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

	
}

// Called every frame
void ADebugObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);
	// float MovementRate = 150.f;
	// float RotationRate = 45.f;
	
	// AddActorWorldOffset(FVector(MovementRate * DeltaTime, 0.f, 0.f));
	// AddActorWorldRotation(FRotator(0.F, RotationRate * DeltaTime, 0.f));


	
	RunningTime += DeltaTime;


	
	float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant);
	
	AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));
	
	DRAW_SPHERE_SINGLE_FRAME(GetActorLocation());
	DRAW_VECTOR_SINGLE_FRAME(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.f);

	
	

}

