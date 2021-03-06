//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IClearDataMgrExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface MMFICImageCache : MMService <IClearDataMgrExt, MMService>
{
    NSMutableDictionary *_imageTables;
    NSRecursiveLock *_tableLock;
    NSObject<OS_dispatch_queue> *_imageCacheDispatchQueue;
}

- (void).cxx_destruct;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned long)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)executeEntityCreating:(id)arg1 withImage:(id)arg2;
- (void)asyncCreateFICImgForEntity:(id)arg1 withImage:(id)arg2;
- (void)asyncCreateFICImgForEntity:(id)arg1;
- (void)cleanupFICImageInMemoryWithFormat:(id)arg1;
- (void)clearImgTableWithPrefix:(id)arg1;
- (void)reset;
- (void)deleteImageForEntity:(id)arg1;
- (BOOL)imageExistsForEntity:(id)arg1;
- (id)retrieveImageForEntity:(id)arg1 isNeedMemoryCache:(BOOL)arg2;
- (BOOL)addFormatIfNotExist:(id)arg1 imgSize:(struct CGSize)arg2 maxImgCnt:(unsigned int)arg3 version:(unsigned int)arg4;
- (BOOL)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

