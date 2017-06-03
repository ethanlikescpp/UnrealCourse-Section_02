#pragma once

class FBullCowGame {
public:
	void Reset(); // TODO make a more rich return value
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidiy(string); // TODO make a more rich return value


private:
	int MyCurrentTry;
	int MyMaxTries;

};