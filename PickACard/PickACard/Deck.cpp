#include "Deck.h"

Deck::Deck()
{
}

Deck::~Deck()
{
}

void Deck::getDeck() {
	// Fill deck of cards
	deck.clear();
	for (auto s : suit) {
		for (auto r : rank) { Card c(r, s); deck.push_back(c); }
	}
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

void Deck::pickCard()
{
	int rNum = generateRandomNumber(deck.size() - 1);
	cout << deck[rNum].getRank() << " of " << deck[rNum].getSuit() << endl;
	// remove card from deck
	deck.erase(deck.begin() + rNum);
}

int Deck::getDeckSize()
{
	return deck.size();
}
