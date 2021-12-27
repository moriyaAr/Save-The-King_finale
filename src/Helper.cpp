#include "Helper.h"

Location::Location(int x, int y)
{
	m_x = x;
	m_y = y;
}

void Location::init(int x, int y)
{
	m_x = x;
	m_y = y;
}

void Location::init_x(int x)
{
	m_x = x;
}
void Location::init_y(int y)
{
	m_y = y;
}

Location Location::getLocation()
{
	return *this;
}

int Location::getX()
{
	return m_x;
}

int Location::getY()
{
	return m_y;
}
