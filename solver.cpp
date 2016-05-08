#include <iostream>
using namespace std;

#include "game_bored.h"
 
 void init();
 Game_bored bored;

int main()
{


    init();








	return 0;
}



void init()
{
 bored.init(1, 0, 2, true);
 bored.init(1, 1, 2, true);
 bored.init(1, 1, 3, true);
 bored.init(1, 1, 4, true);
 bored.init(2, 0, 0, true);
 bored.init(2, 0, 3, true);
 bored.init(2, 2, 3, true);
 bored.init(2, 3, 3, true);
 bored.init(2, 2, 2, false);
 bored.init(4, 1, 0, true);

 bored.init(0, 3, 0, true);
 bored.init(0, 3, 1, true);
}