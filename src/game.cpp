/*
 * game.cpp
 *
 *  Created on: Jul 3, 2012
 *      Author: nosferatu
 */
#include <iostream>
#include <cmath>
#include <curses.h>

#include "game.h"
#include "kbhit.h"
#include "timeGetTime.h"
using namespace std;

#define GAME_SPEED 50


bool Game::run(void)
{
	posx = 5;
	posy = 5;

	drawArea.createSprite(0, '$');
	drawArea.drawSprite(0, posx, posy);
	int key = ' ';

	startTime = timeGetTime();
	frameCount = 0;
	lastTime = 0;

	initscr();
	curs_set(0); //Hide the cursor
	//cbreak();
	//noecho();
	keypad(stdscr, TRUE);

	while (key != 'q')
	{
		while (!getInput(&key))
		{
			timerUpdate();

		}

		
		//Erase the sprite at the old position
		drawArea.eraseSprite(posx, posy);

		//Modify position
		switch (key)
		{
			case KEY_UP:
				posy--;
				break;
			case KEY_DOWN:
				posy++;
				break;
			case KEY_LEFT:
				posx--;
				break;
			case KEY_RIGHT:
				posx++;
				break;
		}
		//Draw at the new position
		drawArea.drawSprite(0, posx, posy);


		//cout << "here is what you pressed: "<< key << endl;
	}


	cout << frameCount / (abs(timeGetTime()-startTime)/1000) << " fps " << endl;
	cout << frameCount << endl;
	cout << "end of the game!" << endl;
	return true;
}


bool Game::getInput(int *c)
{
	*c = getch(); //Calling getch directly. No need for silly kbhit. getch will tell whether a key was pressed or not.
	if (*c != ERR)
	{
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
