#pragma once
#include "Player.h"

class King :public Player
{
public:
	King(int size, int x, int y);
	bool condition();
};