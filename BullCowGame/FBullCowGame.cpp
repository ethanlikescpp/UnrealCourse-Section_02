#include "FBullCowGame.h"

FBullCowGame::FBullCowGame() // runtime values in here override compile time values
{
	Reset();
}

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }

int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const // no need for this to change any other values
{
	return false;
}

void FBullCowGame::Reset() 
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;
	MyCurrentTry = 1;
	
}

bool FBullCowGame::CheckGuessValidiy(FString)
{
	return false;
}
