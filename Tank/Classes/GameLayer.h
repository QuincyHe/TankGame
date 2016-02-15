//
//  GameLayer.hpp
//  Tank
//
//  Created by Peter Li on 16/2/13.
//
//


#include "cocos2d.h"
#include "HelloWorldScene.h"

using namespace cocos2d;

class GameLayer : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(GameLayer);
    
    void returntoMenu(Ref* Sender)
    {
        Director::getInstance()->replaceScene(TransitionCrossFade::create(0.8f,HelloWorld::createScene()));
    }
    
};