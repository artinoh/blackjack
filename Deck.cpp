#include "Deck.h"


Deck::Deck() {
    setBaseDeck();
    setCards();
    srand(time(NULL));
}

Deck::Deck(const std::vector<std::string>& inSuits, const std::vector<std::string>& inValues) {
    possibleSuits = inSuits;
    possibleValues = inValues;
    setCards();
    (time(NULL));
}

Deck::~Deck() {
    clear();
}

void Deck::clear() {
    int numCards = getNumCards();
    for (int i = 0; i < numCards; i++) {
        delete cards[i];
        cards[i] = nullptr;
    }
    cards.clear();
}


int Deck::getNumCards() const {
    return cards.size();
}


std::vector<std::string> Deck::getPossibleValues() const {
    return possibleValues;
}


void Deck::printDeck() const {
    for (int i = 0; i < getNumCards(); i++) {
        cards[i]->printCard();
    }

}

Card* Deck::getTop() {
    return cards[cards.size() - 1];
}

void Deck::shuffle() {
    for (int i = 0; i < cards.size(); i++) {
        int j = i + rand() % (cards.size() - i);
        std::swap(cards[i], cards[j]);
    }
}

void Deck::setBaseDeck() {
    int numBaseSuits = 4;
    int numBaseValues = 13;
    std::string baseSuits[] = { "Spades", "Hearts", "Diamonds", "Clubs" };
    std::string baseValues[] = { "Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };
    for (int i = 0; i < numBaseSuits; i++) {
        possibleSuits.push_back(baseSuits[i]);
    }
    for (int i = 0; i < numBaseValues; i++) {
        possibleValues.push_back(baseValues[i]);
    }
}


void Deck::setCards() {
    for (int i = 0; i < possibleSuits.size(); i++) {
        for (int j = 0; j < possibleValues.size(); j++) {
            Card* newCard = new Card(possibleSuits[i], possibleValues[j]);
            cards.push_back(newCard);
        }
    }
}

void Deck::removeTop() {
    cards.pop_back();
}