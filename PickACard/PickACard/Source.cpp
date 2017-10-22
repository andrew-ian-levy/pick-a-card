#include "Card.h"
#include "Deck.h"

int main() {

	// Instantiate deck of cards
	Deck d;

	// Pick a card from the deck
	for (unsigned int i = 0; i < 10; ++i) {
		d.pickCard();
	}

	cin.get();
	return 0;
}