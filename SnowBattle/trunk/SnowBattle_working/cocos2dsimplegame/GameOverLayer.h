#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface GameOverLayer : CCLayerColor {
    CCLabelTTF *label2;
    CCLabelTTF *label3;
    CCLabelTTF *label4;
    int timeBonus1;
}

+(CCScene *) sceneWithWon:(BOOL)won withscoreValue:(int)scoreValue timeBonus:(int) timeRemaining;
- (id)initWithWon:(BOOL)won withscoreValue:(int)scoreValue timeBonus:(int) timeRemaining;

@end