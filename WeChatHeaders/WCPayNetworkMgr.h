//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSString;

@interface WCPayNetworkMgr : MMService <PBMessageObserverDelegate, MMService>
{
    NSMutableDictionary *_startedTimeDic;
    NSMutableDictionary *_callerNames;
    NSMutableDictionary *_callbacks;
}

@property(retain, nonatomic) NSMutableDictionary *callbacks; // @synthesize callbacks=_callbacks;
- (void).cxx_destruct;
- (void)debugPrintRequestWithCGIWrap:(id)arg1;
- (void)debugPrintResponseWithCGIWrap:(id)arg1;
- (id)nearestOutsideCallerName;
- (void)cleanForKey:(id)arg1;
- (void)handleErrorAndClean:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCommonErrorAndCleanForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long)sendRequestWithTimeout:(id)arg1 cgi:(unsigned long)arg2 timeout:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long)sendRequest:(id)arg1 cgi:(unsigned long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (unsigned long)queryFlowDataWithFuncId:(id)arg1 mobile:(id)arg2 productName:(id)arg3 appId:(id)arg4 remarks:(id)arg5 ticket:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (unsigned long)getIAPOrderDetailWithOrderID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long)deleteSingleOrderWithOrderID:(id)arg1 payType:(int)arg2 billId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long)commonQueryCmdIDWithTimeout:(unsigned long)arg1 bizParams:(id)arg2 wxParams:(id)arg3 timeout:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long)commonQueryCmdID:(unsigned long)arg1 bizParams:(id)arg2 wxParams:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)cancelRequestForEventId:(unsigned long)arg1;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

