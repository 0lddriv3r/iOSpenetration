//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AVPlayerStateControlDelegate.h"
#import "IVOIPUILogicMgrExt.h"
#import "IVideoExt.h"
#import "MMAVPlayerItem.h"
#import "SightIconViewDelegate.h"
#import "SightPlayerNotifyExt.h"
#import "SightPlayerViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "VideoProgressBarDelegate.h"
#import "WCStateMachineDelegate.h"

@class CMessageWrap, MMAVPlayerItemWrap, MMProgressViewEx, NSString, SightIconView, SightPlayerView, UIColor, UIImage, UIImageView, UILabel, UITapGestureRecognizer, VideoProgressBar, WCMediaItem, WCStateMachine;

@interface SightView : UIView <SightPlayerViewDelegate, WCStateMachineDelegate, SightIconViewDelegate, MMAVPlayerItem, UIGestureRecognizerDelegate, AVPlayerStateControlDelegate, IVOIPUILogicMgrExt, SightPlayerNotifyExt, VideoProgressBarDelegate, IVideoExt>
{
    BOOL _disabled;
    BOOL _coverMaskHidden;
    BOOL _disableResumeMusicPlayAfterPause;
    BOOL _shouldSkipStackOrResume;
    BOOL _fullScreenPlay;
    BOOL _forceMute;
    BOOL _managedByMMAVPlayerMgr;
    BOOL _wasPlayingBeforeClearPlayerView;
    BOOL _bUseVideoStreamPlayView;
    BOOL _bShouldResumeWhenSeekEnd;
    id <SightViewDelegate> _delegate;
    unsigned int _scene;
    NSString *_thumbImagePath;
    UIImage *_thumbImage;
    NSString *_videoPath;
    NSString *_cpKey;
    int _playStatus;
    float _progress;
    UIColor *_coverMaskBackgroundColor;
    VideoProgressBar *_progressBar;
    unsigned int _audioCategroy;
    CMessageWrap *_m_oMessageWrap;
    WCMediaItem *_m_oWCMediaItem;
    SightIconView *_iconView;
    MMProgressViewEx *_progressView;
    UIView *_tapgGestureView;
    UITapGestureRecognizer *_tapGestureOnIconView;
    SightPlayerView *_playerView;
    UILabel *_hintLabel;
    UIView *_coverMask;
    int _currentMaskType;
    NSString *_currentHintText;
    UIImageView *_thumbImageView;
    MMAVPlayerItemWrap *_playerWrap;
    WCStateMachine *_stateMachine;
    struct CGSize _iconViewSize;
}

@property(nonatomic) BOOL bShouldResumeWhenSeekEnd; // @synthesize bShouldResumeWhenSeekEnd=_bShouldResumeWhenSeekEnd;
@property(nonatomic) BOOL bUseVideoStreamPlayView; // @synthesize bUseVideoStreamPlayView=_bUseVideoStreamPlayView;
@property(nonatomic) BOOL wasPlayingBeforeClearPlayerView; // @synthesize wasPlayingBeforeClearPlayerView=_wasPlayingBeforeClearPlayerView;
@property(retain, nonatomic) WCStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) MMAVPlayerItemWrap *playerWrap; // @synthesize playerWrap=_playerWrap;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) NSString *currentHintText; // @synthesize currentHintText=_currentHintText;
@property(nonatomic) int currentMaskType; // @synthesize currentMaskType=_currentMaskType;
@property(retain, nonatomic) UIView *coverMask; // @synthesize coverMask=_coverMask;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) SightPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) struct CGSize iconViewSize; // @synthesize iconViewSize=_iconViewSize;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureOnIconView; // @synthesize tapGestureOnIconView=_tapGestureOnIconView;
@property(retain, nonatomic) UIView *tapgGestureView; // @synthesize tapgGestureView=_tapgGestureView;
@property(retain, nonatomic) MMProgressViewEx *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) BOOL managedByMMAVPlayerMgr; // @synthesize managedByMMAVPlayerMgr=_managedByMMAVPlayerMgr;
@property(retain, nonatomic) WCMediaItem *m_oWCMediaItem; // @synthesize m_oWCMediaItem=_m_oWCMediaItem;
@property(retain, nonatomic) CMessageWrap *m_oMessageWrap; // @synthesize m_oMessageWrap=_m_oMessageWrap;
@property(nonatomic) unsigned int audioCategroy; // @synthesize audioCategroy=_audioCategroy;
@property(nonatomic) BOOL forceMute; // @synthesize forceMute=_forceMute;
@property(nonatomic) BOOL fullScreenPlay; // @synthesize fullScreenPlay=_fullScreenPlay;
@property(retain, nonatomic) VideoProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(nonatomic) BOOL shouldSkipStackOrResume; // @synthesize shouldSkipStackOrResume=_shouldSkipStackOrResume;
@property(nonatomic) BOOL disableResumeMusicPlayAfterPause; // @synthesize disableResumeMusicPlayAfterPause=_disableResumeMusicPlayAfterPause;
@property(retain, nonatomic) UIColor *coverMaskBackgroundColor; // @synthesize coverMaskBackgroundColor=_coverMaskBackgroundColor;
@property(nonatomic) BOOL coverMaskHidden; // @synthesize coverMaskHidden=_coverMaskHidden;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) int playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) NSString *thumbImagePath; // @synthesize thumbImagePath=_thumbImagePath;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <SightViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnVideoThumbDidChange:(id)arg1;
- (void)notifySightPlayerContinuePlay;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onServiceEnterForeground:(id)arg1;
- (void)onServiceEnterBackground:(id)arg1;
- (void)onPauseOrStop;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)updateVideoTotalTime:(double)arg1;
- (void)onProgressBarHidden;
- (void)showMaskType:(int)arg1 animated:(BOOL)arg2;
- (void)showCurrentHintText;
- (void)showCurrentMaskType;
- (void)setMaskType:(int)arg1 hintText:(id)arg2 afterDelay:(double)arg3;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (BOOL)isCurrentStateNameContainedInStates:(id)arg1;
- (void)setPlayerLayerContentMode:(int)arg1;
- (void)setThumbImageViewHidden:(BOOL)arg1;
- (void)OnUpdateThumbImage:(id)arg1;
- (void)videoDownloadErrorExpired:(BOOL)arg1;
- (void)startToPlayVideo;
- (void)hideVideoLoadingView;
- (void)showVideoLoadingView;
- (void)tryToPlayVideo;
- (void)onProgressEnd;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)onVideoSizeUpdate:(struct CGSize)arg1;
- (void)onResumeSightPlayerView:(id)arg1;
- (void)onStack;
- (void)onItemCleared;
- (BOOL)onPlayEnd:(BOOL)arg1;
- (void)onResume;
- (void)willStack;
- (BOOL)performClear;
- (BOOL)performFullPlayWithMute:(BOOL)arg1;
- (BOOL)performFullPlay;
- (BOOL)performFullLoad;
- (void)silentPlayImmediately;
- (void)performSilentPlay;
- (void)performPauseForce:(BOOL)arg1;
- (void)performLoadItem:(id)arg1;
- (void)seekToTime:(float)arg1;
- (void)stop;
- (void)pauseWithShowThumb:(BOOL)arg1 bForcePause:(BOOL)arg2;
- (void)pauseForce:(BOOL)arg1;
- (void)playWithMute:(BOOL)arg1 forceUsingAVPlayer:(BOOL)arg2 audioCategory:(unsigned int)arg3;
- (void)clear;
- (void)clearPlayerView;
- (void)killPlayerWrap;
- (BOOL)isMute;
- (void)tryToStopImmediately;
- (void)tryToStop;
- (void)tryToPauseWithShowThumb:(BOOL)arg1;
- (void)tryToPause;
- (void)tryToSeekToTime:(float)arg1;
- (void)tryToSeekToStartTime;
- (unsigned int)initPlayViewAndStartDownload;
- (void)tryToReportKVArgs:(struct C2CDownloadResult)arg1;
- (void)tryToSavePlayedTime;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (BOOL)isPlaying;
- (void)tryToPlayWithSound:(BOOL)arg1 hideCoverWithAnimation:(BOOL)arg2 forceUsingAVPlayer:(BOOL)arg3 audioCategory:(unsigned int)arg4;
- (void)tryToPlayWithSound:(BOOL)arg1 hideCoverWithAnimation:(BOOL)arg2 forceUsingAVPlayer:(BOOL)arg3;
- (void)tryToPlayWithSound:(BOOL)arg1 hideCoverWithAnimation:(BOOL)arg2 audioCategory:(unsigned int)arg3;
- (void)tryToPlayWithSound:(BOOL)arg1 hideCoverWithAnimation:(BOOL)arg2;
- (void)tryToPlayWithSound:(BOOL)arg1 forceUsingAVPlayer:(BOOL)arg2;
- (void)tryToPlayWithSound:(BOOL)arg1;
- (BOOL)isReadyToPlay;
- (void)tryToDisable;
- (void)tryToSetVideoPath:(id)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)setHintTextColor:(id)arg1;
- (void)setHintText:(id)arg1;
- (void)setLoadingViewHidden:(BOOL)arg1;
- (void)setHintViewHidden:(BOOL)arg1;
- (void)setIconViewHidden:(BOOL)arg1;
- (void)tryToSetProgressStep:(float)arg1;
- (void)tryToSetProgress:(float)arg1;
- (BOOL)isInFlowControl;
- (BOOL)tryToEnterFlowControl;
- (void)didFailToUploadVideo;
- (void)didUploadVideo;
- (BOOL)tryToUploadVideo;
- (void)tryToConnectForUpload;
- (void)tryToWaitForUpload;
- (BOOL)isFailedToDownloadVideo;
- (void)didFailToDownloadVideo;
- (BOOL)isDownloadingVideo;
- (BOOL)tryToDownloadVideo;
- (BOOL)isConnecting;
- (BOOL)tryToConnectForDownload;
- (BOOL)isWaitingForDownload;
- (BOOL)tryToWaitForDownload;
- (BOOL)isActive;
- (void)tryToReset;
- (void)showIntoScreen:(BOOL)arg1;
- (void)setThumbImageHidden:(BOOL)arg1;
- (void)setContentMode:(int)arg1;
@property(nonatomic) BOOL disablePlayerStatusTimerCheck;
- (void)onSingleTapOnIconView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hidePlayerView:(BOOL)arg1;
- (void)hideThumbImageView:(BOOL)arg1;
- (void)dealloc;
- (id)getVideoPlayerView;
- (void)initVideoPlayView;
- (void)initSightPlayView;
- (id)getSightPlayerView;
- (void)tryShowDownloadingView;
- (void)animateHideDownloadingView;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetStateMachine;
- (void)activate;
- (void)setStateMachine;
- (id)initWithFrame:(struct CGRect)arg1 managedByMMAVPlayerMgr:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithManagedByMMAVPlayerMgr:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

