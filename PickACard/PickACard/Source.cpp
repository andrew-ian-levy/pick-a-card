#include "Card.h"
#include "Deck.h"

bool validEntry(string *nC, int *iC, int ds)  {

	// 1 or 2 character number regex pattern
	const regex reg("\\d{1,2}");

	// Validate user input
	bool valid = regex_match(*nC, reg);

	const string s = *nC;
	*iC = atoi(s.c_str());

	if (*iC > ds) { valid = false; }

	return valid;
}

int main() {

	// Instantiate deck of cards
	Deck *d = new Deck();

	// Vars for user input
	string noCards;
	string *nC = &noCards;

	// Vars for user input as integer
	int iNoCards;
	int *iN = &iNoCards;

	// Create deck of cards
	d->getDeck();

	while (true) {

		cout << "How many cards (1-" << d->getDeckSize() << ")? [0 to quit]: " << flush;

		getline(cin, *nC);
		cin.clear();

		if (validEntry(nC, iN, d->getDeckSize()))
		{
			for (int i = 0; i < *iN; ++i) {
				d->pickCard();
			}
		}
		else
		{
			cout << "1-" << d->getDeckSize() << " please" << endl;
		}

		if (noCards == "0") { break; }

	}

	// Destroy deck of cards
	delete d;

	return 0;
}