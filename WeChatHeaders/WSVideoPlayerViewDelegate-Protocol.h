//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WSStreamPlayerView, WSVideoModel;

@protocol WSVideoPlayerViewDelegate <NSObject>

@optional
- (void)onDelayToHideControlViews;
- (void)onShowControlViews;
- (void)onMaskPlayButtonClick:(WSVideoModel *)arg1;
- (BOOL)hasPlayAnyVideo;
- (BOOL)isInteractiveVideo;
- (WSVideoModel *)onPlayNextVideo:(BOOL)arg1 currentVideo:(WSVideoModel *)arg2;
- (BOOL)canPlayNextVideo;
- (void)onOperateShare:(WSVideoModel *)arg1;
- (void)onDelayPlayVideo;
- (BOOL)onVideoPlayEnd;
- (void)onVoiceButtonClick:(unsigned long)arg1 isMutedAfterClicked:(BOOL)arg2;
- (BOOL)isForground;
- (void)enableWebViewScroll:(BOOL)arg1;
- (void)enableFullScreen:(BOOL)arg1 orientation:(int)arg2 video:(WSStreamPlayerView *)arg3;
- (void)onVideoEvent:(NSString *)arg1 param:(NSDictionary *)arg2;
- (void)onVideoStateChange:(int)arg1;
- (void)onVolumeChange:(float)arg1;
@end

