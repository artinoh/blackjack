#pragma once
#include "Card.h"
#include "Deck.h"

class Player {

private:
    std::vector<Card*> hand;
    std::string playerType;

public:
    Player();
    Player(const std::string&);
    void addCard(Card*);
    std::string getPlayerType() const;
    void showHand() const;
    void showCard() const;
    int getNumCards() const;
    int getHandValue() const;
    virtual std::string getAction() = 0;
    void clearHand();

};

