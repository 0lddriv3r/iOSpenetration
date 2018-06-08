//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IAPExt.h"
#import "ICdnComMgrExt.h"
#import "IMMLanguageMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "StoreEmotionExchangeEmotionPackCgiDelegate.h"

@class EmoticonStoreSession, NSData, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface EmoticonStoreMgr : MMService <StoreEmotionExchangeEmotionPackCgiDelegate, MMService, PBMessageObserverDelegate, IAPExt, ICdnComMgrExt, IMMLanguageMgrExt>
{
    NSMutableSet *m_requestDetailForPids;
    NSMutableDictionary *m_getListEventIdDic;
    EmoticonStoreSession *m_session;
    NSMutableDictionary *m_skProducts;
    unsigned int m_boughtListEventID;
    NSData *m_broughtBuff;
    NSMutableDictionary *_m_exchangePackCgiDic;
    NSMutableDictionary *_m_waitForExchangePackItemDic;
    NSOperationQueue *_m_installPackageQueue;
}

+ (unsigned int)getIdKeyDownloadFailed;
+ (unsigned int)getIdKeyIdEmoticon;
@property(retain, nonatomic) NSOperationQueue *m_installPackageQueue; // @synthesize m_installPackageQueue=_m_installPackageQueue;
@property(retain, nonatomic) NSMutableDictionary *m_waitForExchangePackItemDic; // @synthesize m_waitForExchangePackItemDic=_m_waitForExchangePackItemDic;
@property(retain, nonatomic) NSMutableDictionary *m_exchangePackCgiDic; // @synthesize m_exchangePackCgiDic=_m_exchangePackCgiDic;
@property(retain, nonatomic) NSMutableDictionary *m_getListEventIdDic; // @synthesize m_getListEventIdDic;
@property(retain, nonatomic) NSMutableSet *m_requestDetailForPids; // @synthesize m_requestDetailForPids;
@property(retain, nonatomic) EmoticonStoreSession *m_session; // @synthesize m_session;
@property(retain, nonatomic) NSData *m_broughtBuff; // @synthesize m_broughtBuff;
@property(retain, nonatomic) NSMutableDictionary *m_skProducts; // @synthesize m_skProducts;
- (void).cxx_destruct;
- (void)onLanguageChange;
- (void)setBoughtListCacheWithItemList:(id)arg1;
- (id)getBoughtListCache;
- (id)pathForBoughtListCache;
- (void)beginPersonalEmotionSession:(unsigned long)arg1 withReqType:(unsigned long)arg2;
- (void)setStoreListCacheWithCache:(id)arg1 withReqType:(unsigned long)arg2;
- (void)setStoreListCacheWithItemList:(id)arg1 Advertisment:(id)arg2 withReqType:(unsigned long)arg3 withTopNum:(unsigned long)arg4;
- (void)setStoreListCacheWithItemList:(id)arg1 Advertisment:(id)arg2 withReqType:(unsigned long)arg3;
- (id)getStoreListCacheWithReqType:(unsigned long)arg1;
- (id)pathForStoreListCacheWithReqType:(unsigned long)arg1;
- (id)rootPathForStoreListCache;
- (void)notifyDownloadErrorWithItem:(id)arg1;
- (id)findEmoticonItemByProductID:(id)arg1;
- (void)updateBoughtListTailFromServer;
- (void)startBoughtListSession;
- (id)updateItemDetailWithProductID:(id)arg1 Scence:(unsigned long)arg2;
- (BOOL)updateTailForSessionScence:(unsigned long)arg1 withReqType:(unsigned long)arg2;
- (id)getStoreAdvertismentForSession:(unsigned long)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onGetBroughtItemList:(id)arg1;
- (unsigned long)getBoughtListFromServer;
- (void)removeItemFromDownloadingQueueByClientID:(id)arg1;
- (void)tryInstallEmoticonPackage:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (id)findDownloadingEmoticonItemByProductID:(id)arg1;
- (id)findDownloadingEmoticonItemByClientDownloadID:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (BOOL)IsCdnEmoticonPackageDownlaodFromClientID:(id)arg1;
- (id)mediaInfoForEmoticonItem:(id)arg1;
- (BOOL)cancelDownloadAndInstallEmoticonItem:(id)arg1;
- (BOOL)reDownloadAndInstallEmoticonItem:(id)arg1 isAutomatic:(BOOL)arg2;
- (BOOL)downloadAndInstallEmoticonItem:(id)arg1;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (BOOL)exchangeEmoticonItemForDownloadUrl:(id)arg1 Scence:(int)arg2 isAutomatic:(BOOL)arg3;
- (void)onRestoreFail;
- (void)onRestoreSuccessForProduct:(id)arg1;
- (void)onPurchaseCancelForProduct:(id)arg1;
- (void)onPurchaseFailForProduct:(id)arg1 Err:(id)arg2;
- (void)onPurchaseSuccessForProduct:(id)arg1 ErrCode:(unsigned long)arg2;
- (int)buyEmoticonItem:(id)arg1;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (void)updateListFromAppleForSKProduct;
- (void)updateItemFromAppleForSKProduct:(id)arg1;
- (BOOL)updateItemProductFromCache:(id)arg1;
- (void)updateItemInSession:(id)arg1;
- (void)OnGetStoreEmoticonItemDetail:(id)arg1;
- (BOOL)GetEmotionDetailWithProductID:(id)arg1 Scence:(unsigned long)arg2;
- (void)OnGetStoreEmoticonList:(id)arg1 withReqType:(unsigned long)arg2;
- (BOOL)checkIsBannerSetValid:(id)arg1;
- (id)updateSKProductForItemList:(id)arg1;
- (BOOL)GetEmotionListFromStore:(unsigned long)arg1 withReqType:(unsigned long)arg2;
- (void)endStoreSession:(unsigned long)arg1;
- (id)beginStoreSessionWithItem:(id)arg1;
- (void)beginStoreSession:(unsigned long)arg1 withReqType:(unsigned long)arg2;
- (id)getBufForReqType:(unsigned long)arg1;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
