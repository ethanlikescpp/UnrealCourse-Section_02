/* This is the console executable, that makes use of the BullCow class
This acts as the view in a MVC pattern, and is responsible for all user
int32eraction. For game logic, see the FBullCowGame class.
*/

#include <iostream>
#include <string>
#include "FBullCowGame.h"

// per Unreal Engine standards
using FText = std::string;
using int32 = int;

// function prototypes
void PrintInto();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // instantiate a new game

// void -> int32
// the entry point for the application
int main() 
{
	bool bPlayAgain = false;
	do {
		PrintInto();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	}
	while (bPlayAgain);

	return 0; // exit the application
}

// void -> void
// displays the guesses
void PlayGame()
{
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();
	std::cout << "Max tries: " << MaxTries << std::endl;

	// loop for the number of turns asking for guesses
	// TODO change from FOR to WHILE loop once we are validating tries
	for (int32 count = 1; count <= MaxTries; count++)
	{
		FText Guess = GetGuess(); // TODO make validation check

		// submit valid guess to the game
		// print32 number of bulls and cows

		std::cout << "Your guess is: " << Guess << std::endl;
		std::cout << std::endl;
	}
	
	// TODO summarize game
}

// void -> void
// introduces the game
void PrintInto() 
{
	constexpr int32 WORD_LENGTH = 9;
	std::cout << "Welcome to a game of Bulls and Cows" << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of? " << std::endl;
	std::cout << "---------------------------------" << std::endl;
	return;
}

// void -> FText
// returns the user's guess
FText GetGuess() 
{
	int32 CurrentTry = BCGame.GetCurrentTry();

	// get a guess from the player
	FText Guess = "";
	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::getline(std::cin, Guess);
	return Guess;
}

// void -> bool
// returns whether or not the user wants to play again
bool AskToPlayAgain()
{
	BCGame.Reset(); // resets counter to 1
	std::cout << "Do you want to play again (y/n)? ";
	FText Response = "";
	std::getline(std::cin, Response);

	return (Response[0] == 'y') || (Response[0] == 'Y');

	
}
