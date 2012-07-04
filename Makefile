all:
	mkdir -p bin/release
	g++ -lncurses -Isrc src/drawEngine.cpp  src/evilMonkey.cpp  src/game.cpp  src/kbhit.cpp  src/timeGetTime.cpp -o bin/release/evilmonkey
debug:
	mkdir -p bin/debug
	g++ -g -lncurses -Isrc src/drawEngine.cpp  src/evilMonkey.cpp  src/game.cpp  src/kbhit.cpp  src/timeGetTime.cpp -o bin/debug/evilmonkey
