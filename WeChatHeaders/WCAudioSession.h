//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCAudioSession : NSObject
{
    BOOL _m_otherPlayingBeforeActive;
    id <WCAudioSessionDelegate> _m_delegate;
}

+ (id)shareInstance;
@property(nonatomic) BOOL m_otherPlayingBeforeActive; // @synthesize m_otherPlayingBeforeActive=_m_otherPlayingBeforeActive;
@property(nonatomic) __weak id <WCAudioSessionDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (BOOL)tryActiveAudioSession;
- (void)handleRouteChange:(id)arg1;
- (unsigned int)currentCategoryId;
- (float)getOutputVolume;
- (void)activePlayAndRecordDuckOthers;
- (void)activePlaybackDuckOthers;
- (void)activePlaybackMixWithOthers;
- (void)activeMixWithOtherAudio;
- (BOOL)isOtherAudioPlaying;
- (unsigned int)getCurrentAudioMode;
- (void)enableBluetoothInput;
- (BOOL)setSpeaker:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setSpeaker:(BOOL)arg1;
- (void)reportSetCategoryError:(id)arg1;
- (BOOL)setCategroy:(unsigned int)arg1 mode:(id)arg2 options:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)setMode:(id)arg1 error:(id *)arg2;
- (BOOL)setCategroy:(unsigned int)arg1 defaultToSpeaker:(BOOL)arg2 mixWithOthers:(BOOL)arg3;
- (BOOL)setCategroy:(unsigned int)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)setCategroy:(unsigned int)arg1 options:(unsigned int)arg2;
- (BOOL)setCategroy:(unsigned int)arg1;
- (BOOL)setActive:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setActive:(BOOL)arg1;
- (void)restart;
- (void)updateDelegate:(id)arg1;
- (BOOL)otherPlayingBeforeActive;
- (void)dealloc;

@end

