//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FullScreenGestureDelegate.h"
#import "SightViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCNetworkMediaPlayerDelegate.h"

@class FavForwardLogicController, NSString, SightView, SimpleSightInfo, UIButton, UILabel, WXFullScreenGestureRecognizer;

@interface FavSightFullScreenViewController : FullScreenViewController <FavForwardLogicDelegate, WCActionSheetDelegate, SightViewDelegate, WCNetworkMediaPlayerDelegate, FullScreenGestureDelegate>
{
    FavForwardLogicController *m_favForwardController;
    SimpleSightInfo *m_sightInfo;
    SightView *_sightView;
    UIButton *m_playAttachVideoButton;
    UILabel *_tipsLabel;
    int _fullPlayTimes;
    NSString *m_jumpDetailUrl;
    WXFullScreenGestureRecognizer *m_gestureReconizer;
    struct CGRect _originalRect;
    BOOL _bNowDragDown;
    BOOL _hidden;
}

@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSString *m_jumpDetailUrl; // @synthesize m_jumpDetailUrl;
- (void).cxx_destruct;
- (void)updateThumbImageIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isAd;
- (void)onResumeSightView:(id)arg1;
- (BOOL)sightView:(id)arg1 playbackDidReadEnd:(BOOL)arg2;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClosePlayer;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)exitFullScreen:(id)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenClose;
- (void)onFullScreenBackgroundColorAlphaChange:(float)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenSingleTap;
- (void)hideVCAnimation;
- (void)showVCAnimation;
- (void)playSight;
- (void)setPlayAttachVideoButtonFrame;
- (void)viewDidLayoutSubviews;
- (struct CGSize)sightVideoSize;
- (id)initWithSightInfo:(id)arg1 withOriginalRect:(struct CGRect)arg2;
- (void)internalInitWithSightInfo:(id)arg1;
- (void)onClickDetailButton;
- (void)onClickPlayAttachVideoBtn;
- (void)dealloc;
- (void)saveSight:(id)arg1;
- (void)forwardSight:(id)arg1;
- (BOOL)shouldAutorotate;
- (id)getFavForawrdViewController;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
