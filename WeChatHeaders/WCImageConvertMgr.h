//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, WCImageConvertDataProvider, WCImageConvertReportData;

@interface WCImageConvertMgr : MMService <MMService, MMKernelExt>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_convertList;
    BOOL _bStop;
    WCImageConvertDataProvider *_dataProvider;
    WCImageConvertReportData *_reportData;
}

- (void).cxx_destruct;
- (BOOL)waitForAWhile;
- (void)convertMsgPic:(id)arg1;
- (BOOL)isNeddConvert:(id)arg1;
- (void)recoveryBakPicToNormalPicEx;
- (void)recoveryBakPicToNormalPic;
- (void)stopConvert;
- (void)converting;
- (id)prepareData;
- (void)startConvert;
- (void)onPreQuit;
- (void)onServiceClearData;
- (BOOL)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
