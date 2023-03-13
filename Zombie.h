#include "Move.h"
class Zombie : public Move
{
    int outcome(Move *opponent);
    std::string getName();
};