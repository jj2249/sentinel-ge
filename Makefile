CXX = g++
CFLAGS = -std=c++17

program: main.o Game.o
	$(CXX) $(CFLAGS) -o program main.o-lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	$(CXX) $(CFLAGS) -c main.cpp

clean:
	rm program main.o