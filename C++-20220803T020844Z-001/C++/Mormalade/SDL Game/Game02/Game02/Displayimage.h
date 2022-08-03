#pragma once




#ifndef DISPLAYIMAGE_H
#define DISPLAYIMAGE_H

#include "imports.h"
#include "SDL_Setup.h"

using namespace std;

class Displayimage {


public:

	Displayimage(SDL_Renderer* pass_render, string fileName = NULL, int x = 0, int y = 0, int w = 300, int h = 300);
   
	void Drew();
	void Drewsprite();
	void setXpos(int x ); 
	void setYpos(int y);
	void setPos(int x, int y);
	int getX();
	int getY();

	void setFrameY(int y);
	void setFraneX(int x);
	int getFrameX();


	void Animation();

	//void Font();

	///void DrewText();

	~Displayimage();
    
private:

///	SDL_Surface *image;
    
	SDL_Texture *sprite;
	SDL_Texture *ground;
	SDL_Rect bg;
	SDL_Rect crop;

	int imageWidth; 
	int imageHeight;
	
	int textureWidth;
	int textureHeight;
	float frameTime = 0;
	float pevTime = 0; 
	float CurrentTime = 0; 
	float DeltaTime = 0; 
	/*

	SDL_Texture *text;
	SDL_Surface *textSurface;

	SDL_Rect textRect;

	TTF_Font *font;
	*/

	SDL_Renderer* render;

	
};

#endif // ! 