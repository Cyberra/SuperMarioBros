#include "Engine.h"
#include "Sprite.h"
#include "SuperMarioBros.h"

typedef int* pInt;

int main(int argc, char* args[])
{

	Engine::GetInstance()->Init();

	SuperMarioBros* superMarioBros = new SuperMarioBros();

	Engine::GetInstance()->Run();

	delete superMarioBros;

	return 0;
}