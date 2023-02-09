#ifndef GRID_HPP
#define GRID_HPP

#include <iostream>
#include <vector>
#include <algorithm>


class Grid
{

protected:
	int m_Height;
	int m_Width;
	
	std::vector<std::vector<int>> map_of_life;
	std::vector<std::vector<int>> temp_map_of_life;
public:
	Grid();

	void settings();
	void set_random_cells();

};

#endif

