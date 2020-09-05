#include "game.hpp"

Game::Game()
	: m_gameWindow("Game Window")
// constructor to initialise window and load in sprites/textures
{
	m_beeSpeed = 200;

	m_clock.restart();
	m_beeTexture.loadFromFile(m_resourcePath.getResourcePath() + "bee1.png");
	m_beeSprite.setTexture(m_beeTexture);
}

void Game::update()
// updates all underlying game concepts ready to be drawn
{	calcDeltaT();
	captureInput();
	actOnInput();
	// check for close
	m_gameWindow.checkClose();
}

void Game::draw()
// encapsulates full window draw cycle and displays
{
	m_gameWindow.preDraw();
	m_gameWindow.draw(m_beeSprite);
	m_gameWindow.displayBufferContents();
}

bool Game::isRunning()
// helper function to check 
{
	return m_gameWindow.isOpen();
}

void Game::calcDeltaT()
// game loop function to update time step member variable then reset clock
{
	m_deltaT = m_clock.getElapsedTime().asSeconds();
	m_clock.restart();
}

void Game::captureInput()
// game loop function to update the current inputHandler bitmask
{
	m_inputHandler.updateInputState();
}

void Game::actOnInput()
// implement logic based on the current input state
{
	double deltaX {0};
	double deltaY {0};

	if (m_inputHandler.checkKeyPressed(InputHandler::KeyPos::Left))
		deltaX = -m_deltaT * m_beeSpeed;

	if (m_inputHandler.checkKeyPressed(InputHandler::KeyPos::Right))
		deltaX = m_deltaT * m_beeSpeed;

	if (m_inputHandler.checkKeyPressed(InputHandler::KeyPos::Up))
		deltaY = -m_deltaT * m_beeSpeed;

	if (m_inputHandler.checkKeyPressed(InputHandler::KeyPos::Down))
		deltaY = m_deltaT * m_beeSpeed;

	m_beeSprite.move(deltaX, deltaY);
}