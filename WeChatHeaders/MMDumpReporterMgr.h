//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMDumpReporterDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface MMDumpReporterMgr : MMObject <MMDumpReporterDelegate>
{
    id <MMDumpReporterDelegate> m_delegate;
    NSMutableArray *m_arrUploadTask;
    NSObject<OS_dispatch_queue> *wxg_dumpReporterQueue;
    BOOL m_bUploading;
}

+ (BOOL)reportDataArrayEmpty:(id)arg1;
+ (BOOL)reportDataEmpty:(id)arg1;
+ (id)shareInstance;
@property BOOL m_bUploading; // @synthesize m_bUploading;
- (void).cxx_destruct;
- (void)onTaskProgress:(float)arg1;
- (void)onTaskUploadResult:(BOOL)arg1 onTag:(id)arg2;
- (void)removeFirstTask;
- (BOOL)addOneTask:(id)arg1;
- (void)uploadLaunchBlockWhenSafeMode;
- (void)uploadDumpOnIPXX:(id)arg1;
- (void)uploadDumpWithDate:(id)arg1 withReprotCntOneTime:(unsigned int)arg2;
- (void)uploadDumpWithDate:(id)arg1;
- (void)uploadAllDump;
- (void)autoUploadDump;
- (void)uploadOneTaskData;
- (BOOL)shouldUpload;
- (void)onEnterBackGround;
- (void)onEnterForgeGround;
- (void)willTerminate;
- (void)p_handleOOMDumpFile;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

