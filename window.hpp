#ifndef window_hpp
#define window_hpp

#include <SFML/Graphics.hpp>
#include <string>

class Window
{
public:
	Window(const std::string& windowName="My Window");
	void createWindow(const std::string& windowName);
	void checkClose();
	void preDraw();
	void draw(const sf::Drawable &drawable);
	void displayBufferContents();
	bool isOpen();

private:
	sf::RenderWindow m_window;
};

#endif