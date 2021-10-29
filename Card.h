#pragma once
#include <string>
#include <sstream>
#include <vector>
#include <iostream>

class Card {
private:
    std::string suit;
    std::string value;


public:
    Card();
    Card(const std::string&, const std::string&);
    void setSuit(const std::string&);
    void setValue(const std::string&);
    std::string getSuit() const;
    std::string getValue() const;
    std::string cardToString() const;
    void printCard() const;


};


