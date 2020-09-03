#ifndef game_hpp
#define game_hpp

#include "window.hpp"

class Game
{
public:
	Game();
	void update();
	bool isRunning();

private:
	Window m_gameWindow;
};

#endif