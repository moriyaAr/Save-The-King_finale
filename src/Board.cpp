#include "Board.h"
#include "Fire.h"
#include "Gate.h"
#include "Drawf.h"
#include "king.h"
#include "Mage.h"
#include "Orc.h"
#include "Teleport.h"
#include "Thief.h"
#include "Throne.h"
#include "Wall.h"
#include "Warrior.h"


void Board::init()
{
	m_level.init();
	m_myFile.open(m_level.wichLevel());
	if (m_myFile.is_open())
	{
		m_myFile >> m_rowsSize >> m_columnsSize;//get from the file the numbers of the columns and the rows
		std::vector<StaticObject*>rows(m_columnsSize);//for the columns
		std::vector<std::vector <StaticObject*>> board(m_rowsSize, rows);//for the rows
		m_boardElement = board;
		char c = m_myFile.get();
		for (int i = 0; i < m_rowsSize; i++)
		{
			for (int j = 0; j < m_columnsSize; j++)
			{
				c = m_myFile.get();
				match(i, j, c);
			}
			c = m_myFile.get();
		}
		m_currPlayer = m_players[0];
	}
	m_myFile.close();
}

void Board::match(int i, int j, char c)
{
	switch (c)
	{
	case '*':
		m_boardElement[i][j] = new Fire(m_size, (j * m_size), 150+(i * m_size));
		break;
	case '!':
		m_boardElement[i][j] = new Orc(m_size, (j * m_size), 150 + (i * m_size));
		break;
	case 'X':
	{
		m_boardElement[i][j] = new Teleport(m_size, (j * m_size), 150 + (i * m_size));
		m_telepotrs.push_back(Location(i, j));
	}
	break;
	case '@':
		m_boardElement[i][j] = new Throne(m_size, (j * m_size), 150 + (i * m_size));
		break;
	case '=':
		m_boardElement[i][j] = new	Wall(m_size, (j * m_size), 150 + (i * m_size));
		break;
	case '#':
		m_boardElement[i][j] = new Gate(m_size, (j * m_size), 150 + (i * m_size));
		break;
	case 'K':
		m_players.push_back(new King(m_size, (j * m_size), 150 + (i * m_size)));
		m_boardElement[i][j] = nullptr;
			break;
	case 'M':
		m_players.push_back(new Mage(m_size, (j * m_size), 150 + (i * m_size)));
		m_boardElement[i][j] = nullptr;
		break;
	case 'T':
		m_players.push_back(new Thief(m_size, (j * m_size), 150 + (i * m_size)));
		m_boardElement[i][j] = nullptr;
		break;
	case 'W':
		m_players.push_back(new Warrior(m_size, (j * m_size), 150 + (i * m_size)));
		m_boardElement[i][j] = nullptr;
		break;
	case '^':
		m_drawf.push_back(new Drawf(m_size, (j * m_size), 150 + (i * m_size)));
		m_boardElement[i][j] = nullptr;
		break;
	case ' ':
		m_boardElement[i][j] = nullptr;
		break;
	}
}

void Board::draw()
{
	m_level.draw();
	for (int i = 0; i < m_rowsSize; i++)
	{
		for (int j = 0; j < m_columnsSize; j++)
		{
			if(m_boardElement[i][j]!=nullptr)
				m_boardElement[i][j]->draw();
		}
	}
	for (int i = 0; i < m_drawf.size(); i++)
	{
		m_drawf[i]->draw();
	}
	for (int i = 0; i < m_players.size(); i++)
	{
		m_players[i]->draw();
	}
}

void Board::moveDrawf()
{
	for (int i = 0; i < m_drawf.size(); i++)
	{
		m_drawf[i]->move(*this);
	}
}

Player* Board::getPlayer(int index)
{
	return m_players[index];
}

int Board::getPlayerSize()
{
	return m_players.size();
}

Drawf* Board::getDrawf(int index)
{
	return m_drawf[index];
}

int Board::getDrawfSize()
{
	return m_drawf.size();
}
StaticObject* Board::getBoard(int i, int j)
{
	return m_boardElement[i][j];
}

void Board::cangePlayer()
{
	m_indexPlayer++;
	m_currPlayer = m_players[m_indexPlayer % 4];
}
