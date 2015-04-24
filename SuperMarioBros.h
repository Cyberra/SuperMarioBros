#pragma once

#include "Engine.h"
#include "Common.h"
#include "Rectangle.h"
#include "Animation.h"
#include "Libraries.h"

#include "Background.h"
#include "BackgroundAssets.h"
#include "LevelAssets.h"

#include "Mario.h"

class SuperMarioBros
	: Component
{
public:
	SuperMarioBros();
	~SuperMarioBros();
	
	void Start();
	void Update();
	void Stop();
};

