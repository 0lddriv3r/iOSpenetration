//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "ISysCallCheckExt.h"
#import "IWAAudioPlayerDelegate.h"
#import "MonoServiceLogicExt.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface WAJSContextPlugin_AudioPlayer : WAJSContextPluginBase <IWAAudioPlayerDelegate, ISysCallCheckExt, MonoServiceLogicExt>
{
    struct ALCcontext_struct *_alcContext;
    BOOL _obeyMuteSwitch;
    BOOL _bResumeContextOnWXBecomingActive;
    BOOL _isGameApp;
    BOOL _isNeedResumeWXMusic;
    id <IJSContextPluginDelegate> _resultDelegate;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_fileQueue;
    NSMutableDictionary *_playerDic;
}

@property(nonatomic) BOOL isNeedResumeWXMusic; // @synthesize isNeedResumeWXMusic=_isNeedResumeWXMusic;
@property(nonatomic) BOOL isGameApp; // @synthesize isGameApp=_isGameApp;
@property(retain, nonatomic) NSMutableDictionary *playerDic; // @synthesize playerDic=_playerDic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(nonatomic) __weak id <IJSContextPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void).cxx_destruct;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)resumeMusicIfNeed:(BOOL)arg1;
- (BOOL)handleEvent:(int)arg1 userInfo:(id)arg2;
- (void)asyncClearAudioCache;
- (void)removeObserver;
- (void)addObserver;
- (void)resumeAudioContext;
- (void)forcePauseAllPlayer;
- (void)stopAllPlayer;
- (void)activeAudioSession;
- (void)onDownloadAudioData:(id)arg1 src:(id)arg2;
- (void)setCurrentContext;
- (void)onPlayerStateChange:(int)arg1 audioId:(id)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (BOOL)isPlayingAudio;
- (id)getPlayerWithAudioId:(id)arg1;
- (float)getPlayerVolume:(id)arg1;
- (float)getPlayerBufferTime:(id)arg1;
- (float)getPlayerStartTime:(id)arg1;
- (id)getPlayerSrc:(id)arg1;
- (float)getPlayerCurtime:(id)arg1;
- (float)getPlayerDuration:(id)arg1;
- (BOOL)isPlayerIdle:(id)arg1;
- (BOOL)isPlayerWaiting:(id)arg1;
- (BOOL)isPlayerPlaying:(id)arg1;
- (BOOL)isPlayerPaused:(id)arg1;
- (BOOL)isPlayerSet:(id)arg1;
- (void)destoryPlayer:(id)arg1;
- (void)stopPlayer:(id)arg1;
- (void)seekPlayer:(id)arg1 seekTime:(float)arg2;
- (void)pausePlayer:(id)arg1;
- (void)playPlayer:(id)arg1;
- (void)setPlayerState:(id)arg1 src:(id)arg2 startTime:(float)arg3 autoPlay:(BOOL)arg4 loop:(BOOL)arg5 obeyMuteSwitch:(BOOL)arg6 volume:(float)arg7;
- (BOOL)isAudioPlayerExist:(id)arg1;
- (id)createAudioInstance;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (id)audioCacheDataPathForSrc:(id)arg1;
- (id)audioTmpPathByfileName:(id)arg1;
- (id)audioTmpRootPath;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

