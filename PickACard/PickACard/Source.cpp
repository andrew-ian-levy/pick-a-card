#include "Card.h"
#include "Deck.h"

bool validEntry(string *nC, unsigned int *iC){
	
	// 1 or 2 character number regex pattern
	const regex reg("\\d{1,2}");

	// Validate user input
	bool valid = regex_match(*nC, reg);

	const string s = *nC;
	*iC = atoi(s.c_str());

	if (*iC > 52) { valid = false; }

	return valid;
}

int main() {

	// Instantiate deck of cards

	Deck *d = new Deck();

	// Pick a card from the deck
	string noCards;
	string *nC = &noCards;

	// integer for valid result
	unsigned int iNoCards;
	unsigned int *iN = &iNoCards;

	while (true) {

		d->getDeck();

		cout << "How many cards (1-52): " << flush;

		getline(cin, *nC);

		if (validEntry(nC, iN))
		{
			for (unsigned int i = 0; i < *iN; ++i) {
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

	delete d;

	return 0;
}