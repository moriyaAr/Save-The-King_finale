#include "Graphic.h"
Graphic::Graphic()
{
//    LoadinSound();
    m_window.create(sf::VideoMode(WIN_X, WIN_Y, 32), "Save the king game",
       sf::Style::Titlebar | sf::Style::Close);
    LoadingPic();
}

Graphic::~Graphic()
{

}

Graphic& Graphic::graphic()
{
    static Graphic m_graphic;
    return m_graphic;
}

sf::Texture Graphic::getPic(int index)
{
    return m_texture[index];
}

//sf::Sound Graphic::getSound(int index)
//{
//    return m_sound[index];
//}

sf::Font Graphic::getFont()
{
    return m_font;
}

sf::RenderWindow& Graphic::getWin()
{
    return m_window;
}

//void Graphic::LoadinSound()
//{
//}

void Graphic::LoadingPic()
{
    auto tex = sf::Texture();
    tex.loadFromFile("background.png");
    m_texture.push_back(tex);
    tex.loadFromFile("new_game.png");
    m_texture.push_back(tex);
    tex.loadFromFile("instruction.png");
    m_texture.push_back(tex);
    tex.loadFromFile("exit.png");
    m_texture.push_back(tex);
    tex.loadFromFile("instructions.png");
    m_texture.push_back(tex);
    tex.loadFromFile("back.png");
    m_texture.push_back(tex);
    tex.loadFromFile("shine_new_game.png");
    m_texture.push_back(tex);
    tex.loadFromFile("shine_instruction.png");
    m_texture.push_back(tex);
    tex.loadFromFile("shine_exit.png");
    m_texture.push_back(tex);
    tex.loadFromFile("king.png");
    m_texture.push_back(tex);
    tex.loadFromFile("shine_king.png"); //10
    m_texture.push_back(tex);
    tex.loadFromFile("mage.png");
    m_texture.push_back(tex);
    tex.loadFromFile("mage.png");
    m_texture.push_back(tex);
    tex.loadFromFile("warrior.png");
    m_texture.push_back(tex);
    tex.loadFromFile("warrior.png");
    m_texture.push_back(tex);
    tex.loadFromFile("thief.png");
    m_texture.push_back(tex);
    tex.loadFromFile("thief.png");
    m_texture.push_back(tex);
    tex.loadFromFile("throne.png");
    m_texture.push_back(tex);
    tex.loadFromFile("gate.png");
    m_texture.push_back(tex);
    tex.loadFromFile("gate.png");
    m_texture.push_back(tex);
    tex.loadFromFile("teleport.png"); //20
    m_texture.push_back(tex);
    tex.loadFromFile("orc.png");
    m_texture.push_back(tex);
    tex.loadFromFile("orc.png");
    m_texture.push_back(tex);
    tex.loadFromFile("fire.png");
    m_texture.push_back(tex);
    tex.loadFromFile("wall.png");
    m_texture.push_back(tex);
    tex.loadFromFile("dwarf.png");
    m_texture.push_back(tex);
    tex.loadFromFile("backg.png"); //26
    m_texture.push_back(tex);
}
