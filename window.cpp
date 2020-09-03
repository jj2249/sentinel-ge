#include "window.hpp"

#include <string>

Window::Window(const std::string& windowName)
{
	// create a window instance with name windowName, otherwise use "My Window"
	createWindow(windowName);
	m_window.setVerticalSyncEnabled(true);
}

void Window::createWindow(const std::string& windowName)
{
	// function to be used for constructor
	m_window.create(sf::VideoMode(800, 600), windowName);
}

void Window::checkClose()
{
	// store all events since last iteration in event type and check to see if they are close events
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close();
		}
	}
}

bool Window::isOpen()
{
	// use sf::Window bool to pass to game class
	return m_window.isOpen();
}