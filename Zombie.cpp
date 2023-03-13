#include "Zombie.h"
int Zombie::outcome(Move *opponent)
{
    if (opponent->getName() == "Pirate" || opponent->getName() == "Monkey")
        return 1;

    if (opponent->getName() == "Ninja" || opponent->getName() == "Robot")
        return -1;

    return 0;
}

std::string Zombie::getName()
{
    return "Zombie";
}