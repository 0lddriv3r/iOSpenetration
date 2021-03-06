//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IAppTrafficExt.h"
#import "MMService.h"

@class CleanTaskInfo, NSMutableArray, NSRecursiveLock, NSString, NSThread;

@interface CleanCacheService : MMService <MMService, IAppTrafficExt>
{
    NSMutableArray *_arrDoneTask;
    NSMutableArray *_arrWaitTask;
    CleanTaskInfo *_curTaskInfo;
    NSMutableArray *_arrSubFolderName;
    NSMutableArray *_arrSubFileName;
    NSThread *_taskThread;
    NSRecursiveLock *_lock;
    int _runStatus;
    unsigned long _cleanedTotalSize;
    unsigned long _receivedTotalSize;
}

+ (int)randomIndex:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)onReceiveDataLen:(unsigned long)arg1;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)dealloc;
- (id)init;
- (void)forceStop;
- (void)asyncPause;
- (void)asyncStart;
- (void)start;
- (void)threadFunc;
- (BOOL)shouldDeletePath:(id)arg1;
- (void)reportCleanPerformance;
- (void)addAutoCleanTask:(id)arg1;
- (BOOL)canAddTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

