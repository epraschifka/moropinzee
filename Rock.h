#include "Move.h"
class Rock : public Move
{
    int outcome(Move *opponent);
    std::string getName();
};