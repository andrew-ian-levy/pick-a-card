#include "Card.h"
#include "Deck.h"

int main() {

	// Instantiate deck of cards

	Deck *d = new Deck();

	// Pick a card from the deck
	for (unsigned int i = 0; i < 52; ++i) {
		d->pickCard();
		//cout << "size: " << d->getDeckSize() << endl;
	}

	cin.get();
	
	delete d;

	return 0;
}