#pragma once

#include "SDL_Setup.h"
#include "Displayimage.h"
#include "random.h"

class Main {
public:
	Main(string title = "Blank Window", int x  = 100 , int y = 100 , int w = 1366, int h= 500);

	~Main();

	void GameLoop();

	int getScreenWidth(); 
	int getScreenHight();



private: 

	bool quit;

	string title;

	int x; 

	int y;

	int w; 

	int h;

	double originalHeight;

	int screenWidth;

	int screenHeight;

	SDL_Setup* sdl_SetUP;
	random* randomNumber;

	Displayimage *background;

	Displayimage* ground;
	Displayimage* ground2;
	Displayimage* ground3;

	Displayimage* cloude; 
	Displayimage*  mountains;
	Displayimage* mountains2;
	Displayimage*  mountains3;
	Displayimage* mountains4;

	int playerSpeed;
	///int idleMode; idle timer// should be good to us chrono

	bool isScrolling; 
	bool isMoving_rignt; 
	bool isMoving_left;




	Displayimage* player; 
  


};

