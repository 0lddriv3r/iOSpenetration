//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseAudioPlayer.h"

@interface SilkAudioPlayer : BaseAudioPlayer
{
    BOOL m_isNeedRestartMusic;
    BOOL m_isNeedRestartAudioTalk;
    double m_smapleRate;
}

@property(nonatomic) BOOL m_isNeedRestartMusic; // @synthesize m_isNeedRestartMusic;
@property(nonatomic) BOOL m_isNeedRestartAudioTalk; // @synthesize m_isNeedRestartAudioTalk;
- (BOOL)ifSilkAudioPlayerAgcOn;
- (void)prepareBuffers;
- (void)setSmapleRate:(double)arg1;
- (void)setDataFormat;
- (void)openSilkFile:(id)arg1;
- (void)autostop;
- (void)stop;
- (int)getCurrentTimeMs;
- (void)replay;
- (void)setProgress:(unsigned long)arg1;
- (void)playFromOffsetms:(unsigned long)arg1;
- (void)play;
- (BOOL)preparePlayWithSilkFile:(id)arg1;
- (BOOL)preparePlayNotNotify;
- (void)setDelegate:(id)arg1;
- (id)init;

@end

