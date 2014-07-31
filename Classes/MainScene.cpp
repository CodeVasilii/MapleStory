#include "MainScene.h"
#include "MainLogicLayer.h"
#include "MainUILayer.h"

Scene* MainScene::create()
{
	auto scene = Scene::create();

	auto layer = MainLogicLayer::create();
	scene->addChild(layer);

	auto uiLayer = MainUILayer::create();
	scene->addChild(uiLayer);

	return scene;
}