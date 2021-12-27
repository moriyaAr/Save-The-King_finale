#pragma once
#include "Graphic.h"
#include "Helper.h"
class Object
{
public:
	Object() = default;
	void draw();
	void init(sf::Texture tex, int size, int x, int y);
	void initToCenter(sf::Texture tex, int size, int x, int y);
	void init(sf::Texture tex);
	sf::Sprite& getSprite();
	void changeColor(sf::Color col);
protected:
	sf::Sprite m_pic;
	sf::Texture m_texture;
	//bool m_switchTexture = true;
};