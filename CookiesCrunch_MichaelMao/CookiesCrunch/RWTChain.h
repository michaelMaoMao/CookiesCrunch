//
//  RWTChain.h
//  CookiesCrunch
//
//  Created by MichaelMao on 16/4/4.
//  Copyright © 2016年 gegejia. All rights reserved.
//

#import <Foundation/Foundation.h>
@class RWTCookie;

typedef NS_ENUM(NSUInteger, ChainType){
    ChainTypeHorizontal,
    ChainTypeVertical,
};

@interface RWTChain : NSObject

@property (nonatomic, strong, readonly) NSArray *cookies;

@property ChainType chainType;
// How many points this chain is worth.
@property (assign, nonatomic) NSUInteger score;


- (void)addCookie:(RWTCookie *)cookie;

@end
