#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_LINE(StartLocation, EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, true);
#define DRAW_DEBUGPOINT(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location,15.f, FColor::Yellow, true);
#define DRAW_VECTOR(StartLocation, EndLocation) if(GetWorld()) \
{ \
DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, true); \
DrawDebugPoint(GetWorld(), EndLocation,15.f, FColor::Yellow, true); \
}

#define DRAW_SPHERE_SINGLE_FRAME(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 40.f, 24, FColor::Red, false, -1);
#define DRAW_LINE_SINGLE_FRAME(StartLocation, EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, false, -1);
#define DRAW_DEBUGPOINT_SINGLE_FRAME(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location,15.f, FColor::Yellow, false, -1);
#define DRAW_VECTOR_SINGLE_FRAME(StartLocation, EndLocation) if(GetWorld()) \
{ \
DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, false, -1); \
DrawDebugPoint(GetWorld(), EndLocation,15.f, FColor::Yellow, false, -1); \
}