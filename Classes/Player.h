#pragma once
#include <iostream>
using namespace std;

class Player
{
public:
	enum PlayerAnimations
	{
		alert,
		fly,
		jump,
		ladder,
		prone,
		proneStab,
		rope,
		sit,
		stabT1,
		stabT2,
		stabTF,
		stand,
		swingP1,
		swingP2,
		swingPF,
		swingT2,
		walk,

	};

	string filePath;
	string armtureName;
	void setCurrentAnimation(PlayerAnimations animation);
	string getCurrentAnimation();
	

	static Player* getInstance()
	{
		if (player == nullptr)
		{
			player = new Player();
		}
		return player;
	}

private:
	PlayerAnimations currentAnimation;


	static Player* player;
	Player()
	{
		filePath = "wandoujian/wandoujian.json";
		armtureName = "wandoujian";
		currentAnimation = PlayerAnimations::stand;
	}
};
