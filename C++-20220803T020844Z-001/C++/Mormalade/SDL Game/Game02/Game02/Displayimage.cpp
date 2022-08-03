
#include "imports.h"
#include "Displayimage.h"

Displayimage::Displayimage(SDL_Renderer* pass_render,string fileName,int x, int y , int w , int h ) { 

	render = pass_render;
	

///	SDL_Surface *image;

///	image = SDL_LoadBMP("images/bg.bmp");

	///SDL_Texture *texture = SDL_CreateTextureFromSurface(pass_render, image);

	// should be refered to as image NOT ground

	ground = IMG_LoadTexture(pass_render, fileName.c_str());

	// should name rect to be general
	bg.x = x;
	bg.y = y;
	bg.w = w;
	bg.h = h;

	imageWidth = w;

	imageHeight = h;

	textureWidth = imageWidth / 3;
	textureHeight = imageHeight / 4;
	

	SDL_QueryTexture(ground, NULL, NULL, &imageWidth, &imageHeight);
	crop.x = 0;
	crop.y = 64;
	crop.w = textureWidth;
	crop.h = textureHeight;



}

/*
void Displayimage::Font() {

	font = TTF_OpenFont("data/Showcard Gothic.ttf", 10);
	SDL_Color color = { 255, 255, 255 };
	textSurface = TTF_RenderText_Solid(font, "Score:", color);
	text = SDL_CreateTextureFromSurface(render, textSurface);
	SDL_FreeSurface(textSurface);

	textRect.x = 0;
	textRect.y = 0;

}
*/
void Displayimage::Animation(){
	   
	pevTime = CurrentTime;
	 
	CurrentTime = SDL_GetTicks(); 
  
		DeltaTime = (CurrentTime - pevTime) / 1000.0f;

	frameTime += DeltaTime;
	  
	if (frameTime >= 0.1) {
	
		frameTime = 0;

		crop.x += textureWidth;
		
	}


	if (crop.x == imageWidth) {

		crop.x = 0;
	
 	}
	
///cout << frameTime << endl;
}


void Displayimage::setFrameY(int y){

	crop.y = y;

}


void Displayimage::setFraneX(int x) {


	crop.x = x;

}


int Displayimage::getFrameX(){



	return crop.x;
}


void Displayimage::setXpos(int x){

	bg.x = x; 

}


void Displayimage::setYpos(int y) {

	bg.y = y;

}


void Displayimage::setPos(int x, int y){

	bg.x = x; 
	bg.y = y;
}


int Displayimage::getX(){

	
	return bg.x;
}

int Displayimage::getY(){

	return bg.y;
}


void Displayimage::Drew(){
    
	SDL_RenderCopy(render, ground, NULL, &bg);
}

void Displayimage::Drewsprite(){

	SDL_RenderCopy(render, ground, &crop,&bg);
}
/*

void Displayimage::DrewText(){

	SDL_RenderCopy(render, text, &crop, &bg);
}
*/



Displayimage::~Displayimage() {

	// clear memory 

	SDL_DestroyTexture(ground);
	///SDL_FreeSurface(image);


}

