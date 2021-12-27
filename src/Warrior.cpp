#include "Warrior.h"

Warrior::Warrior(int size, int x, int y)
{
	Init(Graphic::graphic().getPic(13), size, x, y, 13, 14);
}

bool Warrior::condition()
{
	return false;
}
