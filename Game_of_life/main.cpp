﻿#include <iostream>
#include <ctime>
#include "Game.hpp"



int main()
{
    srand(static_cast<unsigned int>(time(NULL)));

    Game life;

    life.set_game_start();
}
