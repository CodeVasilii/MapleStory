#include "MainUILayer.h"
#include "PlayerEditorScene.h"

bool MainUILayer::init()
{
	do 
	{
		if (!Layer::init())
		{
			break;
		}

		auto roleChangeItem = MenuItemImage::create(
			"roleChange.png",
			"roleChangeSelected.png",
			CC_CALLBACK_1(MainUILayer::roleChange,this));

		auto menu = Menu::create(roleChangeItem, nullptr);
		this->addChild(menu);

		return true;
	} while (0);
	return false;
}

void MainUILayer::roleChange(Ref* pSender)
{
	auto scene = PlayerEditorScene::create();
	Director::getInstance()->replaceScene(scene);
}