#include "FBullCowGame.h"

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }

int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const // no need for this to change any other values
{
	return false;
}

void FBullCowGame::Reset() { MyCurrentTry = 1; }

bool FBullCowGame::CheckGuessValidiy(std::string)
{
	return false;
}
