#include "Wall.h"

Wall::Wall(int size, int x, int y)
{
	init(Graphic::graphic().getPic(24), size, x, y);
}
