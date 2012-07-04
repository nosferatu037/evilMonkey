/*
 * game.h
 *
 *  Created on: Jul 3, 2012
 *      Author: nosferatu
 */

#ifndef GAME_H_
#define GAME_H_

#include "drawEngine.h"

class Game
{
public:
	bool run(void);

protected:
	bool getInput(char *c);
	void timerUpdate(void);

private:
	double frameCount;
	double startTime;
	double lastTime;

	int posx;

	DrawEngine drawArea;

};

#endif /* GAME_H_ */
