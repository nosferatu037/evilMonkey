/*
 * drawEngine.cpp
 *
 *  Created on: Jul 3, 2012
 *      Author: nosferatu
 */
#include <iostream>
#include "drawEngine.h"
#include "curses.h"
using namespace std;

DrawEngine::DrawEngine(int xSize, int ySize)
{

	screenWidth = xSize;
	screenHeight = ySize;

	cursorVisibility(false);
}

DrawEngine::~DrawEngine(){

	cursorVisibility(true);
}

int DrawEngine::createSprite(int index, char c)
{
	if (index >= 0 && index < 16){
		spriteImage[index] = c;
		return index;
	}
	return -1;

}
void DrawEngine::deleteSprite(int index){
	//not needed
}
void DrawEngine::drawSprite(int index, int posx, int posy)
{
	// go to correct location
	gotoxy(posx, posy);

	// draw the image

	const char *sprite = &spriteImage[index];
	printw(sprite);
	refresh();
}

void DrawEngine::eraseSprite(int posx, int posy)
{
	gotoxy(posx,posy);
	printw(" ");
	refresh();
}
void DrawEngine::gotoxy(int x, int y)
{
	int posx, posy;
	posx = x;
	posy = y;

	initscr();
	move(posx, posy);


}

void DrawEngine::cursorVisibility(bool visibility)
{
	if (visibility){
		endwin();
	}
}
