#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <iostream>

using namespace std;

class Game_object
{
public:
	Game_object(int size, int x, int y, bool orientation)
	{
		m_vertical = orientation;
		m_size = size;
		m_x = x;
		m_y = y;
	}


private:
	int m_size;
	int m_x;
	int m_y;
	bool m_vertical;
};

#endif