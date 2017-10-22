#pragma once
#include "Card.h"

class Deck {
private:
	// Define deck ranks & suits
	const vector<string> rank = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
	const vector<string> suit = { "\3", "\4", "\5", "\6" };
	vector<Card> deck;
public:
	Deck();
	~Deck();
	int getDeckSize();
	void printDeck();
	int generateRandomNumber(int num);
	void pickCard();
};