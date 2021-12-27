#pragma once
#include "Object.h"

class ToolBar
{
public:
	void initBackground();
	Object getObject(int index);
	void changeIsInstruction();
	void init();
	void draw();
	void changeColor(const sf::Vector2f& location);
private:                                
	std::vector <Object> m_menuArry;
	bool m_isInstruction=false;
	Object m_background;
};