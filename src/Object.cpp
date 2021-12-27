#include "Object.h"

void Object::draw()
{
	Graphic::graphic().getWin().draw(m_pic);
}

void Object::init(sf::Texture tex,int size, int x,int y)
{
    m_texture = tex;
    m_pic.setTexture(m_texture);
 //   m_pic.scale({(float)size,(float)size });
    m_pic.setPosition(x, y);
}

void Object::initToCenter(sf::Texture tex, int size, int x, int y)
{
    m_texture = tex;
    m_pic.setTexture(m_texture);
    m_pic.setOrigin({(float) (m_texture.getSize().x / 2),(float)(m_texture.getSize().y / 2) });
    //   m_pic.scale({(float)size,(float)size });
    m_pic.setPosition(x, y);
}

void Object::init(sf::Texture tex)
{
    m_texture = tex;
    m_pic.setTexture(m_texture);
}

sf::Sprite& Object::getSprite()
{
    return m_pic;
}

void Object::changeColor(sf::Color col)
{
        m_pic.setColor(col);
}



