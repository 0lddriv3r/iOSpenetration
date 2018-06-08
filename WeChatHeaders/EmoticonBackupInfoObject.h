//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface EmoticonBackupInfoObject : MMObject <PBCoding>
{
    BOOL m_hasBatchBackup;
    NSMutableArray *m_needUploadMd5List;
}

+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (id)Instance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *m_needUploadMd5List; // @synthesize m_needUploadMd5List;
@property(nonatomic) BOOL m_hasBatchBackup; // @synthesize m_hasBatchBackup;
- (void).cxx_destruct;
- (void)saveToFile;
- (void)setNoNeedUploadMd5:(id)arg1;
- (void)setAllMd5NeedUpload;
- (id)getNeedUploadMd5;
- (void)removeMd5:(id)arg1;
- (void)addNeedUploadMd5List:(id)arg1;
- (id)init;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
