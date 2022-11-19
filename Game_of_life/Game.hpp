#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include "Logic.hpp"
#include "Grid.hpp"

class Game : protected Logic, protected Grid
{
protected:


public:
	Game();

	void set_ineration_position();
	void set_game_start();
};

#endif