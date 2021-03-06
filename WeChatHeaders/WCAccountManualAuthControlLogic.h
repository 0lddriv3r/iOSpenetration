//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IRsaCertMgrExt.h"
#import "MMWebViewDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "WCAccountGraphicVerifyControlLogicDelegate.h"
#import "WCAccountSafeDeviceControlLogicDelegate.h"
#import "WCAccountVoice2ndVerifyControlLogicDelegate.h"

@class NSString, UnifyAuthResponse, WCAccountGraphicVerifyControlLogic, WCAccountSafeDeviceControlLogic, WCAccountVoice2ndVerifyControlLogic;

@interface WCAccountManualAuthControlLogic : WCAccountBaseControlLogic <WCAccountGraphicVerifyControlLogicDelegate, WCAccountSafeDeviceControlLogicDelegate, WCAccountVoice2ndVerifyControlLogicDelegate, MMWebViewDelegate, PBMessageObserverDelegate, IRsaCertMgrExt>
{
    WCAccountSafeDeviceControlLogic *m_safeDeviceLogic;
    WCAccountGraphicVerifyControlLogic *m_graphicVerifyLogic;
    WCAccountVoice2ndVerifyControlLogic *m_voice2ndVerifyLogic;
    id <WCAccountManualAuthControlLogicDelegate> m_delegate;
    unsigned long m_ecdh_error_count;
    unsigned long m_cert_error_count;
    unsigned long m_idc_redirect_count;
    unsigned long m_mmtls_set_count;
    BOOL m_bFromAutoAuth;
    BOOL m_bSessionKeyNeedECDHDecrypt;
    BOOL m_bStopCloseAcct;
    unsigned long long m_ui64BeginTime;
    UnifyAuthResponse *_cacheResponse;
    BOOL m_bDontFillWTBuf;
    unsigned long m_uiCGIScene;
}

@property(nonatomic) BOOL m_bDontFillWTBuf; // @synthesize m_bDontFillWTBuf;
@property(nonatomic) unsigned long m_uiCGIScene; // @synthesize m_uiCGIScene;
- (void).cxx_destruct;
- (BOOL)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (BOOL)onErrorHandleLogicDone;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)handleAuthResponse:(id)arg1;
- (void)onStopCloseAcct;
- (void)onStopLogic;
- (void)OnRsaCertFail;
- (void)OnRsaCertCGIAgain;
- (void)onVoice2ndVerifyControlLogicReturnOK;
- (void)onVoice2ndVerifyControlLogicCancel;
- (void)onSafeDeviceControlLogicReturnOK;
- (void)onSafeDeviceControlLogicCancel;
- (void)onGraphicVerifyControlLogicReturn:(id)arg1;
- (id)onGraphicVerifyControlLogicGetAuthRequest:(BOOL)arg1;
- (void)onGraphicVerifyControlLogicCancel;
- (void)startLogicFromAutoAuth;
- (void)startLogic;
- (id)genManualAuthRequest;
- (id)genManualAuthRequest:(BOOL)arg1;
- (BOOL)startManualAuth:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

