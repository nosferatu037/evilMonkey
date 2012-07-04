/*
 * drawEngine.h
 *
 *  Created on: Jul 3, 2012
 *      Author: nosferatu
 */

#ifndef DRAWENGINE_H_
#define DRAWENGINE_H_
class DrawEngine
{
public:
	DrawEngine(int xSize = 30, int ySize = 20);
	~DrawEngine();

	int createSprite(int index, char c);
	void deleteSprite(int index);

	void eraseSprite(int posx, int posy);
	void drawSprite(int index, int posx, int posy);

protected:
	int screenWidth, screenHeight;
	char spriteImage[16];

private:
	void gotoxy(int x, int y);
	void cursorVisibility(bool visibility);

};

#endif /* DRAWENGINE_H_ */
