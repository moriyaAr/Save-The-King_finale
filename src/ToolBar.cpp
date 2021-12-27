#include "ToolBar.h"

void ToolBar::init()
{
	std::vector <Object> menu(5);
	m_menuArry = menu;
	initBackground();
	int i;
	for (i=0; i < 3; i++)
		m_menuArry[i].initToCenter(Graphic::graphic().getPic(i+1), 100, 850,450 + (120 * i));
	for (int i = 3; i < 5; i++)
		m_menuArry[i].init(Graphic::graphic().getPic(i+1), 100, 0, 0);
}

void ToolBar::initBackground()
{
	m_background.init(Graphic::graphic().getPic(0));
}

Object ToolBar::getObject(int index)
{
	return m_menuArry[index];
}

void ToolBar::changeIsInstruction()
{
	if (m_isInstruction)
		m_isInstruction = false;
	else
		m_isInstruction = true;
}

void ToolBar::draw()
{
	int i;
	m_background.draw();
	for (i = 0; i < 3; i++)
	{
		m_menuArry[i].draw();
	}
	if (m_isInstruction)
	{
		for (i = 3; i < 5; i++)
			m_menuArry[i].draw();
	}
}

void ToolBar::changeColor(const sf::Vector2f& location)
{
	for (int i = 0; i <3; i++)
	{
		if (m_menuArry[i].getSprite().getGlobalBounds().contains(location))
		{
			m_menuArry[i].changeColor({ 46,76,38 });
			for (int j = 0; j < 3; j++)
			{
				if(j!=i)
					m_menuArry[j].changeColor(sf::Color::White);
			}
			break;
		}
	}
}
