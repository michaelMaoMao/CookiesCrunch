//
//  RWTSwap.m
//  CookiesCrunch
//
//  Created by MichaelMao on 16/4/3.
//  Copyright © 2016年 gegejia. All rights reserved.
//

#import "RWTSwap.h"
#import "RWTCookie.h"

@implementation RWTSwap

- (NSString *)description {
    return [NSString stringWithFormat:@"%@ swap %@ with %@", [super description], self.cookieA, self.cookieB];
}

- (BOOL)isEqual:(id)object {
    // You can only compare this object against other RWTSwap objects.
    if (![object isKindOfClass:[RWTSwap class]]) return NO;
    
    // Two swaps are equal if they contain the same cookie, but it doesn't
    // matter whether they're called A in one and B in the other.
    RWTSwap *other = (RWTSwap *)object;
    return (other.cookieA == self.cookieA && other.cookieB == self.cookieB) ||
    (other.cookieB == self.cookieA && other.cookieA == self.cookieB);
}

- (NSUInteger)hash {
    return [self.cookieA hash] ^ [self.cookieB hash];
}

@end
