//
//  RWTChain.m
//  CookiesCrunch
//
//  Created by MichaelMao on 16/4/4.
//  Copyright © 2016年 gegejia. All rights reserved.
//

#import "RWTChain.h"

@implementation RWTChain{
    NSMutableArray *_cookies;
}

- (void)addCookie:(RWTCookie *)cookie{
    if (_cookies == nil) {
        _cookies = [NSMutableArray array];
    }
    [_cookies addObject:cookie];
}

- (NSArray *)cookies{
    return _cookies;
}

- (NSString *)description{
    return [NSString stringWithFormat:@"type:%ld cookies: %@", (long)self.chainType, self.cookies];
}

@end
