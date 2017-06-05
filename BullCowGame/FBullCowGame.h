#pragma once
#include <string>

// per Unreal Engine standards
using FString = std::string;
using int32 = int;

class FBullCowGame {
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const; // not allowed to modify any values
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	// these must eventually change some values
	void Reset(); // TODO make a more rich return value
	bool CheckGuessValidiy(FString); // TODO make a more rich return value
	// provide a method for counting bulls and cows, and increasing try number

private:
	// see constructor for initialization
	int32 MyCurrentTry;
	int32 MyMaxTries;

};