	
	bool quit = false; 

	// initalize the window 

	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window* window = NULL;

	window = SDL_CreateWindow("MY First C++ Game", 100, 100, 600, 400, SDL_WINDOW_SHOWN| SDL_WINDOW_RESIZABLE); // pass different flags to change apperience of the screen

	if (window == NULL) {


		cout << "ERROR CODE 1: Window failed to open" << endl; 

		return 0; 
	
	}

	// rendering the window

	SDL_Renderer* render = NULL;

	render = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED);
	

	// update screen 
	
		SDL_Event* mainEvent = new SDL_Event();


		SDL_Surface *image;

		image = SDL_LoadBMP("images/bg.bmp");

		SDL_Texture *texture = SDL_CreateTextureFromSurface (render,image) ;

		SDL_Texture* ground = IMG_LoadTexture(render, "images/ground.png");

		SDL_Rect bg;
		bg.x = 0;
		bg.y = 370;
		bg.w = 1000;
		bg.h = 50;
		

	// game loop // update renderer
	while (!quit && mainEvent->type != SDL_QUIT) {
	     
		SDL_PollEvent(mainEvent);
	  
		SDL_RenderClear(render);

		// update images 
		  
		SDL_RenderCopy(render, texture, NULL, NULL);
		
		//SDL_RenderPresent(render);
	
		SDL_RenderCopy(render, ground, NULL, &bg);
		
		///cout << "This is updated code" << endl;

		
	///	cout << "this is the error " << SDL_GetError() << endl;


		SDL_RenderPresent(render);
	
	}
	// clear memory 
	SDL_DestroyTexture(texture); 
	SDL_FreeSurface(image);
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(render);
	delete mainEvent;
	

	
/*
void createWindow::display_BMP_Image(string fileName) {

	char * imageName = new char[fileName.length() + 1]; // convert string to char 
	strcpy(imageName, fileName.c_str()); // then copy the text into char 



	image = SDL_LoadBMP(imageName);

	texture = SDL_CreateTextureFromSurface(render, image);

	need_BMP_Image = true;


}

*/
