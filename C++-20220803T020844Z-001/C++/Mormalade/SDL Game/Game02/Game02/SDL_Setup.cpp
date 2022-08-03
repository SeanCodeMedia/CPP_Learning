
#include "imports.h"
#include "SDL_Setup.h"

using namespace std;

SDL_Setup::SDL_Setup(bool *quit,string *title,int *x, int *y, int *w, int *h)
{

	// initalize the window 
	mainEvent = new SDL_Event();
 
    stringValue = *title; // derefencesed

	SDL_Init(SDL_INIT_EVERYTHING);


	char * windowTitle = new char[stringValue.length() + 1]; // convert string to char 
	strcpy(windowTitle, stringValue.c_str()); // then copy the text into char 

	window = NULL;
	window = SDL_CreateWindow(windowTitle, *x, *y, *w, *h, SDL_WINDOW_SHOWN | SDL_WINDOW_FULLSCREEN_DESKTOP); // pass different flags to change apperience of the screen


	if (window == NULL) {


		cout << "ERROR CODE 1: Window failed to open" << endl;

		*quit = true;
	}

	// rendering the window

	render = NULL;

	render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED| SDL_RENDERER_PRESENTVSYNC);


	// update screen 




}

const int SDL_Setup::getWindowWidth() {

	return SDL_GetWindowSurface(window)->w;

}


const int SDL_Setup::getWindowHeight() {

	return SDL_GetWindowSurface(window)->h;

}



SDL_Renderer* SDL_Setup::getRender() {

	return render;
}

SDL_Event* SDL_Setup::getMainEvent() {

	
	return mainEvent;
}


void SDL_Setup::Begin() {

SDL_PollEvent(mainEvent);


SDL_RenderClear(render);


}

void SDL_Setup:: End() {

	// update images 
//	SDL_RenderCopy(render, texture, NULL, NULL);

	//SDL_RenderPresent(render);

     //SDL_RenderCopy(render, ground, NULL, &bg);

	///cout << "This is updated code" << endl;


	SDL_RenderPresent(render);

}


SDL_Setup::~SDL_Setup(){

	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(render);
	delete mainEvent;


}
