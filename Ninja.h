#include "Move.h"
class Ninja : public Move
{
    int outcome(Move *opponent);
    std::string getName();
};