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

private:
	Window m_gameWindow;
	resourceCollector m_resourcePath;
	sf::Texture m_beeTexture;
	sf::Sprite m_beeSprite;
};

#endif