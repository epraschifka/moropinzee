#include "Move.h"
class Pirate : public Move
{
    int outcome(Move *opponent);
    std::string getName();
};