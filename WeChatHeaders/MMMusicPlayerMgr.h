//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IRemoteControlMusicPlayerExt.h"
#import "ISysCallCheckExt.h"
#import "MMImageLoaderObserver.h"
#import "MMMusicAlbumRtnExt.h"
#import "MMMusicListExt.h"
#import "MMMusicLyricsRtnExt.h"
#import "MMMusicPlayerExt.h"
#import "MMMusicPlayerNotifyExt.h"
#import "MMService.h"

@class MMMusicInfo, MMMusicListMgr, MMMusicLyricResolver, MMMusicUrlChecker, MusicLogInfo, NSMutableArray, NSString;

@interface MMMusicPlayerMgr : MMService <MMImageLoaderObserver, IRemoteControlMusicPlayerExt, MMMusicPlayerNotifyExt, MMService, MMMusicPlayerExt, MMMusicLyricsRtnExt, MMMusicAlbumRtnExt, MMMusicListExt, ISysCallCheckExt>
{
    NSMutableArray *m_arrMusicItems;
    MMMusicInfo *m_prevMusicInfo;
    MMMusicInfo *m_curMusicInfo;
    MMMusicInfo *m_nextMusicInfo;
    int m_playMode;
    int m_playDirection;
    MMMusicListMgr *m_musicListMgr;
    MMMusicLyricResolver *m_musicLyricResolver;
    unsigned long m_uiCurMusicIndex;
    BOOL m_bforceStop;
    BOOL m_shouldTurnRepeatNoneMode;
    MusicLogInfo *m_musicLogInfo;
    MMMusicUrlChecker *m_musicUrlChecker;
    BOOL m_shouldDelayResetCurMusicInfo;
    BOOL m_isManualPaused;
    int m_state;
}

@property(nonatomic) BOOL m_isManualPaused; // @synthesize m_isManualPaused;
@property(nonatomic) int m_state; // @synthesize m_state;
@property(nonatomic) BOOL m_shouldDelayResetCurMusicInfo; // @synthesize m_shouldDelayResetCurMusicInfo;
@property(nonatomic) BOOL m_shouldTurnRepeatNoneMode; // @synthesize m_shouldTurnRepeatNoneMode;
@property(retain, nonatomic) MusicLogInfo *m_musicLogInfo; // @synthesize m_musicLogInfo;
@property(retain, nonatomic) MMMusicInfo *m_nextMusicInfo; // @synthesize m_nextMusicInfo;
@property(retain, nonatomic) MMMusicInfo *m_prevMusicInfo; // @synthesize m_prevMusicInfo;
@property(retain, nonatomic) MMMusicListMgr *m_musicListMgr; // @synthesize m_musicListMgr;
@property(retain) MMMusicInfo *m_curMusicInfo; // @synthesize m_curMusicInfo;
- (void).cxx_destruct;
- (BOOL)isMusicIdPlayingOrWaiting:(id)arg1;
- (void)updateMusicWebUrl:(id)arg1;
- (void)updateMusicCover:(id)arg1;
- (void)updateMusicEPName:(id)arg1;
- (void)updateMusicSinger:(id)arg1;
- (void)updateMusicTitle:(id)arg1;
- (void)statNativePlayerAction:(id)arg1 scene:(unsigned long)arg2 actionType:(unsigned long)arg3;
- (void)resetMusicPlayerEntranceType;
- (void)updateMusicLogInfo;
- (void)logMusicStatAndReset;
- (void)logMusicStat;
- (void)notifyMusicPlayerRestartMusic;
- (void)notifyMusicPlayerPauseMusic;
- (void)onRemoteControlMusicShouldPlayPrevTrack;
- (void)onRemoteControlMusicShouldPlayNextTrack;
- (void)onRemoteControlMusicShouldStop;
- (void)onRemoteControlMusicShouldPlayOrPause;
- (void)onRemoteControlMusicShouldPauseByMannual:(BOOL)arg1;
- (void)onRemoteControlMusicShouldPlay;
- (id)getCurTimeList;
- (id)getCurLyricsList;
- (void)onMusicListArrayChange;
- (void)OnGetSongAlbumUrl:(id)arg1 AlbumUrl:(id)arg2;
- (void)OnGetLyrics:(id)arg1 Lyrics:(id)arg2;
- (void)onDataBuffering:(double)arg1;
- (void)onForceStopMusic;
- (void)onLevelMeterPeak:(float)arg1;
- (void)delayResetCurMusicInfo;
- (void)handlePlayerStopOrErrorEvent;
- (void)onMusicPlayStatusChanged:(unsigned int)arg1 error:(id)arg2;
- (id)getNextMusicInfo;
- (id)getPreviousMusicInfo;
- (unsigned int)indexOfMusic:(id)arg1;
- (BOOL)isLyricValid;
- (void)updateMPNowPlayingInfo:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)safeCheckMusicInfo:(id)arg1;
- (void)playWithMusicInfo:(id)arg1;
- (BOOL)isValidLowBandUrl:(id)arg1;
- (id)getMusicUrlWithMusicInfo:(id)arg1;
- (void)setMusicPlayDirection:(int)arg1;
- (id)getMusicInfoByMusicKey:(id)arg1;
- (BOOL)isMusicItemsContainsMusicKey:(id)arg1;
- (id)getArrMusicItems;
- (float)getCurMusicBufferTime;
- (float)getCurMusicBufferProgress;
- (float)getCurMusicOffset;
- (float)getCurMusicDuration;
- (unsigned int)getMusicPlayDetailState;
- (int)getMusicPlayState;
- (id)getCurMusicTitle;
- (id)getCurMusicInfo;
- (BOOL)isPaused;
- (BOOL)isWaiting;
- (BOOL)isPlaying;
- (BOOL)isIdle;
- (BOOL)stopWithMusicKey:(id)arg1;
- (void)stopPlay;
- (void)seekToTime:(float)arg1 playAuto:(BOOL)arg2;
- (void)resumePlay;
- (BOOL)isManualPaused;
- (BOOL)pausePlayManual:(BOOL)arg1 pauseDownload:(BOOL)arg2;
- (void)playNextMusic;
- (void)playPreviousMusic;
- (void)playWithMusicKey:(id)arg1;
- (void)setMusicItemList:(id)arg1;
- (void)setAndPlayMusicItem:(id)arg1;
- (void)updateMusicListBySource:(int)arg1;
- (int)getMusicListSource;
- (void)setPlayMode:(int)arg1;
- (int)getMusicPlayMode;
- (void)dealloc;
- (void)updateArrMusicItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

