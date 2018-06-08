//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IWCLabsLogicExt.h"
#import "MMService.h"

@class NSMutableArray, NSMutableDictionary, NSString, WCLabsCommonInfo;

@interface WCLabsMgr : MMService <IWCLabsLogicExt, MMService>
{
    NSMutableDictionary *_labsAppItemDic;
    NSMutableArray *_onlineLabsItems;
    NSMutableArray *_offlineLabItems;
    WCLabsCommonInfo *_labsCommonInfo;
    NSMutableArray *_clearedRedDotLabsAppidAryInLab;
    NSMutableArray *_clearedRedDotLabsAppidAryInAppEntrance;
}

- (void).cxx_destruct;
- (void)onGetABTestExpLabsItems:(id)arg1 expiredExpids:(id)arg2 isAutoGet:(BOOL)arg3;
- (void)getABTestItemsForRequest:(id)arg1;
- (id)getExpItemsArray;
- (void)updateOnlineOffLineLabItems;
- (void)tryMarkClearNewRedDotInWechatLabEntrance;
- (BOOL)shouldShowNewRedDotInWechatLabEntrance;
- (void)tryMarkClearRedDotInWechatLabsCellWithAppid:(id)arg1;
- (BOOL)shouldShowRedDotInWechatLabsCellWithAppid:(id)arg1;
- (BOOL)shouldShowRedDotInWechatLabEntrance;
- (void)markShowLabsTip;
- (void)saveLabsAppItemDic;
- (id)getOfflineLabItems;
- (id)getOnlineLabsItems;
- (BOOL)shouldShowWCLabEntrance;
- (void)updateLabAppEntranceWithAppid:(id)arg1 switchValue:(BOOL)arg2 sync:(BOOL)arg3;
- (void)markLabAppClickWithAppid:(id)arg1;
- (BOOL)shouldShowRedDotWithLabAppid:(id)arg1;
- (BOOL)shouldShowEntranceWithLabAppid:(id)arg1;
- (BOOL)isExpRunningWithLabAppid:(id)arg1;
- (void)loadData;
- (void)clearAllData;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

