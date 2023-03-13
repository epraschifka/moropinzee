#include "Move.h"
class Pirate : public Move
{
public:
    int outcome(Move *opponent);
    std::string getName();
};