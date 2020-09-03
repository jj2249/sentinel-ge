CXX = g++
CFLAGS = -std=c++17

program: main.o game.o window.o
	$(CXX) $(CFLAGS) -o program main.o game.o window.o -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	$(CXX) $(CFLAGS) -c main.cpp

game.o: game.cpp
	$(CXX) $(CFLAGS) -c game.cpp

window.o: window.cpp
	$(CXX) $(CFLAGS) -c window.cpp

clean:
	rm program main.o game.o window.o