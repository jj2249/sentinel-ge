#include "game.hpp"

int main()
{
	// instantiate game object
	Game game;

	// game loop
	while (game.isRunning())
	{
		game.update();
		game.draw();
	}

    return 0;
}