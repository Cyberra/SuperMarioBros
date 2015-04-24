#include "Mario.h"


Mario::Mario()
	: Animation(Texture::ID::Mario, IDLE_NB_FRAME(), ANIM_DEFAULT_SPEED, IDLE_SMALL_START_SRC(), FRAME_SIZE())
	, currentState(IDLE_SMALL)
	, marioX(0)
	, marioY(0)
	, currentTime(0)
{
	//Start the animation on creation
	this->Play();
	//Make it loop
	this->SetIsLooping(true);
}

Mario::Mario(int x, int y)
	: Animation(Texture::ID::Mario, IDLE_NB_FRAME(), ANIM_DEFAULT_SPEED, IDLE_SMALL_START_SRC(), FRAME_SIZE())
	, currentState(IDLE_SMALL)
	, marioX(x)
	, marioY(y)
	, currentTime(0)
{
	this->SetPosition(x, y);
}

Mario::~Mario()
{

}

void Mario::changeState(state newState)
{
	if (this->currentState != newState)
	{
		switch (newState)
		{
		case IDLE_SMALL:
			this->SetSrcPos(IDLE_SMALL_START_SRC());
			this->SetNbFrame(IDLE_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			//Using varying frame rates cause issues since we won't instantly change to the other frame.
			break;
		case IDLE_BIG:
			this->SetSrcPos(IDLE_BIG_START_SRC());
			this->SetNbFrame(IDLE_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			//Using varying frame rates cause issues since we won't instantly change to the other frame.
			break;
		case IDLE_FLOWER:
			this->SetSrcPos(IDLE_FLOWER_START_SRC());
			this->SetNbFrame(IDLE_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			//Using varying frame rates cause issues since we won't instantly change to the other frame.
			break;
		case WALK_SMALL:
			this->SetSrcPos(WALK_SMALL_START_SRC());
			this->SetNbFrame(WALK_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case WALK_BIG:
			this->SetSrcPos(WALK_BIG_START_SRC());
			this->SetNbFrame(WALK_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case WALK_FLOWER:
			this->SetSrcPos(WALK_FLOWER_START_SRC());
			this->SetNbFrame(WALK_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case JUMP_SMALL:
			this->SetSrcPos(JUMP_SMALL_START_SRC());
			this->SetNbFrame(JUMP_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case JUMP_BIG:
			this->SetSrcPos(JUMP_BIG_START_SRC());
			this->SetNbFrame(JUMP_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case JUMP_FLOWER:
			this->SetSrcPos(JUMP_FLOWER_START_SRC());
			this->SetNbFrame(JUMP_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case CROUCH_BIG:
			this->SetSrcPos(CROUCH_BIG_START_SRC());
			this->SetNbFrame(CROUCH_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case CROUCH_FLOWER:
			this->SetSrcPos(CROUCH_FLOWER_START_SRC());
			this->SetNbFrame(CROUCH_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case BRAKE_SMALL:
			this->SetSrcPos(BRAKE_SMALL_START_SRC());
			this->SetNbFrame(BRAKE_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case BRAKE_BIG:
			this->SetSrcPos(BRAKE_BIG_START_SRC());
			this->SetNbFrame(BRAKE_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case BRAKE_FLOWER:
			this->SetSrcPos(BRAKE_FLOWER_START_SRC());
			this->SetNbFrame(BRAKE_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case ATTACK_FLOWER:
			this->SetSrcPos(ATTACK_FLOWER_START_SRC());
			this->SetNbFrame(ATTACK_FLOWER_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case DEATH:
			this->SetSrcPos(DEATH_START_SRC());
			this->SetNbFrame(DEATH_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		default:
			break;
		}
		//It's important to reset back to the first frame on change
		this->currentState = newState;
		this->ResetCurrentFrame();
	}
}

void Mario::Update()
{
	float delta = Engine::GetInstance()->GetTimer()->GetDeltaTime();


	std::cout << "Mario's X: " << marioX << std::endl;
	std::cout << "Mario's Y: " << marioY << std::endl;
	
	/*
	if (marioY < 250)
	{
		FALLSPEED++;
	}
	*/

	marioY += FALLSPEED * delta;
	SetPosition((int)marioX, (int)marioY);

	//Very important, otherwise our animation won't update itself
	Animation::Update();

	// D
	if (Engine::GetInstance()->GetInput()->IsKeyHeld(SDL_SCANCODE_D) && !Engine::GetInstance()->GetInput()->IsKeyHeld(SDL_SCANCODE_A))
	{
		changeState(WALK_SMALL);
		this->Flip(SDL_FLIP_NONE);
		marioX += RUNSPEED * delta;
		SetPosition((int)marioX, (int)marioY);
	}
	else if (!Engine::GetInstance()->GetInput()->IsKeyHeld(SDL_SCANCODE_D) && !Engine::GetInstance()->GetInput()->IsKeyHeld(SDL_SCANCODE_A))
	{
		changeState(IDLE_SMALL);
		this->Flip(SDL_FLIP_NONE);
	}
	if (Engine::GetInstance()->GetInput()->IsKeyReleased(SDL_SCANCODE_D))
	{
		changeState(IDLE_SMALL);
	}


	// S
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_S))
	{
		changeState(IDLE_SMALL);
	}

	// A
	if (Engine::GetInstance()->GetInput()->IsKeyHeld(SDL_SCANCODE_A) && !Engine::GetInstance()->GetInput()->IsKeyHeld(SDL_SCANCODE_D))
	{
		changeState(WALK_SMALL);
		this->Flip(SDL_FLIP_HORIZONTAL);
		marioX -= RUNSPEED * delta;
		SetPosition((int)marioX, (int)marioY);
	}
	else if (!Engine::GetInstance()->GetInput()->IsKeyHeld(SDL_SCANCODE_A) && !Engine::GetInstance()->GetInput()->IsKeyHeld(SDL_SCANCODE_D))
	{
		changeState(IDLE_SMALL);
		this->Flip(SDL_FLIP_HORIZONTAL);
	}
	if (Engine::GetInstance()->GetInput()->IsKeyReleased(SDL_SCANCODE_A))
	{
		changeState(IDLE_SMALL);
	}

	// F
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_F))
	{
		changeState(ATTACK_FLOWER);
	}

	// 0
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_0))
	{
		changeState(JUMP_SMALL);
	}
	
	// Bottom Collision
	//for (i = 0; i < blockID; ++i)
	//{
	//
	//}


}