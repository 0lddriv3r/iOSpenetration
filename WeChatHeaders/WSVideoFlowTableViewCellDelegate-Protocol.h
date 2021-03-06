//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WSStreamPlayerView, WSVideoFlowTableViewCell, WSVideoModel, WSVideoTagInfo;

@protocol WSVideoFlowTableViewCellDelegate <NSObject>

@optional
- (void)onPlayerViewMaskPlayButtonClick:(WSVideoFlowTableViewCell *)arg1;
- (void)onDelayToHideControlViews:(WSVideoFlowTableViewCell *)arg1;
- (void)onShowControlViews:(WSVideoFlowTableViewCell *)arg1;
- (BOOL)hasPlayAnyVideo;
- (BOOL)isInteractiveCell:(WSVideoFlowTableViewCell *)arg1;
- (unsigned long)getCachedPlayTimeForVideo:(WSVideoModel *)arg1;
- (WSVideoModel *)onTryPlayNext:(BOOL)arg1 currentVideo:(WSVideoModel *)arg2;
- (BOOL)canLoadNextWithCurrent:(WSVideoFlowTableViewCell *)arg1;
- (void)onRealBeginPlay:(WSVideoFlowTableViewCell *)arg1 autoPlay:(BOOL)arg2;
- (void)onClickCellTag:(WSVideoTagInfo *)arg1 sender:(WSVideoFlowTableViewCell *)arg2;
- (void)onClickCellSource:(WSVideoModel *)arg1;
- (void)onClickCellTitle:(WSVideoModel *)arg1;
- (void)onClickShare:(WSVideoModel *)arg1;
- (BOOL)onVideoPlayEnd:(WSStreamPlayerView *)arg1;
- (void)onTapSurroundings:(WSVideoFlowTableViewCell *)arg1;
- (void)onTapMaskView:(WSVideoFlowTableViewCell *)arg1;
- (void)enableFullScreen:(BOOL)arg1 orientation:(int)arg2 cell:(WSVideoFlowTableViewCell *)arg3 video:(WSStreamPlayerView *)arg4;
@end

