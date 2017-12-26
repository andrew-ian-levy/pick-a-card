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
		for (auto r : rank) {
			deck.push_back(make_unique<Card>(r, s)); 
		}
	}
}

void Deck::printDeck() const {
	for (const auto &crd : deck)
	{
		cout << crd->getRank() << " of " << crd->getSuit() << endl;
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
	cout << deck[rNum]->getRank() << " of " << deck[rNum]->getSuit() << endl;
	// mark card for removal
	deck[rNum]->dropCard();
	checkDeck();
}

void Deck::checkDeck()
{
	// remove card from deck
	deck.erase(remove_if(deck.begin(),deck.end(),[](unique_ptr<Card> const &d) { return d->isInDeck() == false; }),deck.end());
}

int Deck::getDeckSize() const
{
	return deck.size();
}
