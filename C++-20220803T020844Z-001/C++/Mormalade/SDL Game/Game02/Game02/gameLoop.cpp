/*
#include "imports.h"
#include "makeWindow.h"
#include "gameLoop.h"


void  gameLoop::GameLoop() {

	bool quit = false;
	 


	while (!quit && getMainEvent()->type != SDL_QUIT) {

		
		SDL_PollEvent(getMainEvent());

		SDL_RenderClear(getRender());

		// update images 
		/*
		if (need_BMP_Image == true) {

		SDL_RenderCopy(render, texture, NULL, NULL);

		SDL_RenderPresent(render);

		}
	
		//SDL_RenderCopy(render, ground, NULL, &bg);

		///cout << "This is updated code" << endl;


		///cout << "this is the error " << SDL_GetError() << endl;


	///	SDL_RenderPresent(getRender());



//	}


*/

//}
