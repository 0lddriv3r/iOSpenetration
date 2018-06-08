//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseAudioPlayer.h"

@class NSString;

@interface AQAudioPlayer : BaseAudioPlayer
{
    BOOL mIsBindMuteSwitch;
    BOOL mIsNeedRestartMusic;
    NSString *mCachedTag;
}

@property(nonatomic) BOOL needRestartMusic; // @synthesize needRestartMusic=mIsNeedRestartMusic;
@property(copy, nonatomic) NSString *mCachedTag; // @synthesize mCachedTag;
- (void).cxx_destruct;
- (void)autostop;
- (void)stop;
- (void)replay;
- (void)play;
- (BOOL)preparePlayWithAudioFile:(id)arg1 cachedForTag:(id)arg2;
- (void)updateSession;
- (void)setBindMuteSwitch:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)prepareBuffers;
- (void)setMagicCookieForPlayBack;
- (void)setDataFormat;
- (void)openAudioFile:(id)arg1;

@end

