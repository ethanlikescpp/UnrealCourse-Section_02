#pragma once
#include <string>

// per Unreal Engine standards
using FString = std::string;
using int32 = int;

// two integers initialized to zero
struct BullCowCount 
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame 
{
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const; // not allowed to modify any values
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	// these must eventually change some values
	void Reset(); // TODO make a more rich return value
	bool CheckGuessValidiy(FString); // TODO make a more rich return value
	BullCowCount SubmitGuess(FString); // this returns a richer return value

private:
	// see constructor for initialization
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;

};