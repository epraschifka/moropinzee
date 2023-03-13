#include <ninja.h>
int Ninja::outcome(Move *opponent)
{
    if (opponent->getName() == "Pirate" || opponent->getName() == "Zombie")
        return 1;

    if (opponent->getName() == "Monkey" || opponent->getName() == "Robot")
        return -1;
}

std::string Ninja::getName()
{
    return "Ninja";
}