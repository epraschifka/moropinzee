#include "Scissors.h"

int Scissors::outcome(Move *opponent)
{
    if (opponent->getName() == "Paper")
        return 1;

    if (opponent->getName() == "Rock")
        return -1;

    return 0;
}

std::string Scissors::getName()
{
    return "Scissors";
}