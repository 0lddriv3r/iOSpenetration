//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface LinkWeAppJumpWrap : MMObject
{
    BOOL _isForbidSSignal;
    NSString *_appid;
    NSString *_pagePath;
    unsigned long _appState;
}

@property(nonatomic) BOOL isForbidSSignal; // @synthesize isForbidSSignal=_isForbidSSignal;
@property(nonatomic) unsigned long appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (void).cxx_destruct;

@end

