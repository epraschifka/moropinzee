#include <Paper.h>
int Paper::outcome(Move *opponent)
{
    if (opponent->getName() == "Rock")
        return 1;
    if (opponent->getName() == "Scissors")
        return -1;
}

std::string getName()
{
    return "Paper";
}