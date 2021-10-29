#include "Player.h"

Player::Player() {

}

Player::Player(const std::string& playerType) {
    this->playerType = playerType;
}


void Player::addCard(Card* newCard) {
    hand.push_back(newCard);
}

int Player::getNumCards() const {
    return hand.size();
}

std::string Player::getPlayerType() const {
    return playerType;
}



void Player::clearHand() {
    for (int i = 0; i < getNumCards(); i++) {
        delete hand[i];
    }
    hand.clear();
}

int Player::getHandValue() const {
    int handValue = 0;

    for (int i = 0; i < getNumCards(); i++) {
        if (hand[i]->getValue() == "One") {
            handValue += 1;
        }
        else if (hand[i]->getValue() == "Two") {
            handValue += 2;
        }
        else if (hand[i]->getValue() == "Three") {
            handValue += 3;
        }
        else if (hand[i]->getValue() == "Four") {
            handValue += 4;
        }
        else if (hand[i]->getValue() == "Five") {
            handValue += 5;
        }
        else if (hand[i]->getValue() == "Six") {
            handValue += 6;
        }
        else if (hand[i]->getValue() == "Seven") {
            handValue += 7;
        }
        else if (hand[i]->getValue() == "Eight") {
            handValue += 8;
        }
        else if (hand[i]->getValue() == "Nine") {
            handValue += 9;
        }
        else if (hand[i]->getValue() == "Ten"
                 || hand[i]->getValue() == "Jack"
                 || hand[i]->getValue() == "Queen"
                 || hand[i]->getValue() == "King") {
            handValue += 10;
        }
        else if (hand[i]->getValue() == "Ace") {
            if (handValue < 11) {
                handValue += 11;
            }
            else {
                handValue += 1;
            }
        }
    }

    return handValue;
}


void Player::showHand() const {
    std::cout << this->getPlayerType() << "'s Hand: " << std::endl;
    std::cout << "Value: " << this->getHandValue() << std::endl;
    for (int i = 0; i < hand.size(); i++) {
        hand[i]->printCard();
    }
}

void Player::showCard() const {
    hand[0]->printCard();
}