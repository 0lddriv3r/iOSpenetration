//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface MidasProtocolHider : NSObject
{
    NSMutableSet *_protocols;
    NSMutableDictionary *_selPairs;
}

+ (BOOL)isInstanceSelector:(SEL)arg1 belongsToProtocol:(id)arg2;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)replaceProtocol:(id)arg1 instanceSelector:(SEL)arg2 withInstanceSelector:(SEL)arg3;
- (void)registerProtocol:(id)arg1;

@end

