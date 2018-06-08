//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWebViewController.h"

#import "IExposeMgrExt.h"
#import "IExtraDeviceLoginMgrExt.h"
#import "IOnlineDeviceMgrExt.h"
#import "IShortCutExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IWCPayJSApiMgrExt.h"
#import "MultiTalkMgrExt.h"

@class MMUIButton, NSString;

@interface H5GameViewController : MMWebViewController <IVOIPUILogicMgrExt, MultiTalkMgrExt, IExposeMgrExt, IExtraDeviceLoginMgrExt, IShortCutExt, IOnlineDeviceMgrExt, IWCPayJSApiMgrExt>
{
    MMUIButton *menuButton;
    BOOL m_bFullscreen;
    int m_orientation;
    BOOL m_bPaying;
    BOOL m_bResetPayingPwd;
    struct CGSize m_ButtonSize;
    float m_ButtonInset;
    BOOL m_bShouldUseCustomH5GameMenu;
    BOOL m_bViewWillDisappear;
    id <H5GameViewControllerDelegate> _delegate;
    NSString *_gameAppId;
    unsigned int _lockedOrientation;
}

@property(nonatomic) unsigned int lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(retain, nonatomic) NSString *gameAppId; // @synthesize gameAppId=_gameAppId;
@property(retain, nonatomic) id <H5GameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unlockOrientation;
- (void)lockOrientation:(int)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)delaySetFullScreen:(BOOL)arg1;
- (BOOL)isOrientationLocked;
- (BOOL)shouldUseH5GameCustomMenu;
- (BOOL)isFullScreen;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)enterForeground;
- (void)enterBackground;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)onOpenApiWillBeginShare:(id)arg1;
- (void)onWCPayJSApiEnd:(BOOL)arg1;
- (void)onWCPayJSApiBegin:(BOOL)arg1;
- (void)onPerformShortCut:(id)arg1;
- (void)onDeviceInfoClose;
- (void)onDeviceInfoOpen;
- (void)onExtraDeviceLoginClose;
- (void)onExtraDeviceLoginOpen;
- (void)onExposeComplete;
- (void)onExposeInit;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMinimized;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onBeginMultiTalk;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)restoreViewStatus;
- (void)gameDidSelecteItem:(id)arg1;
- (void)scrollActionSheet:(id)arg1 MenuItem:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 fullScreen:(BOOL)arg2 ExtInfo:(id)arg3 DefinitelyUseWkWebview:(BOOL)arg4 IsFloatLayer:(BOOL)arg5 GameAppId:(id)arg6;
- (id)initWithURL:(id)arg1 fullScreen:(BOOL)arg2 ExtInfo:(id)arg3 DefinitelyUseWkWebview:(BOOL)arg4 IsFloatLayer:(BOOL)arg5;
- (id)initWithURL:(id)arg1 fullScreen:(BOOL)arg2 GameAppId:(id)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
