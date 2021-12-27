#include "..\include\Mage.h"

Mage::Mage(int size, int x, int y)
{
	Init(Graphic::graphic().getPic(11), size, x, y, 11, 12);
}

bool Mage::condition()
{
	return false;
}
