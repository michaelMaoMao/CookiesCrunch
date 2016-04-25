//
//  RWTLevel.h
//  CookiesCrunch
//
//  Created by MichaelMao on 16/4/3.
//  Copyright © 2016年 gegejia. All rights reserved.
//

#import "RWTCookie.h"
#import "RWTTile.h"
#import "RWTSwap.h"
#import "RWTChain.h"

static const NSInteger NumColumns = 9;
static const NSInteger NumRows = 9;

@interface RWTLevel : NSObject

@property (assign, nonatomic) NSUInteger targetScore;
@property (assign, nonatomic) NSUInteger maximumMoves;

- (NSSet *)shuffle;

- (RWTCookie *)cookieAtColumn:(NSInteger)column row:(NSInteger)row;
- (instancetype)initWithFile:(NSString *)filename;
- (RWTTile *)tileAtColumn:(NSInteger)column row:(NSInteger)row;
- (void)performSwap:(RWTSwap *)swap;
- (BOOL)isPossibleSwap:(RWTSwap *)swap;
- (NSSet *)removeMatches;
- (NSArray *)fillHoles;
- (NSArray *)topUpCookies;
- (void)detectPossibleSwaps;
- (void)resetComboMultiplier;

@end
