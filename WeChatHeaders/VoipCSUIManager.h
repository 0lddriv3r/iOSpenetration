//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IVOIPExt.h"
#import "MMConfigMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MMVoipCSMainWindowDelegate.h"
#import "VideoVoipCSViewDelegate.h"

@class MMVoipCSMainWindow, MMVoipToastWindow, NSString, VideoVoipCSCallerView;

@interface VoipCSUIManager : MMService <MMKernelExt, MMVoipCSMainWindowDelegate, VideoVoipCSViewDelegate, MMService, IVOIPExt, MMConfigMgrExt>
{
    MMVoipCSMainWindow *m_mainWindow;
    MMVoipToastWindow *m_voipCSToastWindow;
    VideoVoipCSCallerView *m_videoVoipCSViewController;
}

+ (BOOL)canForceStartVoiceWithContact:(id)arg1;
+ (BOOL)canStartVoiceWithContact:(id)arg1;
+ (BOOL)canStartVideoWithContact:(id)arg1;
@property(retain, nonatomic) VideoVoipCSCallerView *m_videoVoipCSViewController; // @synthesize m_videoVoipCSViewController;
@property(retain, nonatomic) MMVoipToastWindow *m_voipCSToastWindow; // @synthesize m_voipCSToastWindow;
@property(retain, nonatomic) MMVoipCSMainWindow *m_mainWindow; // @synthesize m_mainWindow;
- (void).cxx_destruct;
- (void)onPreQuit;
- (void)onMMDynamicConfigUpdated;
- (void)OnTellMeViewIsExist:(char *)arg1;
- (void)SendInvite:(int)arg1;
- (void)Cancel;
- (struct CGRect)onMMVoipCSMainWindowRequestMinimizeFrame;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowQuitAnimationDidEnd;
- (void)onMMVoipCSMainWindowQuitAnimationWillStart;
- (void)onMMVoipCSMainWindowExtendAnimationDidEnd;
- (BOOL)onVideoVoipCSViewRequestMinimizeStatus;
- (void)onVideoVoipCSViewChangeToMinimizeMode;
- (void)onVideoVoipCSViewClose;
- (void)onVoipMinimizeWindowClicked;
- (void)switchToSpeakPhoneMode:(BOOL)arg1;
- (void)clearCurrentString;
- (BOOL)isUsingEarDevice;
- (void)changeToMinimizeToast;
- (void)changeToVideoToast;
- (void)addScrollingString:(id)arg1 withDisplayTime:(float)arg2;
- (BOOL)isMinimizeMode;
- (void)showCannotStartVoipTwice;
- (id)getConflictWording;
- (void)showConflictWording;
- (void)recoverVoipAudioMode;
- (BOOL)isVoipSpeakerMode;
- (BOOL)isVideoVoipWorking;
- (BOOL)isVoipWorking;
- (BOOL)isViewEnding;
- (BOOL)showVideoEntranceInMainFrame;
- (BOOL)closeViewWith:(id)arg1;
- (void)hangupForNotSupportVoiceVoip;
- (BOOL)isTheSameContactWithCurrentVoip:(id)arg1;
- (void)openVideoVoipCSViewWithBizUserName:(id)arg1 andMsgWrap:(id)arg2 isEarMode:(BOOL)arg3 appid:(id)arg4 headUrl:(id)arg5 isAllowBackCamera:(BOOL)arg6 isShowCSVideo:(BOOL)arg7 context:(id)arg8;
- (BOOL)canStartVoip;
- (BOOL)canOpenVoipByTimeLogic:(id)arg1;
- (void)onServiceReloadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
