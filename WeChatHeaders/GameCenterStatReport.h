//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString;

@interface GameCenterStatReport : MMService <MMService, PBMessageObserverDelegate>
{
}

- (BOOL)svrReport:(unsigned long)arg1 withLogExt:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)stat13384:(id)arg1;
- (void)stat12909:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

