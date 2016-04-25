//
//  GameScene.h
//  CookiesCrunch
//

//  Copyright (c) 2016年 gegejia. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@class RWTLevel;
@class RWTSwap;

@interface RWTMyScene : SKScene

@property (strong, nonatomic) RWTLevel *level;
@property (copy, nonatomic) void (^swipeHandler)(RWTSwap *swap);

- (void)addTiles;
- (void)addSpritesForCookies:(NSSet *)cookies;
- (void)animateSwap:(RWTSwap *)swap completion:(dispatch_block_t)completion;
- (void)animateInvalidSwap:(RWTSwap *)swap completion:(dispatch_block_t)completion;
- (void)animateMatchedCookies:(NSSet *)chains completion:(dispatch_block_t)completion;
- (void)animateFallingCookies:(NSArray *)columns completion:(dispatch_block_t)completion;
- (void)animateNewCookies:(NSArray *)columns completion:(dispatch_block_t)completion;
- (void)animateGameOver;
- (void)animateBeginGame;
- (void)removeAllCookieSprites;

@end

