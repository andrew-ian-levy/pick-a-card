#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <regex>
#include <memory>

using namespace std;

class Card {
private:
	string rank;
	string suit;
	bool inDeck = true;
public:
	// Constuctors
	Card() {};
	Card(string r, string s) : rank(r), suit(s) {};

	// Destructors
	~Card() {};

	// Accessors
	string getRank() const { return rank; }
	string getSuit() const { return suit; }
	bool isInDeck() const { return inDeck; }

	// Mutators
	void setRank(string r) { this->rank = rank; }
	void setSuit(string s) { this->suit = suit; }
	void dropCard() { inDeck = false;  }
};

