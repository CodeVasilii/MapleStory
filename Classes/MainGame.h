#pragma once
#include "cocos2d.h"
USING_NS_CC;

class MainGame : public Ref
{
#pragma region singleton
public:
	static MainGame* getInstance()
	{
		if (mainGame == nullptr)
		{
			mainGame = new MainGame();
		}
		return mainGame;
	}

private:
	static MainGame* mainGame;
	MainGame(){};
#pragma endregion singleton

public:
	//��Ϸ����
	void start();

	//��Ϸ��ѭ��
	enum GameState
	{
		isStart,
		isRunning,
		isEnd,
	};
	GameState gameState;
	void update(float delTime);

	void enStart();
	void enRunning();
	void enEnd();
};
