#include "Robot.h"
int Robot::outcome(Move *opponent)
{
    if (opponent->getName() == "Ninja" || opponent->getName() == "Zombie")
        return 1;

    if (opponent->getName() == "Monkey" || opponent->getName() == "Pirate")
        return -1;

    return 0;
}

std::string Robot::getName()
{
    return "Robot";
}