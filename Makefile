CXX = g++
CFLAGS = -std=c++17

sge: main.o game.o window.o resourcePath.o input.o
	$(CXX) $(CFLAGS) -o sge *.o -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	$(CXX) $(CFLAGS) -c main.cpp

game.o: game.cpp
	$(CXX) $(CFLAGS) -c game.cpp

window.o: window.cpp
	$(CXX) $(CFLAGS) -c window.cpp

resourcePath.o: resourcePath.cpp
	$(CXX) $(CFLAGS) -c resourcePath.cpp

input.o: input.cpp
	$(CXX) $(CFLAGS) -c input.cpp

clean:
	rm sge *.o
