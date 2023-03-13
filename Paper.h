#include "Move.h"
class Paper : public Move
{
    int outcome(Move *opponent);
    std::string getName();
};