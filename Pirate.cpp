#include "Pirate.h"
int Pirate::outcome(Move *opponent)
{
    if (opponent->getName() == "Robot" || opponent->getName() == "Monkey")
        return 1;

    if (opponent->getName() == "Ninja" || opponent->getName() == "Zombie")
        return -1;

    return 0;
};

std::string Pirate::getName()
{
    return "Pirate";
}