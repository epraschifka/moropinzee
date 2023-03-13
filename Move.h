#include <string>

class Move
{
public:
    virtual std::string getName() = 0;
    virtual int outcome(Move *opponent) = 0;
};
