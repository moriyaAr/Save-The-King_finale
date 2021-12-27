#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include "StaticObject.h"
#include "MovedObject.h"
#include <vector>
#include "Helper.h"
#include "Player.h"
#include "Drawf.h"
#include "Level.h"
using namespace std;
	
class Board
{
public:
	void init();
	void match(int i, int j,char c);
	void draw();
	void moveDrawf();
	Player* getPlayer(int index);
	int getPlayerSize();
	Drawf* getDrawf(int index);
	int getDrawfSize();
	void setElementArry();
	bool is_secsseeded();
	void readLevel();
	sf::Vector2f next_location(sf::Vector2f direction);
	StaticObject* getBoard(int i, int j);
	void cangePlayer();
private:
	ifstream m_myFile;
	std::vector <Player*> m_players;
	std::vector <Drawf*> m_drawf;
	std::vector<std::vector<StaticObject*>> m_boardElement;
	sf::Vector2f m_Currlocation, m_nextLocation;
	std::vector<Location> m_telepotrs; 
	int m_rowsSize, m_columnsSize;
	int m_size = 100;
	Level m_level;
	Player* m_currPlayer;
	int m_indexPlayer = 0;
};
