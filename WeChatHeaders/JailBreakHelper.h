//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMPackageDownloadMgrExt.h"
#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface JailBreakHelper : NSObject <PBCoding, MMPackageDownloadMgrExt>
{
    unsigned long m_hasCheckPuginTimes;
    NSMutableArray *m_checkPaths;
    unsigned long m_lastCheckTime;
}

+ (id)loadSetting;
+ (id)getIAPCheckPath;
+ (id)getJailbreakPath;
+ (id)getJailbreakRootDir;
+ (BOOL)JailBroken;
+ (void)initialize;
@property(nonatomic) unsigned long m_lastCheckTime; // @synthesize m_lastCheckTime;
@property(retain, nonatomic) NSMutableArray *m_checkPaths; // @synthesize m_checkPaths;
@property(nonatomic) unsigned long m_hasCheckPuginTimes; // @synthesize m_hasCheckPuginTimes;
- (void).cxx_destruct;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (BOOL)save;
- (BOOL)HasInstallJailbreakPluginInvalidIAPPurchase;
- (BOOL)isOverADay;
- (BOOL)HasInstallJailbreakPlugin:(id)arg1;
- (BOOL)IsJailBreak;
- (id)getKeyStr;
- (id)init;
- (void)dealloc;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
