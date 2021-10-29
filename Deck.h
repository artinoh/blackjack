#pragma once

#include "Card.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cstdio>

class Deck {

private:
    std::vector<Card*> cards;
    std::vector<std::string> possibleSuits;
    std::vector<std::string> possibleValues;




public:
    Deck();
    Deck(const std::vector<std::string>&, const std::vector<std::string>&);
    ~Deck();
    void setBaseDeck();
    void setCards();
    void removeTop();
    std::vector<std::string> getPossibleValues() const;
    int getNumCards() const;
    Card* getTop();
    void printDeck() const;
    void shuffle();
    void clear();



};

