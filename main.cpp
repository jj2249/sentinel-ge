#include "./headers/Game.hpp"

int main()
{
    Game game;

    while (game.isRunning())
    {
        game.preUpdate();
        game.update();
        game.postUpdate();
    }


    return 0;
}