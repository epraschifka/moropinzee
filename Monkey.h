#include "Move.h"
class Monkey : public Move
{
    int outcome(Move *opponent)
    {
        if (opponent->getName() == "Ninja" || opponent->getName() == "Robot")
            return 1;
        if (opponent->getName() == "Pirate" || opponent->getName() == "Zombie")
            return -1;
    }

    std::string getName();
};