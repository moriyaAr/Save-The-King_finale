#pragma once
#include "StaticObject.h"

class Gate :public StaticObject
{
public:
	Gate(int size, int x, int y);
private:
	int m_firstIndex, m_secondIndex;
};