//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INewABTestMgrExt.h"

@class MemoryRecordInfo, MemoryStatConfig, MemoryStatReporter, NSRecursiveLock, NSString;

@interface MemoryStatManager : NSObject <INewABTestMgrExt>
{
    NSString *m_rootDir;
    NSString *m_dataDir;
    NSString *m_configPath;
    NSRecursiveLock *m_lock;
    MemoryStatConfig *m_config;
    MemoryRecordInfo *m_currRecord;
    MemoryRecordInfo *m_lastRecord;
    unsigned int m_userType;
    BOOL m_isStartTracking;
    MemoryStatReporter *m_reporter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)currUsrName;
- (void)checkABTest:(BOOL)arg1;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)doIDKeyReport:(int)arg1 value:(int)arg2;
- (void)handleWillEnterForegroundNotification:(id)arg1;
- (void)handleDidEnterBackgroundNotification:(id)arg1;
- (void)getlastFOOMThreadInfos;
- (void)handleDidBecomeActiveNotification:(id)arg1;
- (void)startTracking;
- (void)saveConfig;
- (BOOL)checkDeviceSatisfied;
- (BOOL)checkDataValid;
- (void)clearUnnecessaryData;
- (void)loadConfig;
- (void)onSignalCrash;
- (void)removeCurrentThread;
- (void)addCurrentThreadToMonitor:(id)arg1;
- (void)uploadReport:(id)arg1;
- (id)recordList;
- (void)removeAllFullReport;
- (void)uploadAllFullReport;
- (BOOL)shouldEnterUploadReport;
- (void)setMemoryStatEnabled:(BOOL)arg1;
- (BOOL)isMemoryStatEnabled;
- (void)setCurrRecordInvalid;
- (void)checkAndRecord;
- (id)init;

@end
