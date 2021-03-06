//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCDragToCloseViewController.h"

#import "FullScreenGestureDelegate.h"
#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "SessionSelectControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WindowDelegate.h"
#import "scrollViewDelegate.h"

@class CMessageWrap, MMProgressView, MMScrollView, MMTimer, MPMoviePlayerController, NSString, NSURL, UIButton, UIImageView, UILabel, UIView, WCActionSheet, WXFullScreenGestureRecognizer;

@interface MMMoviePlayerController : WCDragToCloseViewController <FullScreenGestureDelegate, WCActionSheetDelegate, IMsgExt, scrollViewDelegate, WindowDelegate, SessionSelectControllerDelegate, IMsgRevokeExt, UIAlertViewDelegate>
{
    NSURL *m_url;
    NSString *m_videoPath;
    unsigned long m_uiVideoTime;
    BOOL m_bIsFullScreen;
    BOOL m_bLoadFinished;
    BOOL m_bIsPlaying;
    BOOL m_bRestart;
    UIView *m_loadingView;
    UIImageView *imageView;
    MMProgressView *m_progressView;
    UILabel *m_percentageLabel;
    MPMoviePlayerController *m_moviePlayer;
    UIButton *m_playBigButton;
    CMessageWrap *m_msgWrap;
    MMScrollView *m_scrollView;
    UILabel *m_timerLabel;
    MMTimer *m_timerNoRetain;
    UIView *m_maskView;
    struct CGSize m_size;
    BOOL m_isFromFav;
    int curOrientation;
    float curScreenWith;
    float curScreenHeight;
    BOOL m_bIsStatusBarHidden;
    BOOL m_bSaveMode;
    BOOL m_bDownloadExpired;
    WCActionSheet *m_actionSheet;
    BOOL m_autoRepeat;
    WXFullScreenGestureRecognizer *m_gesture;
    BOOL m_disableSave;
    UIImageView *_thumbImageView;
    double _currentPlaybackTime;
}

@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) BOOL m_disableSave; // @synthesize m_disableSave;
@property(nonatomic) BOOL autoRepeated; // @synthesize autoRepeated=m_autoRepeat;
@property(nonatomic) BOOL m_bSaveMode; // @synthesize m_bSaveMode;
@property(nonatomic) BOOL m_isFromFav; // @synthesize m_isFromFav;
@property(retain, nonatomic) MMTimer *m_timerNoRetain; // @synthesize m_timerNoRetain;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath;
@property(retain, nonatomic) MPMoviePlayerController *m_moviePlayer; // @synthesize m_moviePlayer;
@property(copy, nonatomic) NSURL *m_url; // @synthesize m_url;
- (void).cxx_destruct;
- (void)onFullScreenBackgroundColorAlphaChange:(float)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)stopPlaying;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)updateSubViewsRect;
- (void)willAppear;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidUnload;
- (void)dealloc;
- (id)initWithMsgWrap:(id)arg1 VideoPath:(id)arg2;
- (id)initWithCaptureVideoInfo:(id)arg1;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)InternalUpdateVideo:(id)arg1;
- (void)changePlayerStatus;
- (void)autoPlay;
- (void)viewDidTransitionToNewSize;
- (void)didAppear;
- (void)viewDidLoad;
- (void)initView;
- (void)initVideoPlayerView;
- (void)updateTimerLabel;
- (void)openPlayer;
- (void)onOperate:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)onSave:(id)arg1;
- (void)onReturn:(id)arg1;
- (void)initData;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)initLoadingView;
- (void)handleDownloadFail;
- (void)updateProgress:(unsigned long)arg1;
- (void)startPlayingWithURL:(id)arg1 at:(id)arg2;
- (void)videoPlayFinished:(id)arg1;
- (void)videoPlayStateChanged:(id)arg1;
- (void)clearPlaying;
- (void)setFullScreen;
- (void)setStandardScreen;
- (void)stopTimer;
- (void)updateTitle;
- (void)startTimer;
- (void)hideToolBar:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (struct CGRect)getFullscreenRect;
- (struct CGRect)getStandardRect;
- (struct CGRect)getLabelRect;
- (struct CGRect)getImageViewRect;
- (struct CGRect)getImageViewRectFullAndShowBar;
- (struct CGRect)getMaskViewFrameFullAndHideBar;
- (struct CGRect)getMaskViewFrameFullAndShowBar;
- (void)resetTimeLabel;
- (void)setTimeLabel:(unsigned long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

