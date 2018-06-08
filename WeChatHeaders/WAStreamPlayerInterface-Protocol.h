//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor, UIImage;

@protocol WAStreamPlayerInterface <NSObject>
@property(nonatomic) BOOL loop;
@property(nonatomic) BOOL enablePageGesture;
@property(nonatomic) BOOL needUpdateEvent;
@property(copy, nonatomic) NSString *userData;
@property(nonatomic) BOOL autoPlay;
@property(nonatomic) BOOL showDanmu;
@property(nonatomic) unsigned long videoId;
@property(nonatomic) BOOL customCache;
@property(nonatomic) __weak id <MMVideoPlayerViewDelegate> videoDelagate;
@property(nonatomic) int orientation;
- (BOOL)isPlaying;
- (void)setMuted:(BOOL)arg1;
- (void)setPlayBackRate:(float)arg1;
- (int)pauseCount;
- (void)pauseTemp:(BOOL)arg1;
- (void)pausePlayAndLoading;
- (UIImage *)getCurrentSnapshot;
- (void)setDuration:(float)arg1;
- (BOOL)isFullScreen;
- (void)setObjectFit:(int)arg1;
- (void)setDanmuList:(NSArray *)arg1;
- (void)sendDanmu:(NSString *)arg1 color:(UIColor *)arg2;
- (unsigned long)getControlsMask;
- (void)setControls:(unsigned long)arg1;
- (void)disableScroll:(BOOL)arg1;
- (void)setVideoFrame:(struct CGRect)arg1;
- (void)enableFullScreen:(BOOL)arg1;
- (void)seek:(unsigned long)arg1;
- (void)stop;
- (void)pause;
- (void)play:(BOOL)arg1;
- (void)setVideoThumb:(NSString *)arg1;
- (void)setVideoPath:(NSString *)arg1 initialTime:(unsigned long)arg2;
- (id)initWithThumb:(NSString *)arg1 frame:(struct CGRect)arg2;
@end
