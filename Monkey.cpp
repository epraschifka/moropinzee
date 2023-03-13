#include "Monkey.h"
int Monkey::outcome(Move *opponent)
{
    if (opponent->getName() == "Ninja" || opponent->getName() == "Robot")
        return 1;
    if (opponent->getName() == "Pirate" || opponent->getName() == "Zombie")
        return -1;

    return 0;
}

std::string Monkey::getName()
{
    return "Monkey";
}