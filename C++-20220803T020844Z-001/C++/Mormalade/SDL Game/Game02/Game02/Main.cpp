
#include "imports.h"
#include "Main.h"
#include "Displayimage.h"


using namespace std;

Main::Main(string title1, int x1, int y1, int w1, int h1)
{

	quit = false;
	isScrolling = false; 
	isMoving_left = false; 
	isMoving_rignt = false;

	title = title1;
	x = x1;
	y = y1;
	w = w1;
	h = h1;

	screenWidth = w;

	screenHeight = h;

	playerSpeed = 4; 

	///idleMode = 1000;

	sdl_SetUP = new SDL_Setup(&quit, &title, &x, &y, &w, &h);
	// display images optional if you want to draw once

   // background = new Displayimage(sdl_SetUP->getRender(), "images/bg.png", 0, 0, getScreenWidth(), getScreenHight());

	mountains = new Displayimage(sdl_SetUP->getRender(), "images/mountains.png", 0, -100, sdl_SetUP->getWindowWidth()/2, 800);
	mountains2 = new Displayimage(sdl_SetUP->getRender(), "images/mountains2.png", 0, 400, sdl_SetUP->getWindowWidth()/2, 400);
	mountains3 = new Displayimage(sdl_SetUP->getRender(), "images/mountains.png", 900, -100, sdl_SetUP->getWindowWidth() / 2, 800);
	mountains4 = new Displayimage(sdl_SetUP->getRender(), "images/mountains2.png", 700, 400, sdl_SetUP->getWindowWidth() / 2, 400);

	ground = new Displayimage(sdl_SetUP->getRender(), "images/ground.png", 0, 570, sdl_SetUP->getWindowWidth(), getScreenHight() / 2);
	ground2 = new Displayimage(sdl_SetUP->getRender(), "images/ground2.png", 1350, 570, sdl_SetUP->getWindowWidth(), getScreenHight() / 2);
	ground3 = new Displayimage(sdl_SetUP->getRender(), "images/ground.png", 2690, 570, sdl_SetUP->getWindowWidth(), getScreenHight() / 2);

	cloude = new Displayimage(sdl_SetUP->getRender(), "images/cloudes.png", 100, 100, 300, 200);

	player = new Displayimage(sdl_SetUP->getRender(), "images/image.png", 80, 480, 96, 128);

	//player->DrewText();


	
	

}


int Main::getScreenWidth(){


	return screenWidth;
}


int Main::getScreenHight(){


	return screenHeight;
}


void Main::GameLoop() {
	

	// game loop // update renderer
	while (!quit && sdl_SetUP->getMainEvent()->type != SDL_QUIT) {

		originalHeight = 1.10;

		// display images 
		background = new Displayimage(sdl_SetUP->getRender(), "images/bg.png", 0, 0, sdl_SetUP->getWindowWidth(), sdl_SetUP->getWindowHeight());
		
		//ground = new Displayimage(sdl_SetUP->getRender(), "images/ground.png", 0, sdl_SetUP->getWindowHeight()/originalHeight, sdl_SetUP->getWindowWidth(), sdl_SetUP->getWindowHeight() / 4);
		
		// pick a raondom number to position th clouds
		randomNumber = new random(20);


		sdl_SetUP->Begin();
	    // background 
	    background->Drew();
		// mountains 
		mountains->Drew();
		mountains2->Drew();
		mountains3->Drew();
		mountains4->Drew();
		// grounds 
		ground->Drew();
		ground2->Drew();
		ground3->Drew();
	    // cloudes 
		cloude->Drew();
		// player object 
		player->Drewsprite();


		switch (sdl_SetUP->getMainEvent()->type) {
		
		case SDL_KEYDOWN:

		///	idleMode = 10;
	
			switch (sdl_SetUP->getMainEvent()->key.keysym.sym) {

			case SDLK_LEFT:

				player->setFrameY(32);

				player->Animation();

				cout << "Left " << endl;

				///cout << "My x pos is " << player->getX() << endl;

				///isMoving_left = true;
				/*
				cout << isMoving_left << endl;

				if (player->getX() < 700 && isScrolling == false ) {

					player->setXpos(player->getX() - playerSpeed);

				

		
				}

				else if (ground->getX() == -16) {
				
					isScrolling = true;

					//cout << "Yes I Hit my Spot " << endl;
				
				}

				else if (ground->getX() < -16){
				

					isScrolling = false;
				
				
				}


				cout << ground->getX() << endl;

				if (player->getX() <= 700 && isScrolling == false) {
				
					ground->setXpos(ground->getX() + playerSpeed * 4);

					ground2->setXpos(ground2->getX() + playerSpeed * 4);

					ground3->setXpos(ground3->getX() + playerSpeed * 4);

					mountains->setXpos(mountains->getX() + 1);
					mountains2->setXpos(mountains2->getX() + 2);
					mountains3->setXpos(mountains3->getX() + 1);
					mountains4->setXpos(mountains4->getX() + 2);
				     
				

				}

				*/
				break;

			case SDLK_RIGHT:

				cout << "Right" << endl;

				player->setFrameY(64);

				player->Animation();

				isMoving_rignt = true;

				if (player->getX() < 700) {

					player->setXpos(player->getX() + playerSpeed);

			}

				if (player->getX() == 700) {
				
					ground->setXpos(ground->getX() - playerSpeed*4 );
					ground2->setXpos(ground2->getX() - playerSpeed*4);
					ground3->setXpos(ground3->getX() - playerSpeed * 4);

					mountains->setXpos(mountains->getX() - 1);
					mountains2->setXpos(mountains2->getX() -2);
					mountains3->setXpos(mountains3->getX() - 1);
					mountains4->setXpos(mountains4->getX() - 2);
					
					

				
				}

			

				break;

			case SDLK_UP:

				cout << "up" << endl;


				player->setFrameY(96);

				player->Animation();

				player->setYpos(player->getY() - 4);


				break;

			case SDLK_DOWN:

				cout << "down" << endl;

				player->setFrameY(0);

				player->Animation();

				player->setYpos(player->getY() + 4);

				break;

			case SDLK_f:

				cout << "Fire" << endl;

				break;
		  
			case SDLK_ESCAPE:

				quit = true;

				break;
			default:
				break;
			}

		default:
			break;
		}

		// reset the position tracker 
		/*
		if (SDL_KEYUP) {
		 
			isMoving_left = false; 
			isMoving_rignt = false;
		
		}
		*/
		/// add cloude 

		if (cloude->getX() < sdl_SetUP->getWindowWidth()) {

			cloude->setXpos(cloude->getX() + 10);
		
		}



		else if (cloude->getX() >= sdl_SetUP->getWindowWidth()){
		     
			cloude->setXpos(0);
			cloude->setYpos(randomNumber->mathRandom());
		
		}
		
		// reset ground position // for right movment 

		if (ground->getX() < -1360 ) {

			cout << "ground1 my x is " << ground->getX() << endl;
			ground->setXpos(2690);
			cout << "ground1 my x is " << ground->getX() << endl;

		
		}

		if (ground2->getX() < -1354) {
			
		
			ground2->setXpos(2690);
			cout << "ground2 my x is " << ground2->getX() << endl;


		}
        
		if (ground3->getX() < -1390) {

	
			ground3->setXpos(2690);
			cout << "ground3 my x is " << ground3->getX() << endl;

		}


		// reset ground position  // resest to the left 

		if (ground->getX() > -1360 && isMoving_left == true) {

			//ground->setXpos(-1376); // we need to log the last pos of the platform 
			cout << "groundx1 my x is " << ground->getX() << endl;


		}

		if (ground2->getX() > -1354 && isMoving_left == true) {


			ground2->setXpos(1350);
			cout << "groundx2 my x is " << ground2->getX() << endl;


		}

		if (ground3->getX() > -1390 && isMoving_left == true) {


			ground3->setXpos(2690);
			cout << "groundx3 my x is " << ground3->getX() << endl;

		}

		//player pose if during wait 

		///idleMode -= 1; 
            
		////if (SDL_KEYUP && idleMode <= 0 ) {
		
			///player->setFrameY(0);
			////player->setFrameY(32);
		///	player->setFrameY(64);
		//	player->setFrameY(96);'

		//	cout << "player should be doing something at this moment becuase nothing is going on " << endl;
		
		///}


		

		// ping the width and height of the window ever frame
		sdl_SetUP->getWindowWidth();
		sdl_SetUP->getWindowHeight();

		// print out the window  size in the terminal 
		///cout << sdl_SetUP->getWindowWidth() << endl;
		  
	//	cout << player->getX() << player->getY()<< endl;

		// clear memeory if drawing over and over.

		delete background;
		//delete ground;
	

		sdl_SetUP->End();


	}

}

Main::~Main()
{
	delete sdl_SetUP;

	// clear memory if drawing once 

	delete ground;
//	delete background;
 
	delete player;

}
