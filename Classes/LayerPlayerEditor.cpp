#include "LayerPlayerEditor.h"
#include "MainScene.h"

bool LayerPlayerEditor::init()
{
	do 
	{
		if (!Layer::init())
		{
			break;
		}
	    player = Player::getInstance();
		Size visibleSize = Director::getInstance()->getVisibleSize();
		Vec2 origin = Director::getInstance()->getVisibleOrigin();

		ArmatureDataManager::getInstance()->addArmatureFileInfo(player->filePath);
		armture = Armature::create(player->armtureName);
		//armture->setPosition(0,0);
		armture->getAnimation()->play(player->getCurrentAnimation());
		armture->getAnimation()->setSpeedScale(0.4);
		armture->setAnchorPoint(Point(0.5f,0));

		armture->setPosition(origin.x + visibleSize.width / 2,
			origin.y + visibleSize.height / 2);


		this->addChild(armture);

		auto root = GUIReader::getInstance()->widgetFromJsonFile("PlayerEditor/PlayerEditor.json");
		this->addChild(root);

		auto btnAlert = static_cast<Button*>(Helper::seekWidgetByName(root, "btnAlert"));
		btnAlert->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickAlert, this));

		auto btnFly = static_cast<Button*>(Helper::seekWidgetByName(root, "btnFly"));
		btnFly->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickFly, this));

		auto btnJump = static_cast<Button*>(Helper::seekWidgetByName(root, "btnJump"));
		btnJump->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickJump, this));

		auto btnLadder = static_cast<Button*>(Helper::seekWidgetByName(root, "btnLadder"));
		btnLadder->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickLadder, this));

		auto btnProne = static_cast<Button*>(Helper::seekWidgetByName(root, "btnProne"));
		btnProne->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickProne, this));

		auto btnProneStab = static_cast<Button*>(Helper::seekWidgetByName(root, "btnProneStab"));
		btnProneStab->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickProneStab, this));

		auto btnRope = static_cast<Button*>(Helper::seekWidgetByName(root, "btnRope"));
		btnRope->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickRope, this));

		auto btnSit = static_cast<Button*>(Helper::seekWidgetByName(root, "btnSit"));
		btnSit->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickSit, this));

		auto btnStabT1 = static_cast<Button*>(Helper::seekWidgetByName(root, "btnStabT1"));
		btnStabT1->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickStabT1, this));

		auto btnStabT2 = static_cast<Button*>(Helper::seekWidgetByName(root, "btnStabT2"));
		btnStabT2->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickStabT2, this));

		auto btnStabTF = static_cast<Button*>(Helper::seekWidgetByName(root, "btnStabTF"));
		btnStabTF->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickStabTF, this));

		auto btnStand = static_cast<Button*>(Helper::seekWidgetByName(root, "btnStand2"));
		btnStand->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickStand, this));

		auto btnSwingP1 = static_cast<Button*>(Helper::seekWidgetByName(root, "btnSwingP1"));
		btnSwingP1->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickSwingP1, this));

		auto btnSwingP2 = static_cast<Button*>(Helper::seekWidgetByName(root, "btnSwingP2"));
		btnSwingP2->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickSwingP2, this));

		auto btnSwingPF = static_cast<Button*>(Helper::seekWidgetByName(root, "btnSwingPF"));
		btnSwingPF->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickSwingPF, this));

		auto btnSwingT2 = static_cast<Button*>(Helper::seekWidgetByName(root, "btnSwingT2"));
		btnSwingT2->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickSwingT2, this));

		auto btnWalk = static_cast<Button*>(Helper::seekWidgetByName(root, "btnWalk2"));
		btnWalk->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickAlert, this));

		auto btnBack = static_cast<Button*>(Helper::seekWidgetByName(root, "btnBack"));
		btnBack->addTouchEventListener(CC_CALLBACK_2(LayerPlayerEditor::onClickBack, this));

		return true;
	} while (0);
	return false;
}

void LayerPlayerEditor::onClickAlert(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-68,-127));
		player->setCurrentAnimation(Player::PlayerAnimations::alert);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickFly(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-30,-130));
		player->setCurrentAnimation(Player::PlayerAnimations::fly);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickJump(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-29,-123));
		player->setCurrentAnimation(Player::PlayerAnimations::jump);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}


void LayerPlayerEditor::onClickLadder(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-21,-123));
		player->setCurrentAnimation(Player::PlayerAnimations::ladder);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickProne(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-110,-106));
		player->setCurrentAnimation(Player::PlayerAnimations::prone);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickProneStab(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-125, -106));
		player->setCurrentAnimation(Player::PlayerAnimations::proneStab);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickRope(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-19,-125));
		player->setCurrentAnimation(Player::PlayerAnimations::rope);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickSit(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-22,-126));
		player->setCurrentAnimation(Player::PlayerAnimations::sit);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickStabT1(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-128,-123));
		player->setCurrentAnimation(Player::PlayerAnimations::stabT1);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickStabT2(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-109,-130));
		player->setCurrentAnimation(Player::PlayerAnimations::stabT2);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickStabTF(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-128,-153));
		player->setCurrentAnimation(Player::PlayerAnimations::stabTF);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickStand(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-31,-125));
		player->setCurrentAnimation(Player::PlayerAnimations::stand);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickSwingP1(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-117,-117));
		player->setCurrentAnimation(Player::PlayerAnimations::swingP1);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickSwingP2(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-91,-125));
		player->setCurrentAnimation(Player::PlayerAnimations::swingP2);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickSwingPF(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-131,-155));
		player->setCurrentAnimation(Player::PlayerAnimations::swingPF);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickSwingT2(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-95,-125));
		player->setCurrentAnimation(Player::PlayerAnimations::swingT2);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}

void LayerPlayerEditor::onClickWalk(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		//armture->setPosition(Point(600,400) + Point(-28,-125));
		player->setCurrentAnimation(Player::PlayerAnimations::walk);
		armture->getAnimation()->play(player->getCurrentAnimation());
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
}


void LayerPlayerEditor::onClickBack(Ref *pSender, Widget::TouchEventType type)
{
	switch (type)
	{
	case Widget::TouchEventType::BEGAN:
		break;

	case Widget::TouchEventType::MOVED:
		break;

	case Widget::TouchEventType::ENDED:
		{
			auto scene = MainScene::create();
			Director::getInstance()->replaceScene(scene);
		}
		
		break;

	case Widget::TouchEventType::CANCELED:
		break;

	default:
		break;
	}
	
}
