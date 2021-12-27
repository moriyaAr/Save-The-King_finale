#include "Fire.h"

Fire::Fire(int size, int x, int y)
{
	init(Graphic::graphic().getPic(23), size, x, y);
}
