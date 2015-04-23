

#include "BackgroundAssets.h"

BackgroundAssets::BackgroundAssets()
{
	const int HEIGHT = 16;
	const int WIDTH = 220;

	int map[WIDTH][HEIGHT] = {
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 2 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 4 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 5 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 6 , 9 , 7 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		6 , 9 , 8 , 10, 7 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
		0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
	};

	for (int i = 0; i < WIDTH; ++i)
	{
		for (int j = 0; j < HEIGHT; ++j)
		{
			Sprite* temp = nullptr;
			switch (map[j][i])
			{
			case 0:
				break;
			case 1:
				temp = new Sprite(Texture::ID::Level1n1, CLOUD1(), FRAME_SIZE());
				temp->SetPosition(i * FRAME_SIZE().x, j * FRAME_SIZE().y);
				break;
			case 2:
				temp = new Sprite(Texture::ID::Level1n1, CLOUD2(), FRAME_SIZE());
				temp->SetPosition(i * FRAME_SIZE().x, j * FRAME_SIZE().y);
				break;
			case 3:
				temp = new Sprite(Texture::ID::Level1n1, CLOUD3(), FRAME_SIZE());
				temp->SetPosition(i * FRAME_SIZE().x, j * FRAME_SIZE().y);
				break;
			case 4:
				temp = new Sprite(Texture::ID::Level1n1, CLOUD4(), FRAME_SIZE());
				temp->SetPosition(i * FRAME_SIZE().x, j * FRAME_SIZE().y);
				break;
			case 5:
				temp = new Sprite(Texture::ID::Level1n1, MOUNTAINTOP(), FRAME_SIZE());
				temp->SetPosition(i * FRAME_SIZE().x, j * FRAME_SIZE().y);
				break;
			case 6:
				temp = new Sprite(Texture::ID::Level1n1, MOUNTAINLEFT(), FRAME_SIZE());
				temp->SetPosition(i * FRAME_SIZE().x, j * FRAME_SIZE().y);
				break;
			case 7:
				temp = new Sprite(Texture::ID::Level1n1, MOUNTAINRIGHT(), FRAME_SIZE());
				temp->SetPosition(i * FRAME_SIZE().x, j * FRAME_SIZE().y);
				break;
			case 8:
				temp = new Sprite(Texture::ID::Level1n1, MOUNTAINFILL(), FRAME_SIZE());
				temp->SetPosition(i * FRAME_SIZE().x, j * FRAME_SIZE().y);
				break;
			case 9:
				temp = new Sprite(Texture::ID::Level1n1, MOUNTAINDOTS1(), FRAME_SIZE());
				temp->SetPosition(i * FRAME_SIZE().x, j * FRAME_SIZE().y);
				break;
			case 10:
				temp = new Sprite(Texture::ID::Level1n1, MOUNTAINDOTS2(), FRAME_SIZE());
				temp->SetPosition(i * FRAME_SIZE().x, j * FRAME_SIZE().y);
				break;
			default:
				break;
			}
		}
	}
}

BackgroundAssets::~BackgroundAssets()
{

}
