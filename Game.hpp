#ifndef game_hpp
#define game_hpp

#include "input.hpp"
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
	void captureInput();
	void actOnInput();

private:
	Window m_gameWindow;
	resourceCollector m_resourcePath;
	InputHandler m_inputHandler;
	int m_beeSpeed;
	double m_deltaT;
	sf::Clock m_clock;
	sf::Texture m_beeTexture;
	sf::Sprite m_beeSprite;
};

#endif