// BlackJack Game runner file
// Written by: Logan Christianson, *

#include "stdafx.h"
#include "FunctionMain.cpp"
#include <iostream>
using namespace std;

int main() {
	cout << "Welcome to the game of Blackjack!";

	CardClass *DeckObject = SetupDeck(); 

    return 0;
}