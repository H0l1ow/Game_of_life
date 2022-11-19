#include "Game.hpp"
#include <Windows.h>

Game::Game()
{
}

void Game::set_ineration_position()
{
	COORD position = { 5, Game::map_of_life.size() + 2};
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, position);
	std::cout << "Generation : " << Game::get_iterations();
}

void Game::set_game_start()
{
	Game::set_random_cells();
	
	while (true)
	{
		for (int i = 0; i < Game::map_of_life.size(); i++)
		{
			for (int j = 0; j < Game::map_of_life[i].size(); j++)
			{
				Game::temp_map_of_life[i][j] = Game::is_Alive(map_of_life, i, j) ? 1 : 0;
			}
		}

		for (int i = 0; i < Game::temp_map_of_life.size(); i++)
		{
			for (int j = 0; j < Game::temp_map_of_life[i].size(); j++)
			{
				if (Game::temp_map_of_life[i][j] == 0) { std::cout << " "; }
				else { std::cout << "o"; }
			}
			std::cout << "\n";
		}

		Game::m_cout++;
		Game::map_of_life = Game::temp_map_of_life;

		set_ineration_position();
		Sleep(100);
		system("cls");
	}
}