#pragma once

#include "Common.h"
#include "Libraries.h"
#include "Animation.h"

class ItemBlock :
	public Animation
{
public:
	ItemBlock();
	~ItemBlock();

	void Update();

private:
	//States used to determine which animation will take place 
	enum state { INTACT, EMPTY };
	state currentState;

	//State Setter
	void changeState(state newState);

	//This part is ugly, but at least we can use those "fake consts" in our constructor...
	const int INTACT_NB_FRAME() { return 1; }
	const int EMPTY_NB_FRAME() { return 1; }

	const point<int> FRAME_SIZE() { return{ 16, 16 }; };
	const point<int> INTACT_START_SRC() { return{ 0, 0 }; };
	const point<int> EMPTY_START_SRC() { return{ 0, 108 }; };
};

