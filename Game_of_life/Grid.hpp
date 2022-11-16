#ifndef GRID_HPP
#define GRID_HPP

#include <iostream>
#include <vector>


class Grid
{

protected:
	int m_Height;
	int m_Widght;
	int m_rand; // for example 5 is a 20% chance on cell alive
	std::vector<std::vector<int>> map_of_life{ m_Height, std::vector<int>(m_Widght, 0) };
	std::vector<std::vector<int>> temp_map_of_life{ m_Height, std::vector<int>(m_Widght, 0) };

public:
	Grid();

	void set_random_cells();

};

#endif

