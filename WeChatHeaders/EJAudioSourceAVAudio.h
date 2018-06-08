//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"
#import "EJAudioSource.h"

@class AVAudioPlayer, NSObject<EJAudioSourceDelegate>, NSString;

@interface EJAudioSourceAVAudio : NSObject <EJAudioSource, AVAudioPlayerDelegate>
{
    NSString *path;
    AVAudioPlayer *player;
    NSObject<EJAudioSourceDelegate> *delegate;
    float _duration;
}

@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) NSObject<EJAudioSourceDelegate> *delegate; // @synthesize delegate;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
@property(nonatomic) float currentTime;
- (void)setPlaybackRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)setLooping:(BOOL)arg1;
- (void)pause;
- (void)play;
- (void)dealloc;
- (id)initWithPath:(id)arg1 fileSystem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

