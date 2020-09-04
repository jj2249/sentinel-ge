#include "game.hpp"

Game::Game()
	: m_gameWindow("Game Window")
{
	m_beeTexture.loadFromFile(m_resourcePath.getResourcePath() + "bee1.png");
	m_beeSprite.setTexture(m_beeTexture);
}

void Game::update()
{
	m_gameWindow.checkClose();
}

void Game::draw()
{
	m_gameWindow.preDraw();
	m_gameWindow.draw(m_beeSprite);
	m_gameWindow.displayBufferContents();
}

bool Game::isRunning()
{
	return m_gameWindow.isOpen();
}