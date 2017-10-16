#pragma once
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

