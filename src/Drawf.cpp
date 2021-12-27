#include "Drawf.h"
#include "Board.h"
Drawf::Drawf(int size, int x, int y)
{
	init(Graphic::graphic().getPic(25), size, x, y);
	m_loc.init(x,y);
}

bool Drawf::condition()
{
	return false;
}

void Drawf::move(Board& m_board)
{
	while (true)
	{
		switch (m_direction)
		{
		case 0:
		{
			if (canMove(m_board, MOVE_RATE, 0))
			{
				m_pic.move({ MOVE_RATE,0 });
				return;
			}
			else
				m_direction = (m_direction + 1) % 4;
			break;
		}
		case 1:
		{
			if (canMove(m_board, 0, MOVE_RATE))
			{
				m_pic.move({ 0,MOVE_RATE });
				return;
			}
			else
				m_direction = (m_direction+1) % 4;
			break;
		}
		case 2:
		{
			if (canMove(m_board, -MOVE_RATE, 0))
			{
				m_pic.move({ -MOVE_RATE,0 });
				return;
			}
			else
				m_direction = (m_direction+1) % 4;
			break;
		}
		case 3:
		{
			if (canMove(m_board, 0, -MOVE_RATE))
			{
				m_pic.move({ 0,-MOVE_RATE });
				return;
			}
			else
				m_direction = (m_direction+1) % 4;
			break;
		}
		default:
			break;
		}
	}
}

bool Drawf::canMove(Board& m_board, double x, double y)
{
	sf::Sprite compare = m_pic;
	compare.move({ (float)x,(float)y });
	if (((compare.getPosition().x + m_texture.getSize().x) > WIN_X) ||
		((compare.getPosition().x) < 0 || (compare.getPosition().y) < 0) ||
		((compare.getPosition().y + m_texture.getSize().y) > WIN_Y))
		return false;
	for (int k = 0; k < m_board.getPlayerSize(); k++)
	{
		if (compare.getGlobalBounds().intersects(m_board.getPlayer(k)->getSprite().getGlobalBounds()))
			return false;
	}
	for (int k = 0; k < m_board.getDrawfSize(); k++)
	{
		if (m_board.getDrawf(k)!=this)
		{
			if (compare.getGlobalBounds().intersects(m_board.getDrawf(k)->getSprite().getGlobalBounds()))
				return false;
		}
	}
	/*int i = (int)(m_pic.getPosition().y + (y)) / 100;
	int j = (int)(m_pic.getPosition().x + (x)) / 100;
	if (m_board.getBoard(i,j) != nullptr)
		return false;*/
	return true;
}
