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

	const FString HIDDEN_WORD = "planet"; // constexpr is too strong
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTry = 1;
	return;
}

bool FBullCowGame::CheckGuessValidiy(FString)
{
	return false;
}

// receives a VALID guess, increments turn, and returns count
BullCowCount FBullCowGame::SubmitGuess(FString)
{
	// increment the turn number
	MyCurrentTry++; 

	// setup a return variable
	BullCowCount BullCowCount; 

	// loop thorugh all leters in the guess
		// compare letters against the hidden word

	return BullCowCount;
}
