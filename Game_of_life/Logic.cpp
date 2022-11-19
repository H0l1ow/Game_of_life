#include "Logic.hpp"


Logic::Logic()
	: m_cout(0)
{
}

bool Logic::is_Alive(std::vector<std::vector<int>> temp, int x, int y)
{
	int alive = 0;

	if (x > 0 && temp[x - 1][y] == 1) alive += 1;
	if (x < temp.size() - 1 && temp[x + 1][y] == 1) alive += 1;
	if (y > 0 && temp[x][y - 1] == 1) alive += 1;
	if (y < temp[0].size() - 1 && temp[x][y + 1] == 1) alive += 1;

	if (y > 0 && x > 0 && temp[x - 1][y - 1] == 1) alive += 1;
	if (y > 0 && x < temp.size() - 1 && temp[x + 1][y - 1] == 1) alive += 1;
	if (y < temp[0].size() - 1 && x > 0 && temp[x - 1][y + 1] == 1) alive += 1;
	if (y < temp[0].size() - 1 && x < temp.size() - 1 && temp[x + 1][y + 1] == 1) alive += 1;

	if (temp[x][y] == 1 && alive < 2) return false;
	if (temp[x][y] == 1 && (alive == 2 || alive == 3)) return true;
	if (alive > 3) return false;
	if (temp[x][y] == 0 && alive == 3) return true;
	
	
	return false;
}

int Logic::get_iterations()
{
	return m_cout;
}
