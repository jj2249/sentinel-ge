#include "window.hpp"

Window::Window(const std::string& windowName)
// default Window constructor. windowName defaults to "My Window"
{
	createWindow(windowName);
}

void Window::createWindow(const std::string& windowName)
// init function for constructor
{
	m_window.create(sf::VideoMode(800, 600), windowName);
	m_window.setVerticalSyncEnabled(true);
}

void Window::checkClose()
// polls all input events to see if window close request exist
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close();
		}
	}
}

void Window::preDraw()
// operations needed before drawing the new frame
{
	// clear previous frame contents to white
	m_window.clear(sf::Color::White);
}

void Window::draw(const sf::Drawable &drawable)
// add a sf::Drawable object to the video buffer
{
	m_window.draw(drawable);
}

void Window::displayBufferContents()
// outputs video buffer to provide new frame
{
	m_window.display();
}

bool Window::isOpen()
// helper function for passing to game instance. When window closes, game ends
{
	return m_window.isOpen();
}