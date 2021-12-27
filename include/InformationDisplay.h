#pragma once
#include <SFML/Graphics.hpp>

class InformationDisplay
{
public:
	void draw();
	void init();
private:
	sf::Clock m_clock;
	sf::RectangleShape m_level;
	sf::Text m_text;
};