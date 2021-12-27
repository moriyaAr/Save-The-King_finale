#pragma once
#include "Graphic.h"
#include "Board.h"
#include "ToolBar.h"
class Controller
{
public:
	void run();
	void preRun();

private:
	ToolBar m_toolBar;
	Board m_board;
};