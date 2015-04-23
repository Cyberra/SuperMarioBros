
#include "BrickBlock.h"

BrickBlock::BrickBlock()
	: Animation(Texture::ID::Mario, INTACT_NB_FRAME(), ANIM_DEFAULT_SPEED, INTACT_START_SRC(), FRAME_SIZE())
	, currentState(INTACT)
{

}

BrickBlock::~BrickBlock()
{

}

void BrickBlock::changeState(state newState)
{
	if (this->currentState != newState)
	{
		switch (newState)
		{
		case INTACT:
			this->SetSrcPos(INTACT_START_SRC());
			this->SetNbFrame(INTACT_NB_FRAME());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
		case BROKE:
			this->SetSrcPos(BREAKPIECES_START_SRC());
			this->SetNbFrame(BREAKPIECES_NB_FRAME());
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

void BrickBlock::Update()
{
	//Very important, otherwise our animation won't update itself
	Animation::Update();

	//Don't mind the brackets. Simply tried to save some screen space.
	//Press Space to Pause & Resume

	// TODO : Collision on Marios Head.
}