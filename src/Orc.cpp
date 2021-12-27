#include "Orc.h"

Orc::Orc(int size, int x, int y)
{
	init(Graphic::graphic().getPic(21), size, x, y);
	m_firstIndex = 21;
	m_secondIndex = 22;
}
