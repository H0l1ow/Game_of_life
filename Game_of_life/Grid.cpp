#include "Grid.hpp"


Grid::Grid()
	//: m_Width(60), m_Height(20), m_rand(5)
{
	settings();
}

void Grid::settings()
{
	std::cout << "Game of Life settings\n";
	std::cout << "Set width: "; std::cin >> m_Width;
	std::cout << "Set height: "; std::cin >> m_Height;
	std::cout << "Set x (draws 1 to x) for cell alive : "; std::cin >> m_rand;

	for (int i = 0; i < m_Height; i++)
	{
		std::vector<int> temp;
		for (int j = 0; j < m_Width; j++)
		{
			temp.push_back(0);
		}
		map_of_life.push_back(temp);
		temp_map_of_life.push_back(temp);
	}
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
