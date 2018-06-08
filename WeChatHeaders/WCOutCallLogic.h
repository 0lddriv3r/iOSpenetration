//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "AVAudioPlayerDelegate.h"
#import "IPSTNExt.h"
#import "MMKernelExt.h"
#import "MultiTalkMainWindowDelegate.h"
#import "MultitalkMinimizeWindowDelegate.h"
#import "WcoMinimizeDelegate.h"

@class AVAudioPlayer, NSMutableString, NSString, UIViewController, WCOutRecentCallItem, WcoMinimizeWindow, WcoTalkMainWindow;

@interface WCOutCallLogic : MMObject <IPSTNExt, AVAudioPlayerDelegate, MultitalkMinimizeWindowDelegate, MultiTalkMainWindowDelegate, WcoMinimizeDelegate, MMKernelExt>
{
    unsigned int m_status;
    BOOL m_isSpeaker;
    BOOL m_isMute;
    WCOutRecentCallItem *m_curCallItem;
    int m_recentCallLocalID;
    int m_roomid;
    long long m_CallSeq;
    BOOL mIsAccepted;
    BOOL mIsConnected;
    BOOL mIsOnCalling;
    BOOL mIsPlayingCallSound;
    BOOL _isMinmizeMode;
    UIViewController *_curFromViewController;
    unsigned int _curEntranceType;
    AVAudioPlayer *_player;
    NSMutableString *_callBackSteam;
    WcoMinimizeWindow *_minWindow;
    WcoTalkMainWindow *_mainWindow;
}

@property(nonatomic) BOOL isMinmizeMode; // @synthesize isMinmizeMode=_isMinmizeMode;
@property(retain, nonatomic) WcoTalkMainWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(retain, nonatomic) WcoMinimizeWindow *minWindow; // @synthesize minWindow=_minWindow;
@property(retain, nonatomic) NSMutableString *callBackSteam; // @synthesize callBackSteam=_callBackSteam;
@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
@property(nonatomic) unsigned int curEntranceType; // @synthesize curEntranceType=_curEntranceType;
@property(retain, nonatomic) UIViewController *curFromViewController; // @synthesize curFromViewController=_curFromViewController;
@property(readonly, nonatomic) BOOL isOnCalling; // @synthesize isOnCalling=mIsOnCalling;
@property(retain, nonatomic) WCOutRecentCallItem *curCallItem; // @synthesize curCallItem=m_curCallItem;
- (void).cxx_destruct;
- (BOOL)isWcoActive;
- (void)showMinToastWindowDesc:(id)arg1;
- (void)quitMinWindow;
- (struct CGRect)onMultiTalkMainWindowRequestMinimizeFrame;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationWillStart;
- (void)onMultiTalkMainWindowExtendAnimationDidEnd;
- (void)onWcoMinimizeButtonClick;
- (void)onMultitalkMinimizeWindowClicked;
- (int)getNetSpeed;
- (void)OnPSTNInviteGap:(int)arg1;
- (void)OnPSTNTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNNetWorkError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNTimeOut:(id)arg1;
- (void)OnPSTNInterrupt:(id)arg1;
- (void)OnPSTNNotifyError:(id)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(id)arg4 ErrTitle:(id)arg5;
- (void)OnPSTNInviteError:(id)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(id)arg4 ErrTitle:(id)arg5;
- (void)OnPSTNError:(id)arg1 ErrNo:(int)arg2 ErrMsg:(id)arg3 ErrTitle:(id)arg4;
- (void)OnPSTNBeginConnect:(id)arg1;
- (void)OnPSTNDataConnected:(id)arg1;
- (void)OnPSTNBeAccepted:(id)arg1;
- (void)OnPSTNBeginTalk:(id)arg1;
- (void)OnPSTNRing:(id)arg1;
- (void)onPSTNCheckNumberResp:(id)arg1;
- (void)OnPSTNCall:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNTellMeViewIsExist:(char *)arg1;
- (void)OnPSTNLightInterrupt:(BOOL)arg1;
- (void)OnPSTNCallInterrupt:(id)arg1;
- (void)OnPSTNAutoHangUp:(id)arg1;
- (void)OnPSTNBeHanguped:(id)arg1;
- (void)OnPSTNBeRejected:(id)arg1;
- (void)OnPSTNNoAnswer:(id)arg1;
- (void)handlePSTNErrorMsg:(id)arg1 errorlevel:(unsigned int)arg2 ErrTitle:(id)arg3 showChargeAlert:(BOOL)arg4;
- (void)handlePSTNErrorCode:(int)arg1 ErrMsg:(id)arg2 ErrTitle:(id)arg3;
- (void)handlePSTNStatus:(unsigned int)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)stopPlaySound;
- (void)playCallingSound;
- (void)playEndingSound;
- (void)OnCallEnded:(BOOL)arg1;
- (void)beginToTalk;
- (void)prepareCalling;
- (id)GetNeedShowLogWithIsHidePhoneNum:(BOOL)arg1;
- (id)GetNeedShowLog;
- (id)GetCurCallItem;
- (BOOL)pressKeyWhileCallingWithKeyCode:(int)arg1;
- (BOOL)isSpeakerMode;
- (void)setSpeaker:(BOOL)arg1;
- (void)setMute:(BOOL)arg1;
- (void)hangUpCall;
- (void)checkNumber:(id)arg1 PureNum:(id)arg2 LastCountryCode:(id)arg3 DialScece:(unsigned int)arg4;
- (void)callWCoutContact;
- (void)onPreQuit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

