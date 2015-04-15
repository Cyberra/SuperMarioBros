#pragma once
#include "D:\ProgEngine\bart-sdl-engine-h15\src\Core\Sprite.h"
class Goomba :
	public Sprite
{
public:
	Goomba();
	~Goomba();

	void Start();
	void Update();
	void Stop();
};

