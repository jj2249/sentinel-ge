#include "game.hpp"

Game::Game()
	: m_gameWindow("Game Window")
{

}

void Game::update()
{
	m_gameWindow.checkClose();
}

bool Game::isRunning()
{
	return m_gameWindow.isOpen();
}