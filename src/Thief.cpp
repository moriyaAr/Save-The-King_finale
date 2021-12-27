#include "..\include\Thief.h"

Thief::Thief(int size, int x, int y)
{
	Init(Graphic::graphic().getPic(15), size, x, y, 15, 16);
}

bool Thief::condition()
{
	return false;
}
