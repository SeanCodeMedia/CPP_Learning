#pragma once

using namespace std;

class SDL_Setup
{
public:
	SDL_Setup(bool *quit, string *title, int *x, int *y, int *w, int *h);

	SDL_Renderer* getRender();
	SDL_Event* getMainEvent();

	void Begin();
	void End();

const	int getWindowWidth();

const   int getWindowHeight();



	~SDL_Setup();


private: 

	SDL_Window* window;
	SDL_Renderer* render;
	SDL_Event* mainEvent;
	string stringValue = "NULL";





};

