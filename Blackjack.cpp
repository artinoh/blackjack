#include "Blackjack.h"



Blackjack::Blackjack() {
    deck.shuffle();
}


void Blackjack::playGame() {

    char userChoice;

    do {

        std::cout << "\nWould you like to play a round of blackjack?\n";
        std::cout << "1) Yes\n";
        std::cout << "Q) Quit\n";
        std::cin >> userChoice;

        if (userChoice == '1') {
            if (deck.getNumCards() < 10) {
                std::cout << "It is time to shuffle the deck!\n" << std::endl;
                deck.clear();
                deck.setCards();
                deck.shuffle();
            }
            playRound();
        }
        else if (userChoice == 'Q' || userChoice == 'q') {
            std::cout << "Thanks for playing!\n";
        }
        else {
            std::cout << "Invalid Choice.\n";
        }


    }
    while (userChoice != 'Q' && userChoice != 'q');



}

void Blackjack::playRound() {


    std::string playerMove = "";
    std::string dealerMove = "";


    player.clearHand();
    dealer.clearHand();
    player.addCard(deck.getTop());
    deck.removeTop();
    dealer.addCard(deck.getTop());
    deck.removeTop();
    player.addCard(deck.getTop());
    deck.removeTop();
    dealer.addCard(deck.getTop());
    deck.removeTop();

    std::cout << "\nThe Dealer is showing: \n";
    dealer.showCard();
    std::cout << std::endl;

    while (player.getHandValue() < 21 && playerMove != "Stand") {
        player.showHand();
        playerMove = player.getAction();
        if (playerMove == "Hit") {
            player.addCard(deck.getTop());
            deck.removeTop();
        }
    }

    player.showHand();
    std::cout << "\n\n";

    if (player.getHandValue() > 21) {
        std::cout << "\nBust! You lose!\n\n";
    }
    else {
        while (dealer.getHandValue() <= 21 && dealer.getAction() != "Stand") {
            dealer.showHand();
            dealerMove = dealer.getAction();
            if (dealerMove == "Hit") {
                std::cout << "\nThe dealer hits!\n\n";
                dealer.addCard(deck.getTop());
                deck.removeTop();
            }
        }
        std::cout << "\nThe dealer's hand: " << std::endl;
        dealer.showHand();
        std::cout << "\n\n";
        if (dealer.getHandValue() > 21) {
            std::cout << "\nThe dealer busted! You win!\n\n" << std::endl;
        }
        else if (dealer.getHandValue() == player.getHandValue()) {
            std::cout << "Your hand value: " << player.getHandValue() << std::endl;
            std::cout << "Dealer hand value: " << dealer.getHandValue() << std::endl;
            std::cout << "Push!" << std::endl;
        }
        else if (dealer.getHandValue() > player.getHandValue()) {
            std::cout << "Your hand value: " << player.getHandValue() << std::endl;
            std::cout << "Dealer hand value: " << dealer.getHandValue() << std::endl;
            std::cout << "The dealer wins!" << std::endl;
        }
        else {
            std::cout << "Your hand value: " << player.getHandValue() << std::endl;
            std::cout << "Dealer hand value: " << dealer.getHandValue() << std::endl;
            std::cout << "You win!" << std::endl;
        }
    }



}




