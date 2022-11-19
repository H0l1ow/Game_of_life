#ifndef LOGIC_HPP
#define LOGIC_HPP

#include <iostream>
#include <vector>

class Logic
{
protected:
	int m_cout;

public:
	Logic();

	bool is_Alive(std::vector<std::vector<int>>, int, int);
	int get_iterations();


};

#endif
