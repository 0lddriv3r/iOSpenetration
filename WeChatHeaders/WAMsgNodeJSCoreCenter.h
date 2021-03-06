//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IWAMsgNodeJSCoreDelegate.h"
#import "IWAMsgNodeResourceMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "WAContactMgrExtension.h"
#import "WAMsgNodeLaunchLogicDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSString, WAMsgNodeLaunchLogic;

@interface WAMsgNodeJSCoreCenter : MMService <IWAMsgNodeJSCoreDelegate, WAContactMgrExtension, PBMessageObserverDelegate, WAMsgNodeLaunchLogicDelegate, IWAMsgNodeResourceMgrExt, MMService>
{
    WAMsgNodeLaunchLogic *_launchLogic;
    NSMutableDictionary *_coreId2ContextDict;
    NSMutableDictionary *_coreId2CoreData;
    NSMutableArray *_backgroundSuspendedCoreIdList;
    NSMutableDictionary *_appId2DowlnloadingCoreData;
    NSMutableSet *_waitingToStartCoreIdList;
    NSObject<OS_dispatch_group> *_fontGroup;
    struct _WACOpenType _openType;
    int _smartRetainCount;
}

- (void).cxx_destruct;
- (BOOL)isSafeWithAppId:(id)arg1 debugMode:(unsigned int)arg2 widgetType:(unsigned int)arg3 version:(unsigned long long)arg4;
- (BOOL)isPendingCoreDataContainsCoreId:(unsigned int)arg1;
- (void)removePendingCoreDataListWithAppId:(id)arg1;
- (id)getPendingCoreDataListWithAppId:(id)arg1 debugMode:(unsigned int)arg2;
- (id)getPendingCoreDataListWithAppId:(id)arg1;
- (void)addPendingCoreData:(id)arg1;
- (void)checkPendingCoreData:(id)arg1;
- (void)setupContextWithCoreData:(id)arg1;
- (void)onImageUrlDownloaded:(id)arg1;
- (void)onPkgDownload:(id)arg1 appId:(id)arg2 debugMode:(unsigned int)arg3 version:(unsigned long long)arg4 errCode:(int)arg5 scene:(unsigned int)arg6 dataSize:(unsigned int)arg7;
- (void)onGetReleaseDownloadUrlFinish:(id)arg1 url:(id)arg2 checksum:(id)arg3 version:(unsigned long long)arg4 errCode:(int)arg5 scene:(unsigned int)arg6;
- (void)onGetDemoDownloadUrlFinish:(id)arg1 url:(id)arg2 checksum:(id)arg3 errCode:(int)arg4 scene:(unsigned int)arg5;
- (void)onGetDebugDownloadUrlFinish:(id)arg1 url:(id)arg2 checksum:(id)arg3 errCode:(int)arg4 scene:(unsigned int)arg5;
- (void)onLaunchAppId:(id)arg1 debugMode:(unsigned int)arg2 reqVersion:(unsigned long long)arg3 permissonInfo:(id)arg4 latestVersion:(unsigned long long)arg5 latestChecksum:(id)arg6 errCode:(int)arg7 scene:(unsigned int)arg8;
- (void)onJSCore:(unsigned long)arg1 showDatePickerView:(id)arg2;
- (void)onJSCore:(unsigned long)arg1 showPickerView:(id)arg2;
- (void)onJSCore:(unsigned long)arg1 dataUpdated:(id)arg2;
- (void)onJSCore:(unsigned long)arg1 authorizeSuccess:(id)arg2;
- (void)onJSCore:(unsigned long)arg1 openApp:(id)arg2;
- (void)onJSCore:(unsigned long)arg1 updateHeight:(float)arg2;
- (void)onJSCoreSetupFinished:(unsigned long)arg1;
- (void)onJSCore:(unsigned long)arg1 executed:(id)arg2 reserve:(BOOL)arg3;
- (void)reportCostTimeWithEventID:(unsigned int)arg1 coreDataList:(id)arg2 isFinished:(BOOL)arg3 dataSize:(unsigned int)arg4;
- (void)reportCostTimeWithEventID:(unsigned int)arg1 coreData:(id)arg2 isFinished:(BOOL)arg3 dataSize:(unsigned int)arg4;
- (void)delayPerformViewStateChangeWithObject:(id)arg1;
- (void)delayPerformViewStateChange:(unsigned int)arg1 withCoreId:(unsigned int)arg2;
- (void)viewStateChange:(unsigned int)arg1 withCoreList:(id)arg2;
- (void)viewStateChange:(unsigned int)arg1 withCoreId:(unsigned int)arg2;
- (void)notifyEventEndWithResult:(id)arg1 coreId:(unsigned long)arg2;
- (void)notifyOnTapWithCoreId:(unsigned long)arg1 atPoint:(struct CGPoint)arg2 forEvent:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getJSLogMetaInfoWithCoreId:(unsigned long)arg1;
- (id)getJSLogWithCoreId:(unsigned long)arg1;
- (void)switchShowJSLogEntrance;
- (BOOL)shouldShowJSLogEntranceWithDebugMode:(unsigned int)arg1;
- (id)fontGroup;
- (void)ensureCreatedFontGroup;
- (struct _WACOpenType)openTypeForCGFont;
- (void)ensureLoadedCGFont;
- (struct _WACOpenType)openTypeFor3rdTTF;
- (void)ensureLoaded3rdTTF;
- (id)getImageWithCoreId:(unsigned long)arg1 url:(id)arg2;
- (void)resumeAllCoreWhenEnterForeground;
- (void)pauseAllCoreWhenEnterBackground;
- (void)destoryFontData;
- (void)removeAllResource;
- (void)pauseCoreWithId:(unsigned long)arg1;
- (void)resumeCoreWithId:(unsigned long)arg1;
- (void)startCoreWithId:(unsigned long)arg1 force:(BOOL)arg2;
- (void)startCoreWithId:(unsigned long)arg1;
- (void)removeCoreWithId:(unsigned long)arg1;
- (unsigned long)createCoreWithAppId:(id)arg1 version:(unsigned long long)arg2 path:(id)arg3 query:(id)arg4 reqData:(id)arg5 canvasSize:(struct CGSize)arg6 title:(id)arg7 debugMode:(unsigned int)arg8 scene:(unsigned int)arg9 cpKey:(id)arg10 imageFlowStatId:(id)arg11 uniqStatId:(id)arg12 heightRange:(CDStruct_b2fbf00d)arg13 userInfo:(id)arg14 svrChecksum:(id)arg15 launchResp:(id)arg16;
- (void)manualMinusRetainCount;
- (void)manualAddRetainCount;
- (unsigned long)genCoreId;
- (void)onBecomeActive;
- (void)onResignActive;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)initializeData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

