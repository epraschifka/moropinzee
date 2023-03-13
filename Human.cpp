#include "Human.h"

Human::Human()
{
    name = "Human";
}

Human::Human(std::string name)
{
    this->name = name;
}

Move *Human::makeMove()
{
    std::string move;
    std::cin >> move;

    if (move == "Monkey")
        return new Monkey;

    if (move == "Ninja")
        return new Ninja;

    if (move == "Paper")
        return new Paper;

    if (move == "Pirate")
        return new Pirate;

    if (move == "Robot")
        return new Robot;

    if (move == "Rock")
        return new Rock;

    if (move == "Scissors")
        return new Scissors;

    if (move == "Zombie")
        return new Zombie;

    else
        return NULL;
}