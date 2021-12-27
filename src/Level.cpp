#include "Level.h"

void Level::init()
{
	m_background.init(Graphic::graphic().getPic(26));
}

string Level::wichLevel()
{
	string levelName = "level.txt";
	return levelName;
}

void Level::draw()
{
	m_background.draw();
}
