#include "Card.h"
#include "Deck.h"

bool validEntry(string *nC, unsigned int *iC) {

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

	// Vars for user input
	string noCards;
	string *nC = &noCards;

	// Vars for user input as integer
	unsigned int iNoCards;
	unsigned int *iN = &iNoCards;

	while (true) {

		d->getDeck();

		cout << "How many cards (1-52)? [0 to quit]: " << flush;

		getline(cin, *nC);
		cin.clear();

		if (validEntry(nC, iN))
		{
			for (unsigned int i = 0; i < *iN; ++i) {
				d->pickCard();
			}
		}
		else
		{
			cout << "1-52 please" << endl;
		}

		if (noCards == "0") { break; }

	}

	delete d;

	return 0;
}