#include "Card.h"


Card::Card() {

}



Card::Card(const std::string& suit, const std::string& value) {
    setSuit(suit);
    setValue(value);
}

void Card::setSuit(const std::string& suit) {
    this->suit = suit;
}

void Card::setValue(const std::string& value) {
    this->value = value;
}

std::string Card::getSuit() const {
    return suit;
}

std::string Card::getValue() const {
    return value;
}

std::string Card::cardToString() const {

    std::string cardAsString;
    std::stringstream cardString;
    cardString << value << " of " << suit;
    cardAsString = cardString.str();


    return cardAsString;
}

void Card::printCard() const {
    std::cout << cardToString() << std::endl;
}

