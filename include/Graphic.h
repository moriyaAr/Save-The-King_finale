#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>
#include "Helper.h"
class Graphic
{
public:
	~Graphic();
	static Graphic& graphic();
	sf::Texture getPic(int index);
	sf::Sound getSound(int index);
	sf::Font getFont();
	sf::RenderWindow& getWin();

private:
	Graphic();
	void LoadingPic();
	void LoadinSound();
	std::vector <sf::Texture> m_texture;
	std::vector <sf::Sound> m_sound;
	sf::RenderWindow m_window;
	sf::Font m_font;
};
