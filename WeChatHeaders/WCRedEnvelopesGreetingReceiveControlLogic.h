//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "WCBaseControlLogicDeleagte.h"
#import "WCBaseControlMgrExt.h"
#import "WCRedEnvelopes2016GreetingViewControllerDelegate.h"
#import "WCRedEnvelopesEnterpriseDetailViewControllerDelegate.h"
#import "WCRedEnvelopesMultiSelectContactsViewControllerDelegate.h"
#import "WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate.h"
#import "WCRedEnvelopesSessionSelectViewControllerDelegate.h"

@class NSString, WCRedEnvelopes2016GreetingViewController;

@interface WCRedEnvelopesGreetingReceiveControlLogic : WCRedEnvelopesControlLogic <WCRedEnvelopes2016GreetingViewControllerDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, WCRedEnvelopesEnterpriseDetailViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate>
{
    int m_scene;
    BOOL m_bDidStopCoinAnimation;
    BOOL m_bDidCompleteOpen;
    WCRedEnvelopes2016GreetingViewController *senderView;
    WCRedEnvelopes2016GreetingViewController *receiveView;
    BOOL m_pictureSwitch;
    BOOL _isViewAnimationing;
}

- (void).cxx_destruct;
- (void)onRealnameActionClick:(id)arg1;
- (void)WCRedEnvelopesGreetingSenderHomeViewBack;
- (void)redEnvelopes2016GreetingViewControllerBack;
- (id)WCRedEnvelopesGreetingReceiveViewGetData;
- (void)WCRedEnvelopesGreetingReceiveViewBack;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)dismissCurrentViewSendShareRedEnvelopes;
- (void)OnThanksForRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnClearserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)showReceiveView:(BOOL)arg1 NoShowIcon:(BOOL)arg2;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (void)OnOpenRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnReceiverQueryRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (BOOL)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (void)queryRedEnvelopesDetailRequest:(id)arg1;
- (BOOL)isRedEnvelopesHasBeenReceivedAndNotOutOfDate:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)stopLoading;
- (id)initWithData:(id)arg1 Scene:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
