//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ChatMigrationGetConnectInfoDelegate.h"
#import "MMService.h"
#import "WCImageFullScreeViewMgrExt.h"
#import "WXGMigrationClientEntryViewControllerDelegate.h"
#import "WXGMigrationClientLogicDelegate.h"
#import "WXGMigrationImportMessageHelperDelegate.h"

@class ChatMigrationGetConnectInfo, NSArray, NSData, NSString, WXGMigrationClientEntryViewController, WXGMigrationClientLogic, WXGMigrationImportMessageHelper;

@interface WXGMigrationClientMgr : MMService <ChatMigrationGetConnectInfoDelegate, WXGMigrationClientLogicDelegate, WXGMigrationClientEntryViewControllerDelegate, WXGMigrationImportMessageHelperDelegate, WCImageFullScreeViewMgrExt, MMService>
{
    BOOL m_isWorking;
    id m_kickOutLogicObj;
    SEL m_kickOutSel;
    WXGMigrationClientEntryViewController *m_clientEntryViewController;
    WXGMigrationClientLogic *m_clientLogic;
    ChatMigrationGetConnectInfo *m_getConnectionInfo;
    WXGMigrationImportMessageHelper *m_migrationImportMessageHelper;
    BOOL m_canShowRescan;
    BOOL m_bNeedReloadBanner;
    unsigned short _server_port;
    NSString *_server_id;
    NSData *_server_key;
    NSString *_server_hello;
    NSString *_server_ok;
    NSString *_server_ip;
    NSArray *_sessionArray;
    NSString *_pcName;
    NSString *_wifiName;
    NSString *_selfWifiName;
    unsigned int _notifyCode;
    unsigned long long _bigDataSize;
    unsigned long long _moreNeedSize;
}

@property(nonatomic) unsigned long long moreNeedSize; // @synthesize moreNeedSize=_moreNeedSize;
@property(nonatomic) unsigned int notifyCode; // @synthesize notifyCode=_notifyCode;
@property(retain, nonatomic) NSString *selfWifiName; // @synthesize selfWifiName=_selfWifiName;
@property(retain, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(retain, nonatomic) NSString *pcName; // @synthesize pcName=_pcName;
@property(nonatomic) unsigned long long bigDataSize; // @synthesize bigDataSize=_bigDataSize;
@property(retain, nonatomic) NSArray *sessionArray; // @synthesize sessionArray=_sessionArray;
@property(nonatomic) unsigned short server_port; // @synthesize server_port=_server_port;
@property(retain, nonatomic) NSString *server_ip; // @synthesize server_ip=_server_ip;
@property(retain, nonatomic) NSString *server_ok; // @synthesize server_ok=_server_ok;
@property(retain, nonatomic) NSString *server_hello; // @synthesize server_hello=_server_hello;
@property(retain, nonatomic) NSData *server_key; // @synthesize server_key=_server_key;
@property(retain, nonatomic) NSString *server_id; // @synthesize server_id=_server_id;
- (void).cxx_destruct;
- (id)getConnectDebugInfo;
- (void)onMigrationImportMessageCurrentSession:(unsigned int)arg1 totalSession:(unsigned int)arg2;
- (void)onMigrationImportMessageCurrentCount:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (void)onMigrationImportMessageFinish;
- (void)onMigrationImportSucessPrepare;
- (void)onMigrationImportMessageError;
- (void)onMigrationStartOldVersionImportMessage;
- (void)onMigrationStartImportMessage;
- (BOOL)isSameAccount:(id)arg1;
- (void)onClientLogicCurrentTransferSpeed:(float)arg1;
- (void)onClientProcessCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientProcessCurrentCount:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (void)onClientFirstPacketOK:(BOOL)arg1;
- (void)onClientLogicNotifyCode:(unsigned int)arg1;
- (void)onClientLogicAlertCode:(unsigned int)arg1;
- (void)onGetConnectInfo:(id)arg1;
- (void)onGetConnectInfoNotSameAccount;
- (void)onCancelEntryViewController;
- (void)onMinimizeEntryViewController;
- (void)onViewAnimationDidHiden;
- (void)onViewAnimationWillHide;
- (void)reloadBanner;
- (BOOL)canShowRescanButton;
- (void)showClientEntryViewController;
- (BOOL)isLogout;
- (void)doLogoutAction;
- (void)registerKickOutEvent:(id)arg1 AndSelector:(SEL)arg2;
- (void)clearClientTmpData;
- (BOOL)isClientRestart;
- (void)onMigrationAllData;
- (void)onMigrationNewImport;
- (void)cancelImport;
- (void)stopImport;
- (void)startImport;
- (BOOL)isOnHotspot;
- (BOOL)isClinetHasDutyAndShowClientEntryViewController;
- (BOOL)isClientWorking;
- (void)terminateClientService;
- (void)stopClientService;
- (void)startClientService;
- (void)getInfoURLFromScanQRCode:(id)arg1;
- (void)createPath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

