#pragma once

#include "Common.h"
#include "Libraries.h"
#include "Blocks.h"

class BrickBlock :
	public Blocks
{
public:
	BrickBlock();
	~BrickBlock();

	void Update();

private:
	//States used to determine which animation will take place 
	enum state { INTACT, BROKE };
	state currentState;

	//State Setter
	void changeState(state newState);

	//This part is ugly, but at least we can use those "fake consts" in our constructor...
	const int INTACT_NB_FRAME() { return 1; }
	const int BREAKPIECES_NB_FRAME() { return 1; }

	const point<int> FRAME_SIZE() { return{ 16, 16 }; };
	const point<int> INTACT_START_SRC() { return{ 0, 0 }; };
	const point<int> BREAKPIECES_START_SRC() { return{ 0, 108 }; };
};

