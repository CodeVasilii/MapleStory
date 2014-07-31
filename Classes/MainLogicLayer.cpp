#include "MainLogicLayer.h"
#include "CocoStudio.h"
using namespace cocostudio;

bool MainLogicLayer::init()
{
	do 
	{
		if (!Layer::init())
			break;

		//ArmatureDataManager::getInstance()->addArmatureFileInfo("wandoujian.json");
		//auto armture = Armature::create("wandoujian");
		//armture->setPosition(0,0);
		//armture->getAnimation()->play("alert");

		//this->addChild(armture);

		return true;
	} while (0);
	return false;
}