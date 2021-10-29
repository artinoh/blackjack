#include "DealerPlayer.h"


DealerPlayer::DealerPlayer() : Player("Dealer") {

}

std::string DealerPlayer::getAction() {
    if (getHandValue() <= 16) {
        return "Hit";
    }
    else {
        return "Stand";
    }

}