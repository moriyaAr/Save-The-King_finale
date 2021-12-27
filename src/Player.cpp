#include "Player.h"

bool Player::condition()
{
	return false;
}

void Player::Init(sf::Texture tex, int size, int x, int y, int first, int second)
{
	m_firstIndex = first;
	m_secondIndex = second;
	m_loc.init(x, y);
	init(tex, size, x, y);
}

Status Player::colide(StaticObject* staticObj)
{
	return Status();
}
