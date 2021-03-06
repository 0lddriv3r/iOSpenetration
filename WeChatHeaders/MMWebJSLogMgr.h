//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CNetworkStatusExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MMWebJSLogMgr : MMService <PBMessageObserverDelegate, CNetworkStatusExt, MMService>
{
    NSMutableArray *logList;
    NSMutableDictionary *invalidLogDic;
    BOOL cgiRunning;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned long)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (unsigned long)getMaxSendSize;
- (id)getReportPackage;
- (void)realtimeReport;
- (void)tryRealtimeReport;
- (id)getKVLogHead;
- (BOOL)addJSLog:(unsigned long)arg1 logExt:(id)arg2 type:(unsigned long)arg3;
- (void)handleRespInvalidLogList:(id)arg1;
- (BOOL)isInvaildWithLogId:(unsigned long)arg1;
- (void)filterInvalidLogItem;
- (id)pathForInvalidLogCache;
- (void)saveInvalidLogDic;
- (void)loadInvalidLogDic;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

