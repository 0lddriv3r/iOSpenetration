//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AVVideoDeviceDelegate.h"
#import "IStrangerContactMgrExt.h"
#import "IVOIPExt.h"
#import "IVOIPModeSwitchExt.h"
#import "IVOIPVideoDeviceDelegate.h"
#import "SmallCameraViewDelegate.h"
#import "VideoVoipCSTalkingViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class AVAudioPlayer, AVCaptureVideoPreviewLayer, CContact, CMessageWrap, MMTimer, MultiTalkHDHeadView, NSString, UIAlertView, UIImageView, UILabel, VideoVoipCSTalkingView, VoipMinimizeReportObject, WavAudioPlayer;

@interface VideoVoipCSView : MMUIViewController <WCActionSheetDelegate, IVOIPModeSwitchExt, IVOIPExt, AVVideoDeviceDelegate, SmallCameraViewDelegate, VideoVoipCSTalkingViewDelegate, IVOIPVideoDeviceDelegate, IStrangerContactMgrExt>
{
    UIAlertView *_alertView;
    int _status;
    NSString *m_nsAppId;
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
    BOOL m_isMinimizeMode;
    BOOL _m_isEndCall;
    BOOL _m_hasCalculateBlurView;
    BOOL _m_shouldChange;
    BOOL _m_isLandSpaceMode;
    BOOL _m_bAllowBackCamera;
    BOOL _m_bShowCSVideo;
    MultiTalkHDHeadView *m_headImageView;
    UILabel *m_usrnameLabel;
    UIImageView *m_blurView;
    UIImageView *m_profileBackgroundView;
    VoipMinimizeReportObject *m_reportObject;
    MMTimer *m_netStatusUpdateTimer;
    CContact *m_contact;
    NSString *m_nsHeadImageUrl;
    id <VideoVoipCSViewDelegate> _m_delegate;
    VideoVoipCSTalkingView *_m_talkingView;
    float _m_oldOriginY;
    UILabel *_m_netStatusLabel;
    WavAudioPlayer *_m_wavAudioPlayer;
}

+ (void)updateLabel:(id)arg1 WithWidth:(float)arg2 WithHeight:(float)arg3 AndLastLineWidth:(float)arg4 AndUpDownMargin:(float)arg5;
@property(nonatomic) BOOL m_bShowCSVideo; // @synthesize m_bShowCSVideo=_m_bShowCSVideo;
@property(nonatomic) BOOL m_bAllowBackCamera; // @synthesize m_bAllowBackCamera=_m_bAllowBackCamera;
@property(retain, nonatomic) WavAudioPlayer *m_wavAudioPlayer; // @synthesize m_wavAudioPlayer=_m_wavAudioPlayer;
@property(retain, nonatomic) UILabel *m_netStatusLabel; // @synthesize m_netStatusLabel=_m_netStatusLabel;
@property(nonatomic) BOOL m_isLandSpaceMode; // @synthesize m_isLandSpaceMode=_m_isLandSpaceMode;
@property(nonatomic) float m_oldOriginY; // @synthesize m_oldOriginY=_m_oldOriginY;
@property(nonatomic) BOOL m_shouldChange; // @synthesize m_shouldChange=_m_shouldChange;
@property(retain, nonatomic) VideoVoipCSTalkingView *m_talkingView; // @synthesize m_talkingView=_m_talkingView;
@property(nonatomic) BOOL m_hasCalculateBlurView; // @synthesize m_hasCalculateBlurView=_m_hasCalculateBlurView;
@property(nonatomic) __weak id <VideoVoipCSViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) BOOL m_isEndCall; // @synthesize m_isEndCall=_m_isEndCall;
@property(retain, nonatomic) NSString *m_nsHeadImageUrl; // @synthesize m_nsHeadImageUrl;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) MMTimer *m_netStatusUpdateTimer; // @synthesize m_netStatusUpdateTimer;
@property(retain, nonatomic) VoipMinimizeReportObject *m_reportObject; // @synthesize m_reportObject;
@property(nonatomic) BOOL m_isMinimizeMode; // @synthesize m_isMinimizeMode;
@property(retain, nonatomic) UIImageView *m_profileBackgroundView; // @synthesize m_profileBackgroundView;
@property(retain, nonatomic) UIImageView *m_blurView; // @synthesize m_blurView;
@property(retain, nonatomic) UILabel *m_usrnameLabel; // @synthesize m_usrnameLabel;
@property(retain, nonatomic) MultiTalkHDHeadView *m_headImageView; // @synthesize m_headImageView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *m_previewLayer; // @synthesize m_previewLayer;
@property(retain, nonatomic) UILabel *m_mainStatusLabel; // @synthesize m_mainStatusLabel;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void).cxx_destruct;
- (void)onStrangerContactUpdated:(id)arg1;
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
- (void)onVideoVoipCSTalkingViewHideStatusBar;
- (void)onVideoVoipCSTalkingViewShowStatusBar;
- (BOOL)onVideoVoipCSTalkingViewRequestMinimizeStatus;
- (void)onVideoVoipCSTalkingViewSwitchToSmall;
- (BOOL)isVideoVoipCSTalkingViewInitWithVideoMode;
- (void)onVideoVoipCSTalkingViewEndCall;
- (void)onVideoVoipCSTalkingViewHangUp;
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
- (BOOL)isCaller;
- (void)onVideoSessionStartComplete;
- (void)dealloc;
- (BOOL)shouldOpenCameraFirst;
- (void)preSetAudioCategory;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 isEarMode:(BOOL)arg3 andInitViewMode:(int)arg4 appid:(id)arg5 headUrl:(id)arg6 isAllowBackCamera:(BOOL)arg7 isShowCSVideo:(BOOL)arg8;
- (void)layoutTalkingView;
- (void)initView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)initTipsView;
- (void)layoutMainStatusLabel;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)layoutUsernameLabel;
- (void)layoutHeadImageView;
- (void)layoutBlurView;
- (void)layoutProfileBackgroundView;
- (void)layoutBackgroundView;
- (struct CGSize)viewSize;
- (void)updateStatusLabel;
- (void)formVOIPMessageWhenCallFromMyself:(BOOL)arg1;
- (void)formVOIPSysMsgView;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)accessibilityViewIsModal;
- (void)onVoipCSWindowDisappear;
- (void)onVoipCSWindowDidAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

