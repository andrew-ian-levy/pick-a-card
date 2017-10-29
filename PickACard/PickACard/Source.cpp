#include "Card.h"
#include "Deck.h"

int main() {

	// Instantiate deck of cards

	Deck *d = new Deck();

	// Pick a card from the deck
	string noCards;

	// 1 or 2 character number
	const regex reg("\\d{1,2}");

	while (true) {

		cout << "How many cards (1-52): " << flush;

		getline(cin, noCards);

		// Validate user input
		const bool result = regex_match(noCards, reg);

		if (result)
		{
			int iNoCards = atoi(noCards.c_str());
			for (unsigned int i = 0; i < iNoCards; ++i) {
				d->pickCard();
			}
		}
		else
		{
			cout << "Number 1-25 please" << endl;
		}

		cin.clear();

		if (noCards == "0") { break; }

	}

	//cin.get();

	delete d;

	return 0;
}