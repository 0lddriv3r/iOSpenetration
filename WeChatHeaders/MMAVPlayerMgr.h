//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface MMAVPlayerMgr : MMService <MMService>
{
    NSMutableArray *m_arrItem;
    NSMutableArray *m_clearQueue;
    int m_aliveAvPlayer;
    BOOL m_isActive;
    BOOL m_pauseMusic;
    BOOL m_slowPlaying;
    int m_queueSemaphore;
    unsigned long m_holdingFlag;
    NSObject<OS_dispatch_queue> *m_avmgrQueue;
}

- (void).cxx_destruct;
- (void)notifyScrollViewStable;
- (void)internalPerformFullPlay:(id)arg1 muted:(BOOL)arg2 audioCategory:(unsigned int)arg3;
- (void)internalPerformFullPlay:(id)arg1;
- (void)internalPerformSilentPlay:(id)arg1;
- (void)internalPerformClear:(id)arg1;
- (void)internalCheckItemState;
- (void)checkItemState;
- (void)resumeAllItem;
- (BOOL)stackAllItem;
- (void)clearItemImmediatly:(id)arg1;
- (void)removeFromClearQueue:(id)arg1;
- (void)internalClearItemInQueue;
- (void)addToClearQueue:(id)arg1;
- (void)clearItem:(id)arg1;
- (void)syncSilentPlayItem:(id)arg1;
- (void)silentPlayItem:(id)arg1;
- (void)fullPlayItem:(id)arg1 muted:(BOOL)arg2 audioCategory:(unsigned int)arg3;
- (void)fullPlayItem:(id)arg1;
- (void)fullLoadItem:(id)arg1;
- (void)pauseItem:(id)arg1 isForceToPause:(BOOL)arg2;
- (void)pauseItem:(id)arg1;
- (void)loadItem:(id)arg1 forVideoPath:(id)arg2;
- (void)setItem:(id)arg1 inToScreen:(BOOL)arg2;
- (void)killItem:(id)arg1;
- (void)stopHoldingUpdate:(int)arg1;
- (void)startHoldingUpdate:(int)arg1;
- (BOOL)checkRestartMusic;
- (void)performDeactive;
- (void)unregistItem:(id)arg1;
- (id)registItem:(id)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)dealloc;
- (void)addAutoCleanTask;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
