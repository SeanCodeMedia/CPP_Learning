

//#include "imports.h"

#include <SDL.h>
#include <SDL_mixer.h>
#include <SDL_image.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Main.h"
using namespace std;


int main(int argc, char *argv[]) {
	 

	Main* gameObject = new Main("MY C++ Game", 1366, 100);
	gameObject->GameLoop();
	
	delete gameObject;

	return 0; 
}

