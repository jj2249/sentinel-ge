#include "game.hpp"

int main()
{
	//instantiate game object

	Game game;

	while (game.isRunning())
	{
		game.update();
	}

    return 0;
}