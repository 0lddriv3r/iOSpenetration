//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSString, WCAdvertiseLogDB;

@interface WCAdvertiseLogMgr : MMService <PBMessageObserverDelegate, MMKernelExt, MMService>
{
    BOOL adLogReporting;
    BOOL reportTaskRunning;
    WCAdvertiseLogDB *logDB;
    unsigned long reportBeginLocalId;
    unsigned long reportCurrLocalId;
    unsigned long reportEndLocalId;
    BOOL delayInsertDB;
    NSMutableArray *tempLogs;
}

- (void).cxx_destruct;
- (unsigned long)getMaxSendSize;
- (unsigned long)getRandomInternalTime;
- (unsigned long)getExceptionMaxTime;
- (void)saveNextReportTime:(unsigned long)arg1;
- (unsigned long)getNextReportTime;
- (void)onAuthOK;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)startReportADLog;
- (id)getReportADLogPackage;
- (void)tryReportADLog;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)insertDBLogsToDb;
- (void)reportADLog:(unsigned long)arg1 logExt:(id)arg2;
- (id)getKVLogHead;
- (void)setupLogDB;
- (void)onServiceReloadData;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)getPathForLogCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

