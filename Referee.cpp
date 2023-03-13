#include "Referee.h"

Referee::Referee(){};

Player *Referee::refGame(Player *player1, Player *player2)
{
    Move *move1 = player1->makeMove();
    Move *move2 = player2->makeMove();
    if (move1->outcome(move2) == 1)
        return player1;
    if (move1->outcome(move2) == -1)
        return player2;
    return NULL;
}