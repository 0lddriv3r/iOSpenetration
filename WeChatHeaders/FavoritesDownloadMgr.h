//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "CNetworkStatusExt.h"
#import "FavoritesDownloaderDelegate.h"

@class FavDataItemWrap, FavoritesDownloadCDNInfoDB, FavoritesDownloader, FavoritesItemDB, NSMutableArray, NSString;

@interface FavoritesDownloadMgr : MMObject <CNetworkStatusExt, FavoritesDownloaderDelegate>
{
    NSMutableArray *_downloadingQueue;
    NSMutableArray *_failQueue;
    NSMutableArray *_activeQueue;
    FavDataItemWrap *_priorDataWrap;
    BOOL _isDownloading;
    FavoritesItemDB *_favItemDB;
    FavoritesDownloadCDNInfoDB *_favCdnDB;
    FavoritesDownloader *_favDownloader;
    id <FavoritesDownloadMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <FavoritesDownloadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned long)arg1;
- (void)checkWrongFileTypeError:(long)arg1 localDataId:(id)arg2 withDataList:(id)arg3;
- (void)onDownloadFavItemFail:(id)arg1 LocalDataId:(id)arg2 errCode:(long)arg3;
- (void)onDownloadFavItemSuccess:(id)arg1 LocalDataId:(id)arg2;
- (void)onDownloadFavItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(long)arg3 TotalLength:(long)arg4;
- (void)onDownloadFail:(id)arg1 ErrCode:(int)arg2;
- (BOOL)checkHasAsyncUploadingDataWithDataList:(id)arg1;
- (void)onDownloadFinished:(id)arg1;
- (id)getDownloadPausedItemList;
- (id)getDownloadingItemList;
- (void)changeToNoWifi;
- (BOOL)startDownloadDataWrapPrior:(id)arg1;
- (void)stopDownloadAllFavItem;
- (BOOL)pauseDownloadFavoritesItem:(id)arg1;
- (BOOL)startDownloadItem:(id)arg1 IsPriority:(BOOL)arg2;
- (BOOL)deleteDownloadCdnInfoByFavoritesItemFavCheckId:(id)arg1;
- (BOOL)updateDownloadCdnInfo:(id)arg1;
- (void)TryStartDownload;
- (void)checkAndTryStartDownload;
- (id)getNextDownloadCdnInfoByFavCheckId:(id)arg1 withLocalId:(unsigned long)arg2 withDataList:(id)arg3;
- (id)getNextDownloadCdnInfoByFavCheckId:(id)arg1;
- (void)setItemDownloadFail:(id)arg1 ErrCode:(int)arg2;
- (BOOL)delDownloadItem:(id)arg1;
- (BOOL)addDownloadItem:(id)arg1 withDataList:(id)arg2;
- (BOOL)addDownloadItem:(id)arg1;
- (BOOL)loadFailedQueue;
- (BOOL)loadDownloadingQueue;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

