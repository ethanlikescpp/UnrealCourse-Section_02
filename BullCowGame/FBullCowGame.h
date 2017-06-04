#pragma once

#include <string>

class FBullCowGame {
public:
	int GetMaxTries() const; // not allowed to modify any values
	int GetCurrentTry() const;
	bool IsGameWon() const;

	// these must eventually change some values
	void Reset(); // TODO make a more rich return value
	bool CheckGuessValidiy(std::string); // TODO make a more rich return value


private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;

};