#pragma once

#include "Common.h"
#include "Libraries.h"

class Background
{
public:
	Background();
	~Background();

private:
	const point<int> FRAME_SIZE() { return{ 16, 16 }; };
	const point<int> SKY_SRC() { return{ 93, 36 }; };
};

