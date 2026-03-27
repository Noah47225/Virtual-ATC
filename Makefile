game.exe: main.cpp
	g++ main.cpp -o game.exe -I./include -L./lib -lSDL3