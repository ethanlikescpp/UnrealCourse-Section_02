// the BullCowGame program

#include <iostream>
#include <string>
#include "FBullCowGame.h"

// function prototypes
void PrintInto();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // instantiate a new game

// void -> int
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
	
	int MaxTries = BCGame.GetMaxTries();
	std::cout << "Max tries: " << MaxTries << std::endl;

	// loop for the number of turns asking for guesses
	for (int count = 1; count <= MaxTries; count++)
	{
		std::string Guess = GetGuess();
		std::cout << "Your guess is: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

// void -> void
// introduces the game
void PrintInto() 
{
	constexpr int WORD_LENGTH = 9;
	std::cout << "Welcome to a game of Bulls and Cows" << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of? " << std::endl;
	std::cout << "---------------------------------" << std::endl;
	return;
}

// void -> std::string
// returns the user's guess
std::string GetGuess() 
{
	int CurrentTry = BCGame.GetCurrentTry();

	// get a guess from the player
	std::string Guess = "";
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
	std::string Response = "";
	std::getline(std::cin, Response);

	return (Response[0] == 'y') || (Response[0] == 'Y');

	
}
