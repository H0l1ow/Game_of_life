#include <iostream>
#include <ctime>
#include "Game.hpp"

#undef main

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));

    Game life;

    life.game_start();



}
