#pragma once

#include "cocos2d.h"
USING_NS_CC;

class MainUILayer : public Layer
{
public:
	CREATE_FUNC(MainUILayer);
	virtual bool init();

	void roleChange(Ref* pSender);
private:

};
