#include "Move.h"
class Ninja : public Move
{
public:
    int outcome(Move *opponent);
    std::string getName();
};