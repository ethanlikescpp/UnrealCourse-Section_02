// the BullCowGame program

#include <iostream>
#include <string>

using namespace std;

// function prototypes
void PrintInto();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

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
	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		string Guess = GetGuess();
		cout << "Your guess is: " << Guess << endl;
		cout << endl;
	}
}

// void -> void
// introduces the game
void PrintInto() 
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to a game of Bulls and Cows" << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of? " << endl;
	cout << "---------------------------------" << endl;
	return;
}

// void -> string
// returns the user's guess
string GetGuess() 
{
	// get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	return Guess;
}

// void -> bool
// returns whether or not the user wants to play again
bool AskToPlayAgain()
{
	cout << "Do you want to play again (y/n)? ";
	string Response = "";
	getline(cin, Response);

	return (Response[0] == 'y') || (Response[0] == 'Y');

	
}
