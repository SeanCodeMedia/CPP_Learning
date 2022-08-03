
/*
#include "imports.h"
#include "makeWindow.h"

using namespace std;

createWindow::createWindow(string title, int x, int y, int width, int height) {
	
	SDL_Init(SDL_INIT_EVERYTHING);
	
	char * windowTitle = new char[title.length() + 1]; // convert string to char 
	strcpy(windowTitle, title.c_str()); // then copy the text into char 
	 
	  window = SDL_CreateWindow(windowTitle, x, y, width, height, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE); // pass different flags to change apperience of the screen
	
	if (window == NULL) {


		cout << "ERROR CODE 1: Window failed to open" << endl;

		quit = true;

	
	}

	
	render = NULL;
	render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	mainEvent = new SDL_Event();



}



bool createWindow::getQuit () {

	return quit = false;

}


SDL_Renderer* createWindow::getRender() {


	return render;
}



SDL_Event* createWindow::getMainEvent(){ 


	return mainEvent;
}


createWindow::~createWindow(){

	// clear memory 
	//SDL_DestroyTexture(texture);
	///SDL_FreeSurface(image);
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(render);
	delete mainEvent;

}


*/