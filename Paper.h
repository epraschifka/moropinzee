#include "Move.h"
class Paper : public Move
{
public:
    int outcome(Move *opponent);
    std::string getName();
};