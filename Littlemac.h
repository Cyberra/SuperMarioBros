#pragma once
//Second & slightly more complex iteration.
//There's a billion way to handle this but with only 3 animations this works just fine for our current purpose.
//Might want to consider another way to stock animations if you end up with 6-7 animations per actors.

#define LITTLE_MAC_PATH "littlemac.png" //2x Original size

#include "Common.h"
#include "Animation.h"
#include "PunchoutGame.h"
#include "Sprite.h"

class Littlemac :
	public Animation
{
public:
	Littlemac();
	~Littlemac();

	void Update();

private:

	//States used to determine which animation will take place 
	enum state { IDLE, WALK, DIZZY };
	state currentState;

	//State Setter
	void changeState(state newState);

	//This part is ugly, but at least we can use those "fake consts" in our constructor...
	const int IDLE_NB_FRAME() { return 6; }

	const point<int> FRAME_SIZE() { return{ 40, 80 }; };
	const point<int> IDLE_START_SRC() { return{ 0, 0 }; };
	const point<int> WALK_START_SRC() { return{ 0, 0 }; };
	const int WALK_NB_FRAME() {
		return{ 6 };
	}
};

