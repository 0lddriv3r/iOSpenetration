//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface WCTimelineDataProvider : MMObject <PBMessageObserverDelegate>
{
    NSString *fpHash;
    BOOL isWorking;
    unsigned long long uiClientLatestID;
    id <WCDataProviderDelegate> delegate;
}

@property(nonatomic) __weak id <WCDataProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)reportKVStatSightRecieveWithMeidaItem:(id)arg1;
- (void)responseForSnsTimeLineWithTypeResponse:(id)arg1 Event:(unsigned long)arg2;
- (void)forceGetSnsTimeLineOfSightFromServer;
- (void)updateChangedItemsWithReferID:(id)arg1 bottomID:(id)arg2 minChangedTime:(unsigned long)arg3;
- (void)updateWithReferID:(id)arg1 LatestID:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)responseForSnsTimeLineResponse:(id)arg1 Event:(unsigned long)arg2;
- (void)saveResponseListForFutureList:(id)arg1;
- (void)internalSaveResponseListForFutureList:(id)arg1;
- (void)requestForSnsTimeLineRequest:(id)arg1 minID:(id)arg2 lastRequestTime:(unsigned long)arg3;
- (int)getNetworkType;
- (id)convertServerRecList2List:(id)arg1;
- (id)converServerAdList2List:(id)arg1;
- (BOOL)isAdItemReceived:(id)arg1;
- (BOOL)hasExistAdItem:(id)arg1;
- (id)converListToList:(id)arg1;
- (id)convertAdvertiseMsgListToList;
- (void)removeAllCacheAdvertiseMsgXml;
- (id)getCachedAdItemList;
- (id)getAdMsgXmlList;
- (void)meggeObjectOperation:(id)arg1 snsObject:(id)arg2;
- (unsigned long)onServiceCleanMd5;
- (unsigned long)onServiceCleanCache;
- (void)dealloc;
- (void)SafeMD5;
- (id)init;

@end
