#include "Littlemac.h"


Littlemac::Littlemac()
	: Animation(LITTLE_MAC_PATH, WALK_NB_FRAME(), 2, FRAME_SIZE(), WALK_START_SRC())
	, currentState(IDLE)
{
	//Start the animation on creation
	this->Play();
	//Make it loop
	this->SetIsLooping(true);
	SetPosition(110, 140);
}

//Really basic animation state change
//You'd want to use another system to store an object's multiple animations

void Littlemac::changeState(state newState)
{
	if (this->currentState != newState)
	{
		switch (newState)
		{
		case IDLE:
			this->SetStartSrcPos(IDLE_START_SRC());
			this->SetNbFrame(IDLE_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			//Using varying frame rates cause issues since we won't instantly change to the other frame.
			break;
			//case WALK:
			//	this->SetStartSrcPos(WALK_START_SRC());
			//	this->SetNbFrame(WALK_NB_FRAME());
			//	this->SetFrameRate(ANIM_DEFAULT_SPEED);
			//	break;
			//case DIZZY:
			//	this->SetStartSrcPos(DIZZY_START_SRC());
			//	this->SetNbFrame(DIZZY_NB_FRAME());
			//	this->SetFrameRate(ANIM_DEFAULT_SPEED);
			//	break;
		default:
			break;
		}
		//It's important to reset back to the first frame on change
		this->currentState = newState;
		this->ResetCurrentFrame();
	}
	
}

void Littlemac::Update()
{
	//Very important, otherwise our animation won't update itself
	Animation::Update();

	//Don't mind the brackets. Simply tried to save some screen space.
	//Press Space to Pause & Resume
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_SPACE)){
		if (this->GetIsPlaying()){
			this->Stop();
		}
		else {
			this->Play();
		}
	}
	//Press 1 for Idle
	//if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_1)){
		changeState(IDLE);
	//}
	//Press 2 for Walk
	//if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_2)){
		//changeState(WALK);
	//}
	//Press 3 for Dizzy
	//if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_3)){
		//changeState(DIZZY);
	//}

}

Littlemac::~Littlemac()
{

}

