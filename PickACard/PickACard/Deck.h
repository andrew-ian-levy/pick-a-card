#pragma once
#include "Card.h"

class Deck {
private:
	// Define deck ranks & suits
	const vector<string> rank = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
	const vector<string> suit = { "\3", "\4", "\5", "\6" };
	vector<unique_ptr<Card>> deck;
public:
	Deck();
	~Deck();
	void getDeck() ;
	int getDeckSize() const ;
	void printDeck() const ;
	int generateRandomNumber(int num) ;
	void pickCard();
	void checkDeck();
};