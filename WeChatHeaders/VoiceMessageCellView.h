//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "ChatBackgroundExt.h"
#import "IMsgRevokeExt.h"
#import "IWXVideoPlayerViewExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "TextFloatPreviewDelegate.h"
#import "VoiceTranslateMsgMgrExt.h"

@class MMTimer, MMTipsViewController, NSArray, NSString, TopLeftLabel, UIActivityIndicatorView, UIImageView, UILabel, UIView, VoiceMessageViewModel;

@interface VoiceMessageCellView : CommonMessageCellView <ChatBackgroundExt, IMsgRevokeExt, MMTipsViewControllerDelegate, VoiceTranslateMsgMgrExt, TextFloatPreviewDelegate, IWXVideoPlayerViewExt>
{
    float m_currVoiceNodeLength;
    UILabel *m_secLabel;
    UIImageView *m_playingImageView;
    UIImageView *m_recordingView;
    UIImageView *m_unreadImageView;
    TopLeftLabel *m_oTranslateTextLabel;
    UILabel *m_translateSuccessLabel;
    UIImageView *m_translateSuccessIconView;
    UIView *m_oplayBGView;
    UIView *m_translateView;
    NSArray *m_translateMenus;
    UIActivityIndicatorView *m_oTranslateLoadingView;
    MMTipsViewController *m_voiceTransIntro;
    MMTimer *m_animationTimer;
}

- (void).cxx_destruct;
- (void)OnVoiceTranslateFail:(id)arg1;
- (void)OnVoiceTranslateResultChange:(id)arg1;
- (void)OnVoiceTranslateSuccess:(id)arg1;
- (void)OnVoiceTranslateBegin:(id)arg1;
- (void)updateTranslateText;
- (void)stopTextAnimation;
- (void)startTextAnimation;
- (void)onHide;
- (void)onWindowHide;
- (void)onClickTipsBtn:(unsigned int)arg1;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)onWXVideoPlayerViewPlay:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)updateVoiceLength;
- (void)updateSecLabelColor;
- (void)stopPlaying;
- (void)startPlaying;
- (void)onClick;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (BOOL)shouldLayoutIfNeeded;
- (void)showVoiceTransView;
- (void)onVoiceTrans:(id)arg1;
- (void)onVoiceTransClose:(id)arg1;
- (void)onVoiceTransStop:(id)arg1;
- (void)onSwitch:(id)arg1;
- (BOOL)isTouchInView:(id)arg1;
- (BOOL)canShowVoiceTransMenu;
- (id)operationMenuItems;
- (void)onLongTouch;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)addTranslateViewMenus;
- (void)handleTranslateMenuWillHideMenuNotification:(id)arg1;
- (void)onForwardTranslate:(id)arg1;
- (void)onFavoriteTranslate:(id)arg1;
- (void)onCopyTranslate:(id)arg1;
- (void)onDoubleTapTranslateView:(id)arg1;
- (void)onTapTranslateView:(id)arg1;
- (void)onLongPressTranslateView:(id)arg1;
- (void)OnVoiceSingleTap:(id)arg1;
- (id)displayViewForImageBrowser;
- (id)contentTextFont;
- (void)reportKV;
- (void)setTranslateText:(id)arg1;
- (void)updateTranslateSuccessView;
- (void)initTranslateTextLabel;
- (void)initTranslateView;
- (void)initUnreadView;
- (void)initRecordingView;
- (void)initPlayingImageView;
- (void)initPlayBGView;
- (void)initSecLabel;
- (void)setFrameForBgImageView:(struct CGRect)arg1;
- (void)onAppear;
- (void)updateStatus;
- (void)updateTranslateStatusButton;
- (void)updateContentOffset:(BOOL)arg1;
- (void)layoutContentView;
- (unsigned long long)accessibilityTraits;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VoiceMessageViewModel *viewModel; // @dynamic viewModel;

@end

