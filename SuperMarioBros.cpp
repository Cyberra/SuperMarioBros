
#include "SuperMarioBros.h"
#include "Mario.h"
#include "Level1n1.h"
#include "Background.h"
#include "BackgroundAssets.h"
#include "LevelAssets.h"

SuperMarioBros::SuperMarioBros()
{
	// Plus profond a plus pres
	Background* bkg = new Background();
	BackgroundAssets* bkgA = new BackgroundAssets();
	LevelAssets* bkgLA = new LevelAssets();
	Level1n1* level1n1 = new Level1n1();
	Mario* mario = new Mario();
}

SuperMarioBros::~SuperMarioBros()
{

}

void SuperMarioBros::Start()
{

}

void SuperMarioBros::Update()
{

}

void SuperMarioBros::Stop()
{

}