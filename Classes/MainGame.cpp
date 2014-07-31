#include "MainGame.h"
#include "HelloWorldScene.h"


MainGame* MainGame::mainGame = nullptr;

void MainGame::start()
{
	auto director = Director::getInstance();
	gameState = GameState::isStart;
	director->getScheduler()->schedule(schedule_selector(MainGame::update),this,0,false);
}

void MainGame::update(float delTime)
{
	log("AAAAAAAAAAAAA%f" , delTime);
	switch (gameState)
	{
	case MainGame::isStart:
		enStart();
		break;
	case MainGame::isRunning:
		enRunning();
		break;
	case MainGame::isEnd:
		enEnd();
		break;
	default:
		break;
	}

}

void MainGame::enStart()
{
	auto scene = HelloWorld::createScene();
	Director::getInstance()->runWithScene(scene);
	gameState = GameState::isRunning;
}

void MainGame::enRunning()
{

}

void MainGame::enEnd()
{

}