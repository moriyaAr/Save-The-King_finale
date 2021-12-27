#pragma once
#include "Player.h"

class Warrior:public Player
{
public:
	Warrior(int size, int x, int y);
	bool condition() ;
};