#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include "Logic.hpp"
#include "Grid.hpp"
#include "Screen.hpp"

class Game : protected Logic, protected Grid, protected Screen
{
protected:


public:
	Game();

	void set_ineration_position();
	void game_start();
};

#endif