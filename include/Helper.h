#pragma once

const int WIN_X = 1800;
const int WIN_Y = 950;
const double MOVE_RATE = 1;
class Location
{
public:
	Location() = default;
	Location(int x, int y);
	void init(int x, int y);
	void init_x(int x);
	void init_y(int y);
	Location getLocation();
	int getX();
	int getY();
private:
	int m_x=0;
	int m_y=0;
};

enum Status
{
	move,
	notMove,
	win
};