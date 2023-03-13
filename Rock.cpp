#include "Rock.h"

int Rock::outcome(Move *opponent)
{
    if (opponent->getName() == "Scissors")
        return 1;

    if (opponent->getName() == "Paper")
        return -1;

    return 0;
}

std::string Rock::getName()
{
    return "Rock";
}