#pragma once
#include "Object.h"
#include "king.h"
//#include "Mage.h"
//#include "Thief.h"
//#include "Warrior.h"
class StaticObject : public Object
{
public:
	virtual ~StaticObject();
	virtual Status colide(King king);
	//virtual Status colide(Mage mage);
	//virtual Status colide(Thief thief);
	//virtual Status colide(Warrior warrior);
};