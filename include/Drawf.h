#pragma once
#include "MovedObject.h"
class Board;
class Drawf :public MovedObject
{
public:
	Drawf(int size, int x, int y);
	bool condition() override;
	void move(Board& m_board);
	bool canMove(Board& m_board,double x, double y);
private:
	int m_direction = 0;
};
