//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, WCNewClickStatItem, WCNewClickStatRecordPageItem, WCNewClickStatReportConfig;

@interface WCNewClickStatMgr : MMService <MMService, PBMessageObserverDelegate, MMKernelExt>
{
    WCNewClickStatItem *_reportItem;
    WCNewClickStatRecordPageItem *curPage;
    NSObject<OS_dispatch_queue> *queue;
    WCNewClickStatReportConfig *_reportConfig;
    unsigned long _eventID;
}

- (void).cxx_destruct;
- (void)testConfigFile;
- (void)saveSnapshot:(id)arg1;
- (void)notifyPageAppear:(id)arg1;
- (void)removeWidgetRecordByPageList:(id)arg1;
- (BOOL)isNeedCalWidgetStatData:(id)arg1;
- (BOOL)isNeedPageAction:(id)arg1 pageActionConfig:(id)arg2;
- (BOOL)isNeedFilter:(id)arg1;
- (void)saveCurrentReportData:(id)arg1;
- (BOOL)isNeedToUpdateReportConfig;
- (void)updateReportConfig:(id)arg1 andVersionBuffer:(id)arg2;
- (void)updateReportConfigFromServer;
- (void)loadReportConfig;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)isReportData:(id)arg1 matchRespectiveReg:(id)arg2;
- (BOOL)isReportData:(id)arg1 matchEndsReg:(id)arg2;
- (BOOL)isReportData:(id)arg1 matchContinuousReg:(id)arg2;
- (BOOL)isReportData:(id)arg1 matchWith:(id)arg2;
- (BOOL)isNeedToReport:(id)arg1;
- (void)reportData:(id)arg1 withEventConfig:(id)arg2 withPageActionOpt:(id)arg3;
- (void)reportPageStatDataWith:(id)arg1;
- (void)reportAppStatDataWith:(id)arg1;
- (void)reportAppNormalData:(id)arg1 withEventConfig:(id)arg2;
- (void)reportDataWhenWithoutLogin:(id)arg1;
- (void)reportData:(id)arg1;
- (void)checkSeq:(id)arg1;
- (void)reportAndSaveData;
- (void)reconstructOneReportItem;
- (id)getWidgetNormalAttrOnPage:(id)arg1 andTimeStamp:(unsigned long)arg2;
- (id)getPageNormalAttr:(id)arg1 withEventConfig:(id)arg2;
- (id)getWidgetStatAttr:(id)arg1;
- (id)getPageStatAttr;
- (id)getAppStatAttr;
- (id)getAppNormalAttr:(id)arg1;
- (void)calWidgetDataInPage:(id)arg1 andTimeStamp:(unsigned long)arg2 toPageStatData:(id)arg3;
- (void)calPageStatData:(id)arg1;
- (void)calAppStatData:(id)arg1;
- (void)calStatDataFromReportData:(id)arg1;
- (void)saveWidgetRecordForRecordPage:(id)arg1;
- (void)pageDisappear:(id)arg1;
- (void)pageAppear:(id)arg1;
- (void)onAuthOK;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)dealloc;
- (void)onWillSuspend;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

