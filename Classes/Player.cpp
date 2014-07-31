#include "Player.h"

Player* Player::player = nullptr;

void Player::setCurrentAnimation(PlayerAnimations animation)
{
	this->currentAnimation = animation;
}

string Player::getCurrentAnimation()
{
	string animationStr = "";
	switch (currentAnimation)
	{
	case Player::alert:
		animationStr = "alert";
		break;
	case Player::fly:
		animationStr = "fly";
		break;
	case Player::jump:
		animationStr = "jump";
		break;
	case Player::ladder:
		animationStr = "ladder";
		break;
	case Player::prone:
		animationStr = "prone";
		break;
	case Player::proneStab:
		animationStr = "proneStab";
		break;
	case Player::rope:
		animationStr = "rope";
		break;
	case Player::sit:
		animationStr = "sit";
		break;
	case Player::stabT1:
		animationStr = "stabT1";
		break;
	case Player::stabT2:
		animationStr = "stabT2";
		break;
	case Player::stabTF:
		animationStr = "stabTF";
		break;
	case Player::stand:
		animationStr = "stand2";
		break;
	case Player::swingP1:
		animationStr = "swingP1";
		break;
	case Player::swingP2:
		animationStr = "swingP2";
		break;
	case Player::swingPF:
		animationStr = "swingPF";
		break;
	case Player::swingT2:
		animationStr = "swingT2";
		break;
	case Player::walk:
		animationStr = "walk2";
		break;
	default:
		animationStr = "alert";
		break;
	}
	return animationStr;
}