#include "Move.h"
class Robot : public Move
{
    int outcome(Move *opponent);
    std::string getName();
};