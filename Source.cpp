#include "Sprite.h"
#include "SuperMarioBros.h"
#include "Libraries.h"

#define SCREEN_LENGTH 256
#define SCREEN_HEIGHT 240

int main(int argc, char* args[])
{
	// Initialize the engine
	Engine::GetInstance()->Init(SCREEN_LENGTH, SCREEN_HEIGHT);

	// Loading resources
	Textures->LoadTexture(Texture::ID::Mario, "Images/mario.png");
	Textures->LoadTexture(Texture::ID::Level1n1, "Images/MapStuff.png");
	//Sounds->LoadSound(Sound::ID::EnemyHit, "enemy_hit.wav");
	//Musics->LoadMusic(Music::ID::TestMusic, "testmusic.mp3");
	//Fonts->LoadFont(Font::ID::Dialog, "dialog.ttf", 23);

	SuperMarioBros* superMarioBros = new SuperMarioBros();

	Engine::GetInstance()->Run();

	delete superMarioBros;

	return 0;
}