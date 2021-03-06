//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AVVideoDeviceDelegate.h"
#import "IVOIPExt.h"
#import "IVOIPModeSwitchExt.h"
#import "IVOIPVideoDeviceDelegate.h"
#import "SmallCameraViewDelegate.h"
#import "VideoVoipTalkingViewDelegate.h"
#import "VoipUIManagerExt.h"
#import "WCActionSheetDelegate.h"

@class AVAudioPlayer, AVCaptureVideoPreviewLayer, CContact, CMessageWrap, MMTimer, MultiTalkHDHeadView, NSString, UIAlertView, UIButton, UIImageView, UILabel, UIView, VideoVoipTalkingView, VoipMinimizeReportObject, WavAudioPlayer;

@interface VideoVoipView : MMUIViewController <WCActionSheetDelegate, IVOIPModeSwitchExt, IVOIPExt, AVVideoDeviceDelegate, SmallCameraViewDelegate, VideoVoipTalkingViewDelegate, IVOIPVideoDeviceDelegate, VoipUIManagerExt>
{
    UIAlertView *_alertView;
    int _status;
    CContact *_contact;
    UIImageView *_backgroundView;
    CMessageWrap *_msgWrap;
    BOOL _isConnectOK;
    AVAudioPlayer *_player;
    BOOL _isAcceptVoice;
    BOOL _canUpdateStatusMachine;
    unsigned long _startTalkingTime;
    int m_viewInitMode;
    UILabel *m_mainStatusLabel;
    BOOL m_forceToVoice;
    AVCaptureVideoPreviewLayer *m_previewLayer;
    BOOL m_hasStopBellSound;
    BOOL m_hasInvokeToAudioAnimation;
    BOOL m_hasCalculateBlurView;
    BOOL m_isMinimizeMode;
    BOOL _m_isEndCall;
    BOOL _m_shouldChange;
    BOOL _m_isLandSpaceMode;
    MultiTalkHDHeadView *m_headImageView;
    UILabel *m_usrnameLabel;
    UIImageView *m_blurView;
    UIImageView *m_profileBackgroundView;
    UIButton *m_minimizeButton;
    VideoVoipTalkingView *m_talkingView;
    VoipMinimizeReportObject *m_reportObject;
    MMTimer *m_netStatusUpdateTimer;
    UIView *m_warningView;
    id <VideoVoipViewDelegate> _m_delegate;
    UILabel *_m_warningLabel;
    float _m_oldOriginY;
    UILabel *_m_netStatusLabel;
    WavAudioPlayer *_m_wavAudioPlayer;
}

+ (void)updateLabel:(id)arg1 WithWidth:(float)arg2 WithHeight:(float)arg3 AndLastLineWidth:(float)arg4 AndUpDownMargin:(float)arg5;
@property(retain, nonatomic) WavAudioPlayer *m_wavAudioPlayer; // @synthesize m_wavAudioPlayer=_m_wavAudioPlayer;
@property(retain, nonatomic) UILabel *m_netStatusLabel; // @synthesize m_netStatusLabel=_m_netStatusLabel;
@property(nonatomic) BOOL m_isLandSpaceMode; // @synthesize m_isLandSpaceMode=_m_isLandSpaceMode;
@property(nonatomic) float m_oldOriginY; // @synthesize m_oldOriginY=_m_oldOriginY;
@property(nonatomic) BOOL m_shouldChange; // @synthesize m_shouldChange=_m_shouldChange;
@property(retain, nonatomic) UILabel *m_warningLabel; // @synthesize m_warningLabel=_m_warningLabel;
@property(nonatomic) __weak id <VideoVoipViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) BOOL m_isEndCall; // @synthesize m_isEndCall=_m_isEndCall;
@property(retain, nonatomic) UIView *m_warningView; // @synthesize m_warningView;
@property(retain, nonatomic) MMTimer *m_netStatusUpdateTimer; // @synthesize m_netStatusUpdateTimer;
@property(retain, nonatomic) VoipMinimizeReportObject *m_reportObject; // @synthesize m_reportObject;
@property(nonatomic) BOOL m_isMinimizeMode; // @synthesize m_isMinimizeMode;
@property(retain, nonatomic) VideoVoipTalkingView *m_talkingView; // @synthesize m_talkingView;
@property(retain, nonatomic) UIButton *m_minimizeButton; // @synthesize m_minimizeButton;
@property(nonatomic) BOOL m_hasCalculateBlurView; // @synthesize m_hasCalculateBlurView;
@property(retain, nonatomic) UIImageView *m_profileBackgroundView; // @synthesize m_profileBackgroundView;
@property(retain, nonatomic) UIImageView *m_blurView; // @synthesize m_blurView;
@property(retain, nonatomic) UILabel *m_usrnameLabel; // @synthesize m_usrnameLabel;
@property(retain, nonatomic) MultiTalkHDHeadView *m_headImageView; // @synthesize m_headImageView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *m_previewLayer; // @synthesize m_previewLayer;
@property(retain, nonatomic) UILabel *m_mainStatusLabel; // @synthesize m_mainStatusLabel;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)onVoipExtendFromCollapse;
- (void)onVoipWarningMsgArrived;
- (void)adjustViewAndNavBarRect;
- (void)viewDidLayoutSubviews;
- (void)updateNetStatus;
- (void)layoutNetStatusLabel;
- (void)initNetStatusLabel;
- (id)getContact;
- (void)switchToAudioModeAnimation;
- (BOOL)isInitVideoMode;
- (BOOL)isVideoMode;
- (void)setMainStatusString:(id)arg1;
- (BOOL)onVideoVoipTalkingViewRequestMinimizeStatus;
- (void)onVideoVoipTalkingViewSwitchToSmall;
- (BOOL)isVideoVoipTalkingViewInitWithVideoMode;
- (void)onVideoVoipTalkingViewEndCall;
- (void)onVideoVoipTalkingViewHangUp;
- (void)forceEndCall;
- (void)clearRenderView;
- (void)quitAnimation;
- (void)endCallAfterDelay:(float)arg1;
- (void)updateNetTypeStatus;
- (void)OnVideoModeChangeToVoiceMode;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnRemoteEarMode;
- (void)OnLocalEarMode;
- (void)OnRemoteEarModeFor2G;
- (void)OnLocalEarModeFor2G;
- (void)switchToTalkingView;
- (void)OnTalkingViewLoad:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)onConfirm;
- (void)stopPlaySound;
- (void)playEndingSound;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(int)arg3;
- (BOOL)isCalling;
- (BOOL)isCaller;
- (void)onVideoSessionStartComplete;
- (void)dealloc;
- (BOOL)shouldOpenCameraFirst;
- (void)preSetAudioCategory;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 isEarMode:(BOOL)arg3 andInitViewMode:(int)arg4;
- (void)layoutTalkingView;
- (void)changeToMinimizeView;
- (void)onSmallSwitchButtonClick;
- (void)layoutMinimizeButton;
- (void)initView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)initTipsView;
- (void)layoutMainStatusLabel;
- (void)layoutWarningView;
- (void)layoutUsernameLabel;
- (void)layoutHeadImageView;
- (void)layoutBlurView;
- (void)layoutProfileBackgroundView;
- (void)layoutBackgroundView;
- (struct CGSize)viewSize;
- (void)updateStatusLabel;
- (void)formVOIPMessageWhenCallFromMyself:(BOOL)arg1;
- (void)formVOIPSysMsgView;
- (BOOL)accessibilityViewIsModal;
- (void)onVoipWindowDisappear;
- (void)onVoipWindowDidAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

