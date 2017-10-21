#include "Deck.h"

Deck::Deck()
{
	// Fill deck of cards
	for (auto s : suit) {
		for (auto r : rank) { Card c(r, s); deck.push_back(c); }
	}
}

Deck::~Deck()
{
}

void Deck::printDeck() {
	for (unsigned int i = 0; i < deck.size(); ++i) {
		cout << deck[i].getRank() << " of " << deck[i].getSuit() << endl;
	}
}

int Deck::generateRandomNumber(int num)
{
	random_device rd;
	mt19937 gn(rd());
	uniform_int_distribution<int> range(0, num);
	return range(gn);
}

int Deck::getDeckSize()
{
	return deck.size();
}
