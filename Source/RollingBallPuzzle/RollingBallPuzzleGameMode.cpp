// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RollingBallPuzzleGameMode.h"
#include "RollingBallPuzzleBall.h"

ARollingBallPuzzleGameMode::ARollingBallPuzzleGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ARollingBallPuzzleBall::StaticClass();
}
