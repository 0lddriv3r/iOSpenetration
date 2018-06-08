//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMKernelExt.h"
#import "MMPackageDownloadMgrExt.h"
#import "MMResourceMgrExt.h"

@class NSDictionary, NSMutableDictionary, NSString, Package;

@interface MMPerformanceDataReportMgr : NSObject <MMResourceMgrExt, MMPackageDownloadMgrExt, MMKernelExt>
{
    NSMutableDictionary *m_dicCostTimeItems;
    NSMutableDictionary *m_dicCostMemoryItems;
    NSDictionary *m_dicCostTimeReportIdKey;
    NSDictionary *m_dicCostMemoryReportIdKey;
    Package *m_packageDownload;
    unsigned int m_uAllTotalCostTimeKey;
    unsigned int m_uAllTotalCountKey;
    NSString *m_nsAllDes;
    unsigned int m_uDeviceTotalCostTimeKey;
    unsigned int m_uDeviceTotalCountKey;
    NSString *m_nsDeviceDes;
    BOOL m_bActive;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)onResUpdateFinish:(int)arg1 resType:(unsigned long)arg2 subResType:(unsigned long)arg3;
- (id)getIdKeyContent;
- (void)loadIdKeyInfo;
- (void)getKeyInfo:(struct XmlReaderNode_t *)arg1;
- (id)getReportIdKeyEx:(struct XmlReaderNode_t *)arg1;
- (void)reportCostData:(unsigned int)arg1 ToIdKey:(unsigned int)arg2 ToMainKey:(unsigned int)arg3 ToKeyRange:(id)arg4 ToRange:(id)arg5;
- (void)reportCostData:(unsigned int)arg1 ToIdKey:(unsigned int)arg2 ToKeyRange:(id)arg3 ToRange:(id)arg4;
- (void)reportCostData:(unsigned int)arg1 ToCaseId:(unsigned int)arg2;
- (void)reportCostMemoryToIdKey:(unsigned int)arg1 caseID:(unsigned int)arg2;
- (void)reportCostTimeToIdKey:(unsigned int)arg1 caseID:(unsigned int)arg2;
- (void)reportCostMemoryOnKey:(id)arg1;
- (void)reportCostTimeOnKey:(id)arg1;
- (void)setCurrentMemoryOnCase:(unsigned int)arg1 withTag:(id)arg2;
- (void)setCurrentTimeOnCase:(unsigned int)arg1 withTag:(id)arg2;
- (void)endLogPerformanceData:(unsigned int)arg1 onCase:(unsigned int)arg2 withTag:(id)arg3;
- (void)startLogPerformanceData:(unsigned int)arg1 onCase:(unsigned int)arg2 withTag:(id)arg3;
- (void)dealloc;
- (void)registerExtension;
- (void)start;
- (void)stop;
- (void)didBecomeActive;
- (void)willSuspend;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

