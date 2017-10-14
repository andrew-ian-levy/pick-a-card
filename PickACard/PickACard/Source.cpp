#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

class Card {
private:
	string rank;
	string suit;
public:
	// Constuctors
	Card() {};
	Card(string r, string s) : rank(r), suit(s) {};

	// Destructors
	~Card() {};

	// Accessors
	string getRank() const { return rank; }
	string getSuit() const { return suit; }

	// Mutators
	void setRank(string r) { this->rank = rank; }
	void setSuit(string s) { this->suit = suit; }
};

int randomNumber(int num)
{
	random_device rd;
	mt19937 gn(rd());
	uniform_int_distribution<int> range(0, num);
	return range(gn);
}

int main() {

	// Define deck rank & suits
	const vector<string> rank = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
	const vector<string> suit = { "\3", "\4", "\5", "\6" };

	// Create deck of cards
	vector<Card> deck;

	// Fill deck of cards
	for (auto s : suit)
		for (auto r : rank) {
			Card c(r, s);
			deck.push_back(c);
		}

	// Pick a card
	for (unsigned int i = 0; i < 20; ++i) {
		int rNum = randomNumber(deck.size() - 1);
		cout << deck[rNum].getRank() << " of " << deck[rNum].getSuit() << endl;
	}

	cin.get();
	return 0;
}