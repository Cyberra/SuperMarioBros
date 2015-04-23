#pragma once

//Second & slightly more complex iteration.
//There's a billion way to handle this but with only 3 animations this works just fine for our current purpose.
//Might want to consider another way to stock animations if you end up with 6-7 animations per actors.

#include "Common.h"
#include "Animation.h"
#include "Libraries.h"
#include "Level1n1.h"

class Mario :
	public Animation

{
public:
	Mario();
	Mario(int x, int y);
	~Mario();

	void Update();

private:

	//////////////////////////////////////////////////////
	// MARIO'S STATS
	//////////////////////////////////////////////////////

	float marioX;
	float marioY;
	float currentTime;

	bool contactXLeft = false;
	bool contactXRight = false;
	bool contactYTop = false;
	bool contactYBottom = false;
	
	float FALLSPEED = 0;
	
	const float RUNSPEED = 100;

	//States used to determine which animation will take place 
	enum state { IDLE_SMALL, IDLE_BIG, IDLE_FLOWER, WALK_SMALL, WALK_BIG, WALK_FLOWER, JUMP_SMALL, JUMP_BIG, JUMP_FLOWER, CROUCH_BIG, CROUCH_FLOWER, BRAKE_SMALL, BRAKE_BIG, BRAKE_FLOWER, ATTACK_FLOWER, DEATH };
	state currentState;

	//State Setter
	void changeState(state newState);

	//This part is ugly, but at least we can use those "fake consts" in our constructor...
	const int IDLE_NB_FRAME() { return 1; }
	const int WALK_NB_FRAME() { return 3; }
	const int JUMP_NB_FRAME() { return 1; }
	const int CROUCH_NB_FRAME() { return 1; }
	const int BRAKE_NB_FRAME() { return 1; }
	const int ATTACK_FLOWER_NB_FRAME() { return 1; }
	const int DEATH_NB_FRAME() { return 1; }

	const point<int> FRAME_SIZE() { return{ 30, 31 }; };
	const point<int> IDLE_SMALL_START_SRC() { return{ 0, 0 }; };
	const point<int> IDLE_BIG_START_SRC() { return{ 0, 35 }; };
	const point<int> IDLE_FLOWER_START_SRC() { return{ 0, 70 }; };
	const point<int> WALK_SMALL_START_SRC() { return{ 30, 0 }; };
	const point<int> WALK_BIG_START_SRC() { return{ 30, 35 }; };
	const point<int> WALK_FLOWER_START_SRC() { return{ 30, 70 }; };
	const point<int> JUMP_SMALL_START_SRC() { return{ 150, 0 }; };
	const point<int> JUMP_BIG_START_SRC() { return{ 150, 35 }; };
	const point<int> JUMP_FLOWER_START_SRC() { return{ 150, 70 }; };
	const point<int> CROUCH_BIG_START_SRC() { return{ 180, 35 }; };
	const point<int> CROUCH_FLOWER_START_SRC() { return{ 180, 70 }; };
	const point<int> BRAKE_SMALL_START_SRC() { return{ 120, 0 }; };
	const point<int> BRAKE_BIG_START_SRC() { return{ 120, 35 }; };
	const point<int> BRAKE_FLOWER_START_SRC() { return{ 120, 70 }; };
	const point<int> ATTACK_FLOWER_START_SRC() { return{ 0, 109 }; };
	const point<int> DEATH_START_SRC() { return{ 180, 0 }; };



	
};

