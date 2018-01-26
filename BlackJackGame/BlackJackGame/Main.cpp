// BlackJack Game runner file
// This program allows one person to play Blackjack, alone, against a dealer and a few other program-ran opponents
// Github repo: https://github.com/akstoulil/Group-Project-1
// Written by: Logan Christianson, <everyone insert your names here>

#include "stdafx.h"
#include "FunctionMain.cpp"
#include <iostream>
using namespace std;

int main() {
	cout << "Welcome to the game of Blackjack!";

	//*DeckObject is a pointer to the game's CardClass Array (i.e. the deck) that's returned from the SetupDeck() function
	//That's in the FunctionMain.cpp file
	CardClass *DeckObject = SetupDeck();

    return 0;
}