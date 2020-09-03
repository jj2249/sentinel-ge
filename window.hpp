#ifndef window_hpp
#define window_hpp

#include <SFML/Window.hpp>

class Window
{
public:
	Window(const std::string& windowName="My Window");
	void createWindow(const std::string& windowName);
	void checkClose();
	bool isOpen();

private:
	sf::Window m_window;
};

#endif