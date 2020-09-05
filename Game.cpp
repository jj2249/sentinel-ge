#include "game.hpp"

Game::Game()
	: m_gameWindow("Game Window")
{
	m_beeSpeed = 200;

	m_clock.restart();
	m_beeTexture.loadFromFile(m_resourcePath.getResourcePath() + "bee1.png");
	m_beeSprite.setTexture(m_beeTexture);
}

void Game::update()
{
	m_gameWindow.checkClose();
	m_beeSprite.move(m_beeSpeed*m_deltaT, m_beeSpeed*m_deltaT);
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

void Game::calcDeltaT()
{
	m_deltaT = m_clock.getElapsedTime().asSeconds();
	m_clock.restart();
}