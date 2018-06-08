//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"
#import "WCTColumnCoding.h"

@class NSMutableArray, NSString;

@interface WePkgRegularConfigExt : MMObject <PBCoding, WCTColumnCoding>
{
    NSString *currentEnabledVersion;
    NSString *currentPkgMd5;
    unsigned long lastUnusedSeconds;
    unsigned long checkIntervalSeconds;
    unsigned long lastUsedTimestamp;
    NSString *checkResponseMd5;
    NSString *downloadUrl;
    unsigned long downloadNetworkType;
    unsigned long pkgSizeInBytes;
    NSString *charSet;
    NSMutableArray *atomicSingleFileList;
    NSMutableArray *nonAtomicSingleFileList;
    unsigned long checkUpdateSuccessTime;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long checkUpdateSuccessTime; // @synthesize checkUpdateSuccessTime;
@property(retain, nonatomic) NSMutableArray *nonAtomicSingleFileList; // @synthesize nonAtomicSingleFileList;
@property(retain, nonatomic) NSMutableArray *atomicSingleFileList; // @synthesize atomicSingleFileList;
@property(retain, nonatomic) NSString *charSet; // @synthesize charSet;
@property(nonatomic) unsigned long pkgSizeInBytes; // @synthesize pkgSizeInBytes;
@property(nonatomic) unsigned long downloadNetworkType; // @synthesize downloadNetworkType;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl;
@property(retain, nonatomic) NSString *checkResponseMd5; // @synthesize checkResponseMd5;
@property(nonatomic) unsigned long lastUsedTimestamp; // @synthesize lastUsedTimestamp;
@property(nonatomic) unsigned long checkIntervalSeconds; // @synthesize checkIntervalSeconds;
@property(nonatomic) unsigned long lastUnusedSeconds; // @synthesize lastUnusedSeconds;
@property(retain, nonatomic) NSString *currentPkgMd5; // @synthesize currentPkgMd5;
@property(retain, nonatomic) NSString *currentEnabledVersion; // @synthesize currentEnabledVersion;
- (void).cxx_destruct;
- (id)archivedWCTValue;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

