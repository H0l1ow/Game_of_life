#include "Grid.hpp"


Grid::Grid()
	: m_Width(60), m_Height(20), m_rand(5)
{
}

void Grid::set_random_cells()
{
	for (int Height = 0; Height < map_of_life.size(); Height++)
	{
		for (int Width = 0; Width < map_of_life[Height].size(); Width++)
		{
			map_of_life[Height][Width] = rand() % m_rand == 0 ? 1 : 0;
		}
	}
}
