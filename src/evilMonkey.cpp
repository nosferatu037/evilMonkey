//============================================================================
// Name        : evilMonkey.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unistd.h>

#include "game.h"
#include "kbhit.h"

using namespace std;

int main() {

	Game gameHeart;
	gameHeart.run();

	return 0;
}
