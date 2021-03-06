//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMMDumpReporterMgrExt.h"
#import "MMResourceMgrExt.h"
#import "WCUpdateMgrExt.h"

@class MMSafeModeReport, NSDictionary, NSMutableArray, NSString;

@interface MMSafeModeMgr : NSObject <MMResourceMgrExt, WCUpdateMgrExt, IMMDumpReporterMgrExt>
{
    NSString *m_crashUsrName;
    NSMutableArray *m_localUsrNameMd5List;
    NSDictionary *m_serverConfig;
    NSMutableArray *m_deleteListFromLocalConfig;
    NSMutableArray *m_uploadListFromLocalConfig;
    NSMutableArray *m_deleteListFromServerConfig;
    NSMutableArray *m_uploadListFromServerConfig;
    BOOL m_hasBackup;
    BOOL m_isUploadTimeout;
    int m_continuousCrashCount;
    unsigned int m_safeModeScene;
    MMSafeModeReport *m_safeModeReport;
    struct MMSMUploadFileObserver *m_observer;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)uploadFileZipName;
- (id)uploadFileTempPath;
- (id)libraryUserPaths;
- (id)libraryPath;
- (id)documentsUserPaths;
- (id)documentsPath;
- (id)rootPath;
- (int)uploadLogsDaysFromConfigs;
- (id)transformPath:(id)arg1;
- (id)uploadListFromConfigs;
- (id)deleteListFromConfigs;
- (void)initDeleteAndUploadListFromServerConfig;
- (void)initDeleteAndUploadListFromLocalConfig;
- (BOOL)isServerConfigValid;
- (void)setCrashUsrName:(id)arg1;
- (void)onResUpdateFinish:(int)arg1 resType:(unsigned long)arg2 subResType:(unsigned long)arg3;
- (void)updateSafeModeConfig;
- (void)onPatchCodeUpdateFinish:(unsigned int)arg1;
- (void)updatePatchConfig;
- (void)onUploadResult:(BOOL)arg1;
- (void)onLagReportFinished;
- (void)doLagReport;
- (void)onCrashReportFinished;
- (void)doCrashReport;
- (void)reportDataWithKey:(int)arg1 value:(int)arg2;
- (void)onSingalCrash:(struct __siginfo *)arg1;
- (void)handleResignActiveNotification;
- (void)clearAllFlags;
- (void)backupLogsFromConfigs;
- (void)backupFilesInUploadList;
- (void)uploadLogsAndSpecialFiles;
- (long long)getUploadFilesSize;
- (id)currentUploadFiles;
- (void)clearUnnecessaryFiles;
- (void)updateServerConfig;
- (void)notifyReportAndUpdateConfigFinished;
- (void)onReportAndUpdateConfigTimeout;
- (void)doReportAndUpdateConfig;
- (void)doSafeModeSceneIDKeyReport;
- (void)didEnterWeChat;
- (unsigned int)safeModeScene;
- (BOOL)shouldEnterSafeMode;
- (void)initCrashUsrName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

