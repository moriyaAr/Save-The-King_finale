#pragma once
#include "Player.h"

class Mage :public Player
{
public:
	Mage(int size, int x, int y);
	bool condition();
};