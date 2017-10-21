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

vector<Card> Deck::getDeck()
{
	return vector<Card>();
}

int Deck::getDeckSize()
{
	return deck.size();
}
