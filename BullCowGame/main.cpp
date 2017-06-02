// entry point for the BullCowGame program

#include <iostream>
#include <string>

using namespace std;

void PrintInto();

// the entry point for the application
int main() 
{
	PrintInto();

	// get a guess from the player
	string Guess = "";
	getline(cin, Guess);

	// repeat the guess back to them
	cout << endl << "Your guess is: " << Guess << endl;
	return 0;
}

// void -> void
// introduces the game
void PrintInto() 
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to a game of Bulls and Cows" << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of? ";
	return;
}