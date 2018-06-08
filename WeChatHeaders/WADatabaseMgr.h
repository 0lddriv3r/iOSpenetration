//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMDBRRepairerExt.h"
#import "MMService.h"

@class NSString, WCTDatabase, WCTTable;

@interface WADatabaseMgr : MMService <MMDBRRepairerExt, MMService>
{
    WCTDatabase *_db;
    WCTTable *_tableWeAppInfo;
    WCTTable *_tableWeAppModuleInfo;
    WCTTable *_tableEncryptWeAppInfo;
    WCTTable *_tablePermissionInfo;
    WCTTable *_tableContact;
    WCTTable *_tableBizAttrSyncBuffer;
    WCTTable *_tableConfigInfo;
    WCTTable *_tableWeAppListItem;
    WCTTable *_tableWeAppStarItem;
    WCTTable *_tableMainFrameTaskItem;
    WCTTable *_tableWeAppUsageInfo;
    WCTTable *_tableContactRemoteVersion;
    WCTTable *_tableWeAppDecryptKeyInfo;
    WCTTable *_tableIssueLaunchPermissionInfo;
    WCTTable *_tableBlockCgiInfo;
    WCTTable *_tablePrefetchSquenceInfo;
}

+ (BOOL)deleteInfoDataWithTable:(id)arg1 where:(const struct WCTExpr *)arg2;
+ (BOOL)insertOrUpdateInfoDataWithTable:(id)arg1 infoData:(id)arg2;
+ (id)getInfoDataWithTable:(id)arg1 primaryKey:(id)arg2;
@property(retain) WCTTable *tablePrefetchSquenceInfo; // @synthesize tablePrefetchSquenceInfo=_tablePrefetchSquenceInfo;
@property(retain) WCTTable *tableBlockCgiInfo; // @synthesize tableBlockCgiInfo=_tableBlockCgiInfo;
@property(retain) WCTTable *tableIssueLaunchPermissionInfo; // @synthesize tableIssueLaunchPermissionInfo=_tableIssueLaunchPermissionInfo;
@property(retain) WCTTable *tableWeAppDecryptKeyInfo; // @synthesize tableWeAppDecryptKeyInfo=_tableWeAppDecryptKeyInfo;
@property(retain) WCTTable *tableContactRemoteVersion; // @synthesize tableContactRemoteVersion=_tableContactRemoteVersion;
@property(retain) WCTTable *tableWeAppUsageInfo; // @synthesize tableWeAppUsageInfo=_tableWeAppUsageInfo;
@property(retain) WCTTable *tableMainFrameTaskItem; // @synthesize tableMainFrameTaskItem=_tableMainFrameTaskItem;
@property(retain) WCTTable *tableWeAppStarItem; // @synthesize tableWeAppStarItem=_tableWeAppStarItem;
@property(retain) WCTTable *tableWeAppListItem; // @synthesize tableWeAppListItem=_tableWeAppListItem;
@property(retain) WCTTable *tableConfigInfo; // @synthesize tableConfigInfo=_tableConfigInfo;
@property(retain) WCTTable *tableBizAttrSyncBuffer; // @synthesize tableBizAttrSyncBuffer=_tableBizAttrSyncBuffer;
@property(retain) WCTTable *tableContact; // @synthesize tableContact=_tableContact;
@property(retain) WCTTable *tablePermissionInfo; // @synthesize tablePermissionInfo=_tablePermissionInfo;
@property(retain) WCTTable *tableEncryptWeAppInfo; // @synthesize tableEncryptWeAppInfo=_tableEncryptWeAppInfo;
@property(retain) WCTTable *tableWeAppModuleInfo; // @synthesize tableWeAppModuleInfo=_tableWeAppModuleInfo;
@property(retain) WCTTable *tableWeAppInfo; // @synthesize tableWeAppInfo=_tableWeAppInfo;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (void)willRepairDB:(unsigned int)arg1 needCatch:(char *)arg2;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)dbPath;
- (void)closeDB;
- (void)openDB;
- (BOOL)deletePrefetchSequenceInfoWithAppID:(id)arg1 cmdType:(unsigned long)arg2;
- (BOOL)insertOrUpdatePrefetchSequenceInfo:(id)arg1;
- (id)getPrefetchSequenceInfoWithAppID:(id)arg1 cmdType:(unsigned long)arg2;
- (id)cmdIdPrimaryKeyWithAppId:(id)arg1 cmdType:(unsigned long)arg2;
- (BOOL)deleteBlockCgiInfoWithAppID:(id)arg1;
- (BOOL)insertOrUpdateBlockCgiInfo:(id)arg1;
- (id)getBlockCgiInfoWithUsername:(id)arg1;
- (id)getBlockCgiInfoWithAppID:(id)arg1;
- (BOOL)deleteDecryptKeyInfoByAppID:(id)arg1 appVersion:(unsigned long long)arg2;
- (BOOL)insertOrUpdateDecryptKeyInfo:(id)arg1;
- (id)getDecryptInfoByAppID:(id)arg1 appVersion:(unsigned long long)arg2;
- (BOOL)deleteContactRemoteVersionByUsername:(id)arg1;
- (BOOL)insertOrUpdateContactRemoteVersion:(id)arg1;
- (id)getContactRemoteVersionByUsername:(id)arg1;
- (BOOL)deleteConfigInfoByAppID:(id)arg1;
- (BOOL)insertOrUpdateConfigInfo:(id)arg1;
- (id)getConfigInfoByAppID:(id)arg1 andType:(unsigned int)arg2;
- (BOOL)deleteIssueLaunchPermissionInfoWithAppID:(id)arg1;
- (BOOL)setIssueLaunchPermissionInfo:(id)arg1;
- (id)getIssueLaunchPermissionInfoWithAppID:(id)arg1;
- (BOOL)deletePermissionInfoWithAppID:(id)arg1;
- (BOOL)setPermissionInfo:(id)arg1;
- (id)getPermissionInfoWithAppID:(id)arg1;
- (BOOL)deleteAppModuleInfoByAppID:(id)arg1 moduleName:(id)arg2;
- (BOOL)deleteAppModuleInfoByAppID:(id)arg1;
- (BOOL)insertOrUpdateAppModuleInfo:(id)arg1;
- (id)getAppModuleInfoByAppID:(id)arg1 moduleName:(id)arg2;
- (id)getAllModuleInfoData;
- (id)appIdPrimaryKeyWithAppId:(id)arg1 moduleName:(id)arg2;
- (BOOL)deleteEncryptAppInfoByAppID:(id)arg1 encryptType:(unsigned int)arg2 version:(unsigned long)arg3;
- (BOOL)insertOrUpdateEncryptAppInfo:(id)arg1;
- (id)getEncryptAppInfoByAppID:(id)arg1 encryptType:(unsigned int)arg2 version:(unsigned long)arg3;
- (id)appIdPrimaryKeyWithAppId:(id)arg1 encryptTypeString:(id)arg2 version:(unsigned long)arg3;
- (id)getAllEncryptInfoData;
- (BOOL)deleteAppInfoByAppID:(id)arg1;
- (BOOL)insertOrUpdateAppInfo:(id)arg1;
- (id)getAppInfoByAppID:(id)arg1;
- (id)getLeastRecentlyUsedInfoDataWithCount:(unsigned long)arg1;
- (id)getAllInfoData;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (BOOL)deleteMainFrameTaskItemBeforeUpdateTime:(unsigned long)arg1;
- (BOOL)deleteMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned long)arg2;
- (BOOL)insertOrUpdateMainFrameTaskItem:(id)arg1;
- (id)getMainFrameTaskItemListWithLimit:(unsigned long)arg1 ignoreUsername:(id)arg2 debugMode:(unsigned long)arg3;
- (id)getMainFrameTaskItemListWithLimit:(unsigned long)arg1;
- (BOOL)deleteAllAppStarItem;
- (BOOL)deleteAppStarItemByUsrName:(id)arg1 appType:(unsigned long)arg2;
- (BOOL)insertAppStarItemList:(id)arg1;
- (BOOL)insertOrUpdateAppStarItem:(id)arg1;
- (id)getAllAppStarItemByUsername:(id)arg1;
- (id)getAppStarItemByUsername:(id)arg1 appType:(unsigned long)arg2;
- (id)getAllAppStarItemOrderByUpdateTime;
- (id)getAllAppStarItem;
- (unsigned long)getAppStartItemCount;
- (BOOL)isItemStared:(id)arg1;
- (BOOL)deleteAllAppListItem;
- (BOOL)deleteAppListItemByUsrName:(id)arg1 appType:(unsigned long)arg2;
- (BOOL)updateAppListItemOnStarState:(id)arg1;
- (BOOL)updateAppListItemOnUpdateTime:(id)arg1;
- (BOOL)insertOrUpdateAppListItem:(id)arg1;
- (id)getCurrentAppListItemByLimit:(int)arg1;
- (id)getAllAppListItemByUsername:(id)arg1;
- (id)getAppListItemByUsername:(id)arg1 appType:(unsigned long)arg2;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned long)arg1 minUpdateTime:(unsigned long)arg2 includeStar:(BOOL)arg3;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned long)arg1 minUpdateTime:(unsigned long)arg2;
- (id)getLatestAppListItemOverUpdateTime:(unsigned long)arg1 includeStar:(BOOL)arg2;
- (id)getLatestAppListItemOverUpdateTime:(unsigned long)arg1;
- (id)getLatestAppListItemWithCount:(unsigned long)arg1 includeStar:(BOOL)arg2;
- (id)getLatestAppListItemWithCount:(unsigned long)arg1;
- (id)getAllAppListItemOrderByUpdateTimeIsIncludeStar:(BOOL)arg1;
- (id)getAllAppListItemOrderByUpdateTime;
- (id)getAllAppListItem;
- (unsigned long)getAppListItemCount;
- (BOOL)mergeAppListItems:(id)arg1 updateTimeOfLastItemAfterMerge:(unsigned int *)arg2;
- (BOOL)mergeAppStarItems:(id)arg1;
- (BOOL)deleteAppUsageInfoBeforeTime:(unsigned long)arg1;
- (BOOL)deleteAppUsageInfoByUsrName:(id)arg1 appType:(unsigned long)arg2;
- (BOOL)insertOrUpdateAppUsageInfo:(id)arg1;
- (id)getUsageInfoWithUsrName:(id)arg1 appType:(unsigned long)arg2;
- (id)getLatestAppUsageInfoListOverLastOpenTime:(unsigned long)arg1 isNeedDebugType:(BOOL)arg2 limit:(unsigned long)arg3;
- (BOOL)clearBizAttrSyncBufferList:(id)arg1;
- (BOOL)setBizAttrSyncBufferList:(id)arg1;
- (id)getBizAttrSyncBuffer:(id)arg1;
- (id)dbContactWithContact:(id)arg1;
- (id)contactFromDBContact:(id)arg1;
- (BOOL)modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (BOOL)modifyWxAppOpt:(id)arg1 bitMask:(unsigned long)arg2 bitValue:(unsigned long)arg3;
- (BOOL)deleteContactList:(id)arg1;
- (BOOL)inserOrUpdateContactList:(id)arg1;
- (id)getAllContact;
- (id)getAllNoFocusContact;
- (id)getAllFocusContact;
- (id)getContactWithAppId:(id)arg1;
- (id)getContact:(id)arg1;
- (id)getContactWithKey:(id)arg1 type:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
