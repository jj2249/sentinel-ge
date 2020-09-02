CXX = g++
CFLAGS = -std=c++17 -I./headers

program: main.o Game.o
	$(CXX) $(CFLAGS) -o program main.o Game.o -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	$(CXX) $(CFLAGS) -c main.cpp

Game.o: Game.cpp
	$(CXX) $(CFLAGS) -c Game.cpp

clean:
	rm program main.o game.o