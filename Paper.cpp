#include "Paper.h"
int Paper::outcome(Move *opponent)
{
    if (opponent->getName() == "Rock")
        return 1;
    if (opponent->getName() == "Scissors")
        return -1;

    return 0;
}

std::string Paper::getName()
{
    return "Paper";
}