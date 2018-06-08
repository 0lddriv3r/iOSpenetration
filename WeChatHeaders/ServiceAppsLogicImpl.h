//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"
#import "WCPayLogicMgrExt.h"
#import "WCPayWalletChangeExt.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface ServiceAppsLogicImpl : MMObject <WCPayLogicMgrExt, WCPayWalletChangeExt, PBMessageObserverDelegate>
{
    NSArray *_serviceAppsList;
    NSMutableArray *_tempList;
    BOOL _isUpdating;
    BOOL _isGettingIcon;
    NSMutableDictionary *_updateIconDic;
    unsigned long _lastUpdateTime;
    NSMutableArray *_validJumpUrlList;
}

- (void).cxx_destruct;
- (void)onWCPayWalletChange;
- (void)OnSetUserWallet:(id)arg1;
- (void)loadData;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)handleGetAppIconRsp:(id)arg1;
- (void)handleNotShowNewLogic;
- (void)handleUpdateServiceAppsListWithOffsetResp:(id)arg1;
- (void)addNewItemToUpdateIconDicAndStartUpdate;
- (BOOL)makeUrlRequest:(id)arg1 userData:(id)arg2;
- (void)getAppIcon:(id)arg1 appID:(id)arg2;
- (void)checkAndUpdateAppIcon;
- (void)setServiceAppNotShowNew:(id)arg1;
- (id)GetPathOfServiceAppIcon:(id)arg1 IconUrl:(id)arg2;
- (void)saveServiceAppsList;
- (void)loadServiceAppsListFromFile;
- (id)getAppInfoDataRootDir;
- (BOOL)updateServiceAppsListWithOffset:(unsigned long)arg1;
- (BOOL)updateServiceAppsList;
- (id)getAttachmentViewServiceAppsList:(id)arg1;
- (id)getServiceAppsList:(id)arg1;
- (BOOL)IsServiceAppDataValid:(id)arg1;
- (BOOL)NativeUrlIsValid:(id)arg1;
- (void)InitValidJumpUrl;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
