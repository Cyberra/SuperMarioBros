#pragma once

#include "Common.h"
#include "Animation.h"
#include "Libraries.h"

// http://lazyfoo.net/SDL_tutorials/lesson21/index.php

class Camera
	: public Animation
{
public:
	Camera();
	~Camera();

	SDL_Rect movePoint;
	SDL_Surface *dot = NULL;
	SDL_Surface *background = NULL;
	SDL_Surface *screen = NULL;

	SDL_Event event;

	const int DOT_WIDTH = 20;
	const int DOT_HEIGHT = 20;

	SDL_Rect camera;
	const int SCREEN_LENGTH = 256;
	const int SCREEN_WIDTH = 240;

	//Takes key presses and adjusts the dot's velocity
	void handle_input();
	//Moves the dot
	void move();
	//Shows the dot on the screen
	void show();
	//Sets the camera over the dot
	void set_camera();

private:
	//The X and Y offsets of the dot
	int x, y;

	//The velocity of the dot
	int xVel, yVel;
};

