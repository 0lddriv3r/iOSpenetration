//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, NSString;

@protocol VideoStreamPlayerViewModeDelegate <NSObject>
- (BOOL)isStreamingPlayMode;
- (void)OnSnsVideoChanged;
- (void)onDownloadSuccess;
- (void)ShouldUpdateThumbImage:(NSString *)arg1;
- (void)onDownloadProgress:(unsigned long)arg1;
- (void)onDownloadVideoReturnCode:(long)arg1;
- (void)OnVideoDownloadErrorExpired:(BOOL)arg1;
- (void)checkPlayerState;
- (double)getVideoCurrentSeconde;
- (double)getVideoBufferedTime;
- (void)tryToBeginPlayVideo;
- (void)tryToPauseAndStartLoading;
- (AVPlayerItem *)getAVPlayerItem;
- (AVPlayer *)getAVPlayer;
@end

