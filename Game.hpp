#ifndef game_hpp
#define game_hpp

#include "resourcePath.hpp"
#include "window.hpp"

class Game
{
public:
	Game();
	void update();
	void draw();
	bool isRunning();
	void calcDeltaT();

private:
	Window m_gameWindow;
	resourceCollector m_resourcePath;
	int m_beeSpeed;
	double m_deltaT;
	sf::Clock m_clock;
	sf::Texture m_beeTexture;
	sf::Sprite m_beeSprite;
};

#endif