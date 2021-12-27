#pragma once
#include "Player.h"

class Thief :public Player
{
public:
	Thief(int size, int x, int y);
	bool condition();
private:
	bool isKey=false;
};