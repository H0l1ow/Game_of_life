#include "Grid.hpp"


Grid::Grid()
	: m_Width(640), m_Height(480)
{
	settings();
}

void Grid::settings()
{
	for (int i = 0; i < m_Width; i++)
	{
		std::vector<int> temp;
		for (int j = 0; j < m_Height; j++)
		{
			temp.push_back(0);
		}
		map_of_life.push_back(temp);
		temp_map_of_life.push_back(temp);
	}
}

void Grid::set_random_cells()
{
	for (auto& rnd : map_of_life)
	{
		std::generate(rnd.begin(), rnd.end(), []() {return rand() % 10 == 0 ? 1 : 0; });
	}
}
