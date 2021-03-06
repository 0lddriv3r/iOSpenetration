//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseControlLogic.h"

#import "VoicePrintHandlerDelegate.h"
#import "WCAccountErrorHandleLogicDelegate.h"
#import "WCPrivacyPolicyControlLogicDelegate.h"

@class NSString, WCAccountControlData, WCAccountErrorHandleLogic, WCPrivacyPolicyControlLogic;

@interface WCAccountBaseControlLogic : WCBaseControlLogic <WCPrivacyPolicyControlLogicDelegate, VoicePrintHandlerDelegate, WCAccountErrorHandleLogicDelegate>
{
    WCAccountControlData *m_data;
    BOOL m_bDisableDataReport;
    WCAccountErrorHandleLogic *m_errorHandleLogic;
    WCPrivacyPolicyControlLogic *_privacyPolicyLogic;
    CDUnknownBlockType privacyPolicyDoneBlock;
    BOOL m_bNeverAutoStop;
}

- (void).cxx_destruct;
- (BOOL)isFromReg;
- (void)delaySetPrivacyPolicyLogicNil;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)showPrivacyPolicyWithCC:(id)arg1 doneBlock:(CDUnknownBlockType)arg2;
- (void)addTopViewController:(id)arg1;
- (void)removeTopViewController;
- (void)disableDataReport;
- (void)reportExitView:(id)arg1;
- (void)reportEnterView:(id)arg1;
- (void)reportOpenMainView:(id)arg1;
- (void)openMainFrame:(BOOL)arg1 showStyle:(id)arg2;
- (void)checkStopLogic;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2 shouldHideNavBar:(BOOL)arg3;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2;
- (BOOL)onHandleError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)vcResignFirstResponder;
- (void)vcBecomeFirstResponder;
- (void)stopLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

