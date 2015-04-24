

#include "Camera.h"

Camera::Camera()
{
	SDL_Rect camera = { 0, 0, SCREEN_LENGTH, SCREEN_WIDTH };
}

Camera::~Camera()
{

}

void Camera::move()
{
	//Move the dot left or right
	x += xVel;

	//If the dot went too far to the left or right
	if (x < 0)
	{
		//move back
		x -= xVel;
	}
}

void Camera::set_camera()
{
	//Center the camera over the dot
	camera.x = (x + DOT_WIDTH / 2) - SCREEN_WIDTH / 2;
	camera.y = (y + DOT_HEIGHT / 2) - SCREEN_LENGTH / 2;

	//Keep the camera in bounds.
	if (camera.x < 0)
	{
		camera.x = 0;
	}
	if (camera.y < 0)
	{
		camera.y = 0;
	}
	//if (camera.x > LEVEL_WIDTH - camera.w)
	//{
	//	camera.x = LEVEL_WIDTH - camera.w;
	//}
	//if (camera.y > LEVEL_HEIGHT - camera.h)
	//{
	//	camera.y = LEVEL_HEIGHT - camera.h;
	//}
}