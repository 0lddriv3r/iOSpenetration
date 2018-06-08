//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ChatMigrationCreateQRCodeDelegate.h"
#import "MMService.h"
#import "WXGMigrationServerEntryViewControllerDelegate.h"
#import "WXGMigrationServerLogicDelegate.h"

@class ChatMigrationCreateQRCode, NSArray, NSData, NSString, WXGMigrationServerEntryViewController, WXGMigrationServerLogic;

@interface WXGMigrationServerMgr : MMService <ChatMigrationCreateQRCodeDelegate, WXGMigrationServerLogicDelegate, WXGMigrationServerEntryViewControllerDelegate, MMService>
{
    WXGMigrationServerEntryViewController *m_serverEntryViewController;
    id m_kickOutLogicObj;
    SEL m_kickOutSel;
    BOOL m_isWorking;
    WXGMigrationServerLogic *m_serverLogic;
    ChatMigrationCreateQRCode *m_qrCodeHandler;
    unsigned short _server_port;
    NSString *_server_id;
    NSData *_server_key;
    NSString *_server_hello;
    NSString *_server_ok;
    NSString *_server_ip;
    NSString *_server_ticket;
    unsigned long _cryptUin;
    NSArray *_sessionArray;
    NSString *_pcName;
    NSString *_pcAccouttName;
    NSString *_wifiName;
    NSString *_selfWifiName;
    unsigned int _notifyCode;
    unsigned long long _totalMsgCount;
    unsigned long long _totalSessionSize;
}

@property(nonatomic) unsigned int notifyCode; // @synthesize notifyCode=_notifyCode;
@property(retain, nonatomic) NSString *selfWifiName; // @synthesize selfWifiName=_selfWifiName;
@property(retain, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(retain, nonatomic) NSString *pcAccouttName; // @synthesize pcAccouttName=_pcAccouttName;
@property(retain, nonatomic) NSString *pcName; // @synthesize pcName=_pcName;
@property(nonatomic) unsigned long long totalSessionSize; // @synthesize totalSessionSize=_totalSessionSize;
@property(nonatomic) unsigned long long totalMsgCount; // @synthesize totalMsgCount=_totalMsgCount;
@property(retain, nonatomic) NSArray *sessionArray; // @synthesize sessionArray=_sessionArray;
@property(nonatomic) unsigned short server_port; // @synthesize server_port=_server_port;
@property(nonatomic) unsigned long cryptUin; // @synthesize cryptUin=_cryptUin;
@property(retain, nonatomic) NSString *server_ticket; // @synthesize server_ticket=_server_ticket;
@property(retain, nonatomic) NSString *server_ip; // @synthesize server_ip=_server_ip;
@property(retain, nonatomic) NSString *server_ok; // @synthesize server_ok=_server_ok;
@property(retain, nonatomic) NSString *server_hello; // @synthesize server_hello=_server_hello;
@property(retain, nonatomic) NSData *server_key; // @synthesize server_key=_server_key;
@property(retain, nonatomic) NSString *server_id; // @synthesize server_id=_server_id;
- (void).cxx_destruct;
- (void)onGetQRCodeOffline:(id)arg1;
- (void)onGetQRCode:(id)arg1;
- (void)p_getQRCodeImageOffline;
- (void)p_getQRCodeImageOnline;
- (void)getQRCodeImage;
- (void)confirmNoSelectTimeMigrationOrQuickMigration;
- (void)clearServerAllTmpData;
- (BOOL)isServerWorking;
- (void)stopServerService;
- (void)startServerService;
- (void)onServerLogicCurrentTransferSpeed:(float)arg1;
- (void)onServerLogicCurrentProcessingSession:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)onServerLogicAlertCode:(unsigned int)arg1;
- (void)onServerLogicNotifyCode:(unsigned int)arg1;
- (void)onCancelEntryViewController;
- (void)onMinimizeEntryViewController;
- (void)showServerEntryViewController;
- (BOOL)isLogout;
- (void)doLogoutAction;
- (void)registerKickOutEvent:(id)arg1 AndSelector:(SEL)arg2;
- (id)getAllSessionArray;
- (void)resetServerState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

