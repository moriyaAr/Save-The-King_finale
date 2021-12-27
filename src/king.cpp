#include "king.h"

King::King(int size,int x,int y)
{
	Init(Graphic::graphic().getPic(9), size, x, y, 9, 10);
}

bool King::condition()
{
	return false;
}
