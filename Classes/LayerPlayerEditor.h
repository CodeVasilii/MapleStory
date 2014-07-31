#pragma once

#include "cocos2d.h"
USING_NS_CC;

#include "CocoStudio.h"
using namespace cocostudio;
#include "ui/CocosGUI.h"
using namespace ui;
#include "Player.h"


class LayerPlayerEditor : public Layer
{
public:
	CREATE_FUNC(LayerPlayerEditor);
	virtual bool init();

	void onClickAlert(Ref *pSender, Widget::TouchEventType type);
	void onClickFly(Ref *pSender, Widget::TouchEventType type);
	void onClickJump(Ref *pSender, Widget::TouchEventType type);
	void onClickLadder(Ref *pSender, Widget::TouchEventType type);
	void onClickProne(Ref *pSender, Widget::TouchEventType type);
	void onClickProneStab(Ref *pSender, Widget::TouchEventType type);
	void onClickRope(Ref *pSender, Widget::TouchEventType type);
	void onClickSit(Ref *pSender, Widget::TouchEventType type);
	void onClickStabT1(Ref *pSender, Widget::TouchEventType type);
	void onClickStabT2(Ref *pSender, Widget::TouchEventType type);
	void onClickStabTF(Ref *pSender, Widget::TouchEventType type);
	void onClickStand(Ref *pSender, Widget::TouchEventType type);
	void onClickSwingP1(Ref *pSender, Widget::TouchEventType type);
	void onClickSwingP2(Ref *pSender, Widget::TouchEventType type);
	void onClickSwingPF(Ref *pSender, Widget::TouchEventType type);
	void onClickSwingT2(Ref *pSender, Widget::TouchEventType type);
	void onClickWalk(Ref *pSender, Widget::TouchEventType type);

	void onClickBack(Ref *pSender, Widget::TouchEventType type);
private:
	Player* player;
	Armature* armture;
};

