//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBizControlLogic.h"

#import "WCRedEnvelopesLogicMgrExt.h"

@class NSString, WCRedEnvelopesControlData;

@interface WCRedEnvelopesControlLogic : WCBizControlLogic <WCRedEnvelopesLogicMgrExt>
{
    WCRedEnvelopesControlData *m_data;
}

- (void).cxx_destruct;
- (void)OnWCRedEnvBizBaseRequestCommonSystemError:(id)arg1 HBCmdType:(int)arg2;
- (void)OnWCRedEnvBizBaseRequestCommonError:(id)arg1 HBCmdType:(int)arg2;
- (void)OnWCRedEnvEnterpriseBaseRequestCommonSystemError:(id)arg1 HBCmdType:(int)arg2;
- (void)OnWCRedEnvEnterpriseBaseRequestCommonError:(id)arg1 HBCmdType:(int)arg2;
- (void)OnWCRedEnvelopesBaseRequestCommonSystemError:(id)arg1 HongbaoCmdType:(int)arg2;
- (void)OnWCRedEnvelopesBaseRequestCommonError:(id)arg1 HongbaoCmdType:(int)arg2;
- (BOOL)onNeedToControlCurrentPublicError;
- (BOOL)onError:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onErrorAlertViewStopLogic:(id)arg1;
- (BOOL)OnCheckDismissCurrentViewControllerAndStopLogicAfterDismiss;
- (BOOL)OnCheckDismissCurrentViewControllerAndStopLogicBeforeDismiss;
- (void)stopLoading;
- (void)startWCPayLoading;
- (void)startLoading;
- (void)stopLogic;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

