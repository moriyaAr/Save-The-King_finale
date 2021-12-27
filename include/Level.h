#pragma once
#include "InformationDisplay.h"
#include "Object.h"
#include <cstdlib>
using namespace std;
class Level
{
public:
//	void run();
	void init();
	string wichLevel();
	void currLevel();
	void restartLevel();
	void draw();
private:
	InformationDisplay m_inform;
	Object m_background;
	int life;
};

