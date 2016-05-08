#ifndef GAME_BORED_H
#define GAME_BORED_H

#include <iostream>
using namespace std;

#include "game_object.h"


class Game_bored
{

public:
	void init(int size, int x, int y, bool vertical);
	bool conflict();

private:
	Game_object *grid[4][5];

};

#endif 