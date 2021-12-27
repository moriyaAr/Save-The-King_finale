#include "Gate.h"

Gate::Gate(int size, int x, int y)
{
	init(Graphic::graphic().getPic(18), size, x, y);
	m_firstIndex = 18;
	m_secondIndex = 19;
}
