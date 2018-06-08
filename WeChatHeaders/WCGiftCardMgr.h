//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IClearDataMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSString, WCCardCDNDownloadHelper;

@interface WCGiftCardMgr : MMService <PBMessageObserverDelegate, IClearDataMgrExt, MMService>
{
    NSMutableDictionary *_successDic;
    NSMutableDictionary *_failureDic;
    WCCardCDNDownloadHelper *_helper;
}

@property(retain, nonatomic) WCCardCDNDownloadHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) NSMutableDictionary *failureDic; // @synthesize failureDic=_failureDic;
@property(retain, nonatomic) NSMutableDictionary *successDic; // @synthesize successDic=_successDic;
- (void).cxx_destruct;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (id)handleGiftCard:(id)arg1;
- (id)handleAccept:(id)arg1;
- (id)handlePreAccept:(id)arg1;
- (id)sourceTempPath;
- (id)sourceLocalPath;
- (id)giftFileTempPathByFileName:(id)arg1;
- (id)giftFilePathByFileName:(id)arg1;
- (void)uploadKVByType:(int)arg1 orderId:(id)arg2 BizUin:(unsigned long)arg3 giftUserName:(id)arg4;
- (void)getPicbyUrl:(id)arg1 aeskey:(id)arg2 length:(unsigned int)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getVideoByUrl:(id)arg1 aesKey:(id)arg2 length:(unsigned int)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)cancelAllGiftCardCgi;
- (void)getGiftCardWithBizUin:(unsigned long)arg1 orderId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)acceptGiftCardWithBizUin:(unsigned long)arg1 orderId:(id)arg2 chatroomName:(id)arg3 doNotAccept:(BOOL)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)preAcceptGiftCardWithBizUin:(unsigned long)arg1 orderId:(id)arg2 chatroomName:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

