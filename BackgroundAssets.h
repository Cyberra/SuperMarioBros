#pragma once

#include "l1n1.h"

class BackgroundAssets
	: public Animation
{
public:
	BackgroundAssets();
	~BackgroundAssets();

private:
	const point<int> FRAME_SIZE() { return{ 16, 16 }; };
	const point<int> CLOUD1() { return{ 92, 91 }; };
	const point<int> CLOUD2() { return{ 110, 91 }; };
	const point<int> CLOUD3() { return{ 92, 109 }; };
	const point<int> CLOUD4() { return{ 110, 109 }; };
	const point<int> MOUNTAINLEFT() { return{ 18, 162 }; };
	const point<int> MOUNTAINRIGHT() { return{ 54, 162 }; };
	const point<int> MOUNTAINFILL() { return{ 54, 180 }; };
	const point<int> MOUNTAINTOP() { return{ 36, 162 }; };
	const point<int> MOUNTAINDOTS1() { return{ 36, 180 }; };
	const point<int> MOUNTAINDOTS2() { return{ 73, 180 }; };
	const point<int> BUSHLEFT() { return{ 0, 180 }; };
	const point<int> BUSHRIGHT() { return{ 18, 180 }; };
	const point<int> BUSHCENTER() { return{ 0, 198 }; };
};

