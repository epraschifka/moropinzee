#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "Monkey.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"

class Player
{
private:
    std::string name;

public:
    virtual Move *makeMove() = 0;
    std::string getName();
};

#endif