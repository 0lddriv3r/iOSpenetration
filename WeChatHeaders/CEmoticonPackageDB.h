//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMDB;

@interface CEmoticonPackageDB : NSObject
{
    CMMDB *m_db;
}

- (void).cxx_destruct;
- (BOOL)addPackageList:(id)arg1;
- (BOOL)removeItemsNotInIDList:(id)arg1;
- (BOOL)clearAllData;
- (BOOL)isEmoticonPackageDownLoaded:(id)arg1;
- (BOOL)isEmoticonPackagePurchased:(id)arg1;
- (BOOL)isEmoticonPackageExist:(id)arg1;
- (BOOL)deleteEmoticonPackageByPid:(id)arg1;
- (id)getEmoticonPackageList;
- (id)getEmoticonPackageByPid:(id)arg1;
- (BOOL)update:(id)arg1 downloadStatus:(unsigned long)arg2;
- (BOOL)update:(id)arg1 payStatus:(unsigned long)arg2;
- (BOOL)addEmoticonPackage:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 payStatus:(unsigned long)arg4 downloadStatus:(unsigned long)arg5;
- (BOOL)IsEmoticonPackageTableExist;
- (void)HardcodePackage;
- (void)tryInitHardcodeEmoticonPackages;
- (id)initWithDB:(id)arg1;

@end
