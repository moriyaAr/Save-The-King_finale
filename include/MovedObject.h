#pragma once
#include "Object.h"

class MovedObject :public Object
{
public:
	virtual bool condition();
	sf::Vector2f move(sf::Keyboard);
	Location getLoc();
protected:
	Location m_loc;
};