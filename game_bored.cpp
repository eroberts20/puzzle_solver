#include <iostream>
using namespace std;

#include "game_bored.h"
#include "assert.h"

void Game_bored::init(int size, int x, int y, bool vertical)
{
	Game_object *tmp = new Game_object(size, x, y, true);

	if(size == 1)
	{
		assert(grid[x][y] == NULL);
		grid[x][y] = tmp;
	}
	else if(size == 2)
	{
		if(vertical == true)
		{
			assert(grid[x][y] == NULL);
			assert(grid[x][y+1] == NULL);
        	grid[x][y] = tmp;
        	grid[x][y+1] = tmp;
        }
        else
        {
        	assert(grid[x][y] == NULL);
        	assert(grid[x+1][y] == NULL);
        	grid[x][y] = tmp;
        	grid[x+1][y] = tmp;
        }
    }
	else if(size == 4)
	{
		assert(grid[x][y+1] == NULL);
		assert(grid[x][y] == NULL);
		assert(grid[x+1][y] == NULL);
		assert(grid[x+1][y+1] == NULL);
		grid[x][y] = tmp;
		grid[x][y+1] = tmp;
		grid[x+1][y] = tmp;
		grid[x+1][y+1] = tmp;

	}
	else if(size == 0)
	{
		assert(grid[x][y] == NULL);
		grid[x][y] = tmp;

		if(emp1 == NULL)
			emp1 = tmp;
		else
			emp2 = tmp;
	}

}

bool Game_bored::finished()
{
	
}


