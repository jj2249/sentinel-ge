CXX = g++

program: main.o
	$(CXX) main.o -o program -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	$(CXX) -c main.cpp