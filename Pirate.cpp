#include <Pirate.h>
int Pirate::outcome(Move *opponent)
{
    if (opponent->getName() == "Robot" || opponent->getName() == "Monkey")
        return 1;

    if (opponent->getName() == "Ninja" || opponent->getName() == "Zombie")
        return -1;
};

std::string getName()
{
    return "Pirate";
}