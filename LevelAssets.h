#pragma once

#include "l1n1.h"

class LevelAssets
	: public Animation
{
public:
	LevelAssets();
	~LevelAssets();

	void Update();


	// Rectangle blockID[1000] {};

private:
	
	//States used to determine which animation will take place 
	enum state { BLOCKITEM, BLOCKBREAK, FLOWER, STAR, COIN, GETCOIN };
	state currentState;

	//State Setter
	void changeState(state newState);

	const point<int> FRAME_SIZE() { return{ 16, 16 }; };
	const point<int> GROUND() { return{ 0, 144 }; };
	const point<int> BLOCKBREAKABLE() { return{ 18, 144 }; };
	const point<int> BLOCKITEMS() { return{ 0, 54 }; };
};

