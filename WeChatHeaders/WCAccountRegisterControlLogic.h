//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IAddressBookMgrExt.h"
#import "IRsaCertMgrExt.h"
#import "WCAccountGraphicVerifyViewControllerDelegate.h"
#import "WCAccountRegisterViewControllerDelegate.h"

@class NSMutableSet, NSString;

@interface WCAccountRegisterControlLogic : WCAccountBaseControlLogic <IAddressBookMgrExt, WCAccountRegisterViewControllerDelegate, WCAccountGraphicVerifyViewControllerDelegate, IRsaCertMgrExt>
{
    NSMutableSet *m_suggestAlias;
    BOOL m_bCanSyncAddressBook;
    unsigned long m_idc_redirect_count;
    unsigned long m_mmtls_set_count;
    unsigned long m_getSuggestAlias_EventID;
    unsigned long long m_ui64BeginTime;
}

- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)handleRespForSuggestAlias:(id)arg1;
- (void)handleNewRegResponse:(id)arg1;
- (void)onEnableAddressBookTip;
- (void)showDeniedTip;
- (void)showEnableTip;
- (void)enableAddressBook;
- (void)jumpToMainFrame;
- (void)OnConfirmAddressBookStatus:(unsigned long)arg1;
- (void)onGraphicVerifyChangeImage;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyWithVerifyCode:(id)arg1;
- (void)onGetSuggestAlias:(id)arg1 alias:(id)arg2;
- (void)onRegNickNameReg:(id)arg1 alias:(id)arg2 headImage:(id)arg3;
- (void)onRegNickNameBack;
- (void)getSuggestAlias;
- (BOOL)regAccount;
- (id)genNewRegRequest;
- (id)getBindName;
- (void)startLogic;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

