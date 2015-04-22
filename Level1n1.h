#pragma once
class Level1n1
{
public:
	Level1n1();
	~Level1n1();

	void Init();
	void Update();
	void Stop();


private:
	struct TileProperties
	{
		bool isBlock;  // true if the tile is a solid wall
		int  myX;  // X coord of the graphic
		int  myY;   // Y coord of the graphic
	};
};