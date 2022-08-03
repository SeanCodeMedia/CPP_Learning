#pragma once

#ifndef MAKEWINDOW_H
#define MAKEWINDOW_H


#include "imports.h"


using namespace std;

// Base class 

class createWindow
{


private:

	bool quit;
	bool need_BMP_Image;

	SDL_Window* window;
	SDL_Renderer* render;
	SDL_Event* mainEvent;
	//SDL_Surface *image;
	//SDL_Texture *texture

	createWindow* game;
	



public:

	SDL_Renderer* getRender(); 
	SDL_Event* getMainEvent();
	bool getQuit();

	createWindow(string title = "Hello C++", int x = 100, int y = 100, int width = 400, int height = 600);
	~createWindow();


};


#endif 