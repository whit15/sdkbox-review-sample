#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    
private:
    
    void newButtonRate();
    void newButtonIncrease();
    
    void onRateClicked(cocos2d::Ref* pSender);
    void onIncreaseClicked(cocos2d::Ref* pSender);

    cocos2d::MenuItemLabel* _btnRate;
    cocos2d::MenuItemLabel* _btnIncrease;
};

#endif // __HELLOWORLD_SCENE_H__