#pragma once
#include "MovedObject.h"
#include "StaticObject.h"
#include "Helper.h"
//class StaticObject;
class Player :public MovedObject
{
public:
	virtual bool condition();
	void Init(sf::Texture tex, int size, int x, int y, int first, int second);
	Status colide(StaticObject* staticObj);
private:
	int m_firstIndex;
	int m_secondIndex;
};