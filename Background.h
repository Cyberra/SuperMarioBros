#pragma once

#include "Common.h"
#include "Level1n1.h"
#include "Libraries.h"

class Background :
	public Sprite
{
public:
	Background();
	~Background();

	void Start();

private:
	const point<int> FRAME_SIZE() { return{ 16, 16 }; };
	const point<int> SKY_SRC() { return{ 158, 224 }; };
};

