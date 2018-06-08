//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class AppIconItem, NSMutableArray, NSMutableDictionary, NSString, RecommendAppsLogicImpl, ServiceAppsLogicImpl;

@interface AppDataMgr : MMService <MMService, PBMessageObserverDelegate, MMKernelExt>
{
    BOOL _appDataChecked;
    BOOL _appSettingLoaded;
    NSMutableDictionary *_appSettingMap;
    NSMutableArray *_aryAuthApp;
    BOOL _aryAuthAppLoaded;
    NSMutableArray *_aryAppPersonalInfo;
    BOOL _aryAppPersonalInfoLoader;
    BOOL _appResisterInfoLoaded;
    BOOL _newAppStatus;
    NSMutableArray *_aryInstalledApp;
    NSMutableArray *_aryReceivedApp;
    NSMutableArray *_aryBuiltInApp;
    RecommendAppsLogicImpl *_rcmAppsLogicImpl;
    ServiceAppsLogicImpl *_svcAppsLogicImpl;
    NSMutableArray *_getAppInfoRunningQueue;
    NSMutableArray *_getAppInfoWaitingQueue;
    BOOL _bGetAppInfoListRunning;
    AppIconItem *_updateAppIconRunningItem;
    NSMutableArray *_updateAppIconWaitingQueue;
    BOOL _bUpdateAppIconRunning;
    BOOL _hasMoveFinished;
    NSMutableDictionary *_dictInnerJumpAppIdType;
    NSMutableDictionary *_dictInnerJumpTypeAppId;
}

@property(retain, nonatomic) NSMutableDictionary *appSettingMap; // @synthesize appSettingMap=_appSettingMap;
- (void).cxx_destruct;
- (void)onServiceReloadData;
- (void)onPreQuit;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)structCGI:(id)arg1 withType:(unsigned long)arg2;
- (void)updateAppSettingItemList:(id)arg1;
- (BOOL)makeUrlRequst:(id)arg1 userData:(id)arg2 cdn:(BOOL)arg3;
- (void)handleGetWatermark:(id)arg1;
- (void)handleGetIcon:(id)arg1;
- (void)handleGetAppInfoList:(id)arg1;
- (id)updateValue:(id)arg1 newValue:(id)arg2;
- (BOOL)updateAppWatermark:(id)arg1;
- (BOOL)updateAppIcon:(id)arg1;
- (void)updateAppInfo:(id)arg1;
- (id)getInstalledAppInfo:(id)arg1;
- (BOOL)checkAndSaveIcon:(id)arg1 appID:(id)arg2;
- (BOOL)checkRegisterInfo:(id)arg1;
- (void)refreshAppInfoLastUpdateTimeForNewUser;
- (BOOL)loadAppRegisterInfo;
- (void)trimAppRegisterInfo:(id)arg1;
- (void)saveAppRegisterInfo;
- (id)getRegisterDictionary;
- (id)dictionaryToAppRegisterInfo:(id)arg1;
- (id)getRegisterPasteboardName;
- (id)GetPathOfAppWatermark:(id)arg1;
- (id)GetPathOfAppIcon:(id)arg1;
- (BOOL)setSDKVersion;
- (void)saveAppPersonalInfo;
- (BOOL)loadAppPersonalInfo;
- (void)saveAuthAppInfo;
- (BOOL)loadAuthAppInfo;
- (id)getPersonalInfoWithAppID:(id)arg1;
- (void)handleGetAppPersonalInfoList:(id)arg1;
- (void)handleGetAuthAppList:(id)arg1;
- (id)getAuthAppList;
- (void)filterUnInstalledApp;
- (BOOL)UpdateAuthAppList:(int)arg1;
- (BOOL)removeAppByUser:(id)arg1;
- (BOOL)addAppByUser:(id)arg1;
- (BOOL)addNeedUpdateAppId:(id)arg1;
- (void)addInstalledAppList:(id)arg1;
- (BOOL)forceUpdateBizAppInfo:(id)arg1;
- (void)forceUpdateBizAppInfoWithAppIDList:(id)arg1;
- (void)forceUpdateAppInfo:(id)arg1;
- (BOOL)updateAppInfo:(id)arg1 appInfoVer:(unsigned long)arg2;
- (void)clearGetAppInfoListRunningQueue;
- (void)checkGetAppInfoListWaitingQueue;
- (void)addGetAppInfoListQueue:(id)arg1;
- (BOOL)checkUpdateAppIconWaitingQueue;
- (BOOL)addUpdateAppIconQueue:(id)arg1 appID:(id)arg2 cmd:(id)arg3;
- (void)updateAppTypeList:(id)arg1 appTypeList:(id)arg2;
- (void)updateBizAppInfoWithGameCenter;
- (void)updateBizAppInfoWithAddByUser;
- (id)getAppRegisterInfo:(id)arg1;
- (id)mergeBuiltInAppInfo:(id)arg1;
- (id)mergeValue:(id)arg1 newValue:(id)arg2;
- (BOOL)compareAppID:(id)arg1 withOtherAppID:(id)arg2;
- (id)getAppWatermark:(id)arg1;
- (id)getServiceAppIcon:(id)arg1 IconUrl:(id)arg2;
- (id)getRecommendAppIcon:(id)arg1 IconUrl:(id)arg2;
- (id)getAppIconRetNilIfNotExist:(id)arg1;
- (id)getAppIcon:(id)arg1;
- (BOOL)receiveAppInfoFromMsg:(id)arg1 name:(id)arg2 version:(int)arg3 isForceUpdate:(BOOL)arg4;
- (id)getShowGameCenterArray;
- (id)getGameInstalledArray;
- (BOOL)deleteUninstalledGameApp:(id)arg1;
- (BOOL)deleteUninstalledAppByAppID:(id)arg1;
- (BOOL)isAppInstalledPossibly:(id)arg1;
- (id)getAppInstalledArray;
- (void)setServiceAppNotShowNew:(id)arg1;
- (id)getAttachmentViewServiceAppsList:(id)arg1;
- (id)getServiceAppArray:(id)arg1;
- (void)clearRecommentAppArray;
- (void)setRecommendAppNotShowNew:(id)arg1;
- (void)updateRecommendAppArray;
- (id)getRecommendAppArray;
- (id)getGeneralAppInstalledArray;
- (void)addInstalledAppInfoByAppID:(id)arg1 appName:(id)arg2 appIconUrl:(id)arg3;
- (void)addAppByUserMoveToAppSetting;
- (BOOL)isAppDataChecked;
- (BOOL)checkAndUpdateAppData;
- (BOOL)checkAndUpdateAppDataForiOS7Plus:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)saveAppSetting;
- (BOOL)loadAppSetting;
- (void)handleSetAppSetting:(id)arg1;
- (void)handleGetAppSetting:(id)arg1;
- (BOOL)SetAppSetting:(id)arg1 setCmdID:(int)arg2 setCmdValue:(id)arg3;
- (BOOL)UpdateAppPersonalInfoList:(id)arg1;
- (BOOL)UpdateBatchAppSettingItem:(id)arg1;
- (void)onAuthOK;
- (void)doUpdateAppSettingItem;
- (BOOL)isWeSportApp:(id)arg1;
- (void)setAppSettingFlag:(unsigned long)arg1 withAppID:(id)arg2;
- (void)UpdateAppRecvMsgState:(id)arg1 isRecvMsg:(BOOL)arg2;
- (void)UpdateAppAuthState:(id)arg1 isAuth:(BOOL)arg2;
- (BOOL)UpdateAppSettingItem:(id)arg1;
- (void)updateAppAddedByUser:(id)arg1:(BOOL)arg2;
- (void)updateAppSettingFlag:(id)arg1;
- (BOOL)isGeneralApp:(id)arg1;
- (BOOL)isGame:(id)arg1;
- (BOOL)isNeedDetectRequetURL:(id)arg1;
- (BOOL)isCanForward:(id)arg1;
- (BOOL)isAppAddedByUser:(id)arg1;
- (id)getOpenID:(id)arg1;
- (BOOL)isOpenIDExist:(id)arg1;
- (BOOL)isRecvMsg:(id)arg1;
- (BOOL)isAppSettingExist:(id)arg1;
- (void)loadNewAppStatus;
- (void)saveNewAppStatus;
- (void)setNewAppStatus:(BOOL)arg1;
- (BOOL)getNewAppStatus;
- (BOOL)writeToFile:(id)arg1 data:(id)arg2;
- (void)mergeBuiltInAppList;
- (void)setShowInShareListSeq:(unsigned long)arg1 withAppID:(id)arg2 andType:(unsigned long long)arg3;
- (void)setIsShowInShareList:(BOOL)arg1 withAppID:(id)arg2;
- (void)save3rdAppSupportContentType:(unsigned long long)arg1 withAppID:(id)arg2;
- (void)convertShareTypeToOpenSDKType:(unsigned long long)arg1 ToOpenSDKType:(int *)arg2;
- (id)getShareTo3rdSortedAppInfo:(BOOL)arg1 andType:(unsigned long long)arg2;
- (id)keyForDicShowInShareListSeqByType:(unsigned long long)arg1;
- (unsigned long long)getFlagByMessageWrap:(id)arg1;
- (id)getAppIdWithFuncType:(int)arg1;
- (int)getFuncTypeWithAppId:(id)arg1;
- (void)initInnerJumpDict;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

