#include "HumanPlayer.h"




HumanPlayer::HumanPlayer() : Player("Player") {

}


std::string HumanPlayer::getAction() {
    char userChoice;


    std::cout << "\nWhat action would you like to take?\n";
    std::cout << "1) Hit\n";
    std::cout << "2) Stand\n";
    std::cin >> userChoice;
    std::cout << std::endl;

    while (userChoice != '1' && userChoice != '2') {
        std::cout << "Invalid Choice." << std::endl;
        std::cin >> userChoice;
    }

    if (userChoice == '1') {
        return "Hit";
    }
    else {
        return "Stand";
    }
}