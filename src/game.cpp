/*
 * game.cpp
 *
 *  Created on: Jul 3, 2012
 *      Author: nosferatu
 */
#include <iostream>
#include <cmath>
#include "game.h"
#include "kbhit.h"
#include "timeGetTime.h"
using namespace std;

#define GAME_SPEED 50


bool Game::run(void)
{
	drawArea.createSprite(0, '$');
	//drawArea.drawSprite(0, 10, 5);
	char key = ' ';

	startTime = timeGetTime();
	frameCount = 0;
	lastTime = 0;

	posx = 0;

	while (key != 'q')
	{
		while (!getInput(&key))
		{
			timerUpdate();

		}
		drawArea.eraseSprite(5,posx);
		drawArea.drawSprite(0, 5, posx);
		posx++;


		//cout << "here is what you pressed: "<< key << endl;
	}


	cout << frameCount / (abs(timeGetTime()-startTime)/1000) << " fps " << endl;
	cout << frameCount << endl;
	cout << "end of the game!" << endl;
	return true;
}


bool Game::getInput(char *c)
{
	if (kbhit())
	{
		*c = getchar();
		return true;
	}

	return false;
}

void Game::timerUpdate(void)
{
	double currentTime = timeGetTime() - lastTime;

	if (currentTime < GAME_SPEED){

		return;
	}

	frameCount++;

	lastTime = timeGetTime();
}
