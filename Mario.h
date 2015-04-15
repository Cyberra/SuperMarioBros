#pragma once

//Second & slightly more complex iteration.
//There's a billion way to handle this but with only 3 animations this works just fine for our current purpose.
//Might want to consider another way to stock animations if you end up with 6-7 animations per actors.

#include "D:\ProgEngine\bart-sdl-engine-h15\src\Core\Common.h"
#include "D:\ProgEngine\bart-sdl-engine-h15\src\Core\Sprite.h"
#include "D:\ProgEngine\bart-sdl-engine-h15\src\Core\Animation.h"
#include "SuperMarioBros.h"

#define MARIO_PATH "Images/mario.png"

class Mario :
	public Sprite, public Animation

{
public:
	Mario();
	~Mario();

	void Start();
	void Update();
	void Stop();

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

