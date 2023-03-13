#include "Move.h"
class Scissors : public Move
{
    int outcome(Move *opponent);
    std::string getName();
};