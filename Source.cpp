#include "Engine.h"
#include "Sprite.h"

typedef int* pInt;

int main(int argc, char* args[])
{

	Engine::GetInstance()->Init();

	Engine::GetInstance()->Run();


	return 0;
}