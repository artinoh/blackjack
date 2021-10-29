#pragma once
#include "Player.h"
#include <iostream>

class HumanPlayer : public Player {

public:
    HumanPlayer();
    virtual std::string getAction();
};

