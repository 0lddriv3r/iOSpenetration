//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AMRAudioPlayerDelegate.h"
#import "MMService.h"
#import "SPXAudioPlayerDelegate.h"
#import "SilkAudioPlayerDelegate.h"

@class AMRAudioPlayer, FavAudioInfo, MMTimer, NSDate, NSString, SPXAudioPlayer, SilkAudioPlayer;

@interface FavAudioPlayer : MMService <MMService, AMRAudioPlayerDelegate, SPXAudioPlayerDelegate, SilkAudioPlayerDelegate>
{
    AMRAudioPlayer *m_amrplayer;
    SPXAudioPlayer *m_spxplayer;
    SilkAudioPlayer *m_silkplayer;
    FavAudioInfo *m_curAudioInfo;
    FavAudioInfo *m_lastAudioInfo;
    unsigned long m_uiAudioOffset;
    int m_playStat;
    MMTimer *m_playTimer;
    NSDate *m_lastStartTime;
    unsigned long m_uiLastPlayedTime;
}

@property(retain, nonatomic) SilkAudioPlayer *m_silkplayer; // @synthesize m_silkplayer;
@property(retain, nonatomic) SPXAudioPlayer *m_spxplayer; // @synthesize m_spxplayer;
@property(retain, nonatomic) AMRAudioPlayer *m_amrplayer; // @synthesize m_amrplayer;
@property(retain, nonatomic) FavAudioInfo *m_lastAudioInfo; // @synthesize m_lastAudioInfo;
@property(retain, nonatomic) FavAudioInfo *m_curAudioInfo; // @synthesize m_curAudioInfo;
@property(retain, nonatomic) NSDate *m_lastStartTime; // @synthesize m_lastStartTime;
- (void).cxx_destruct;
- (void)onAudioPlaying;
- (void)startTimer;
- (void)stopTimer;
- (void)onPlayError;
- (void)onEndPlaying:(BOOL)arg1;
- (void)onBeginPlaying;
- (void)OnSPXEarTip;
- (void)OnSPXEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)OnSPXBeginPlaying:(id)arg1 ErrNo:(int)arg2;
- (void)onSilkEarTip;
- (void)onSilkEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)onSilkBeginPlaying:(id)arg1 ErrNo:(int)arg2;
- (void)onSilkLevelMeter:(id)arg1 Peak:(float)arg2;
- (void)OnAMREarTip;
- (void)OnAMREndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)OnAMRBeginPlaying:(id)arg1 ErrNo:(int)arg2;
- (float)getAudioOffset;
- (id)getCurAudioInfo;
- (int)getPlayStat;
- (BOOL)isPlaying;
- (BOOL)ReStartPlay;
- (BOOL)PausePlay;
- (BOOL)StopPlay;
- (void)setProgress:(unsigned long)arg1;
- (void)StartPlayFromOffsetms:(unsigned long)arg1;
- (void)SetAndPlayFavAudio:(id)arg1 startFromOffsetms:(unsigned long)arg2;
- (void)SetAndPlayFavAudio:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
