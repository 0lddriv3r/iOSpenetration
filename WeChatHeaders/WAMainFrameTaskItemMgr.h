//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface WAMainFrameTaskItemMgr : MMService <MMService>
{
}

- (void)notifyMainFrameTaskItemUpdated;
- (BOOL)deleteMainFrameTaskItemBeforeUpdateTime:(unsigned long)arg1;
- (BOOL)deleteMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned long)arg2 needNotify:(BOOL)arg3;
- (BOOL)updateMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned long)arg2;
- (id)getMainFrameTaskItemListWithLimit:(unsigned long)arg1 ignoreUsername:(id)arg2 debugMode:(unsigned long)arg3;
- (id)getMainFrameTaskItemListWithLimit:(unsigned long)arg1;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

