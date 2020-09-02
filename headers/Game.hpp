#ifndef GAME_H
#define GAME_H

class Game
{
public:
	Game() = default;
	void preUpdate();
	void update();
	void postUpdate();
	void draw();
	bool isRunning();
};

#endif