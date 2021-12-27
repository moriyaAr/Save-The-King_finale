#pragma once
#include "StaticObject.h"

class Orc :public StaticObject
{
public:
	Orc(int size, int x, int y);
private:
	int m_firstIndex, m_secondIndex;
};