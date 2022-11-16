#include "Grid.hpp"


Grid::Grid()
	: m_Widght(60), m_Height(20), m_rand(5)
{
}

void Grid::set_random_cells()
{
	for (int height = 0; height < map_of_life.size(); height++)
	{
		for (int widght = 0; widght < map_of_life[height].size(); widght++)
		{
			map_of_life[height][widght] = rand() % m_rand == 0 ? 1 : 0;
		}
	}
}
