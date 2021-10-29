#pragma once

#include "Deck.h"
#include "HumanPlayer.h"
#include "DealerPlayer.h"
#include <string>


class Blackjack {

private:
    HumanPlayer player;
    DealerPlayer dealer;
    Deck deck;
    void playRound();

public:

    Blackjack();
    void playGame();



};

