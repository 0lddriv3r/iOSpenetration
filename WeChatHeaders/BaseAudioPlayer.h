//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ActionRecognitionDelegate.h"
#import "BaseAudioPlayerNotifyExt.h"
#import "MMService.h"
#import "WCAudioSessionExt.h"

@class ActionRecognition, AudioPlayerUserData, MMTimer, NSString;

@interface BaseAudioPlayer : MMService <ActionRecognitionDelegate, BaseAudioPlayerNotifyExt, WCAudioSessionExt, MMService>
{
    struct PlayerState *mAqData;
    BOOL mIsNeedNotifyOtherAudio;
    AudioPlayerUserData *mUserData;
    MMTimer *mMeterTimer;
    ActionRecognition *mActionRecogn;
}

@property(nonatomic) BOOL needNotifyOtherAudio; // @synthesize needNotifyOtherAudio=mIsNeedNotifyOtherAudio;
@property(retain, nonatomic) ActionRecognition *mActionRecogn; // @synthesize mActionRecogn;
@property(retain, nonatomic) MMTimer *mMeterTimer; // @synthesize mMeterTimer;
@property(retain) AudioPlayerUserData *mUserData; // @synthesize mUserData;
- (void).cxx_destruct;
- (void)setUserData:(id)arg1;
- (BOOL)isPlaying;
- (void)forceNotifyOtherAudioPlay;
- (void)stopAndNotifyUI;
- (void)autostop;
- (void)stop;
- (void)stopButNotNotify;
- (void)EndNotifyOnMainThread;
- (void)replay;
- (void)restart;
- (void)pause;
- (void)playFromOffsetms:(unsigned long)arg1;
- (void)play;
- (BOOL)preparePlayNotNotify;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)setAutoMode;
- (void)setEarpieceMode;
- (void)setSpeakerMode;
- (void)updateStatus;
- (void)updateSetting;
- (void)updateSession;
- (BOOL)initQueue;
- (void)initSession;
- (void)unopenMonitorDetection;
- (void)openMonitorDetection;
- (void)sensorStateChange:(id)arg1;
- (void)safeDisableProximity;
- (void)disableProximity;
- (void)enableProximity;
- (void)dealloc;
- (id)init;
- (void)notifyBaseAudioPlayerStopAudio;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange:(unsigned int)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)ActionRecognitionProximityChange;
- (void)unregisterInter;
- (void)registerInter;
- (void)handleInterruption;
- (void)TimerCheckMeter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
