#include "Move.h"
class Monkey : public Move
{
    int outcome(Move *opponent);

    std::string getName();
};