#pragma once
#include "Player.h"

class DealerPlayer : public Player {

public:
    DealerPlayer();
    virtual std::string getAction();


};

