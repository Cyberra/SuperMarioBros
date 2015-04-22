#pragma once

#include "Common.h"
#include "Level1n1.h"
#include "Libraries.h"
#include "Component.h"

class Background
{
public:
	Background();
	~Background();

private:
	const point<int> FRAME_SIZE() { return{ 16, 16 }; };
	const point<int> SKY_SRC() { return{ 93, 36 }; };
};

