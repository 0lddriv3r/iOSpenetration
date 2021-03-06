//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

#import "WSVideoPlayerViewDelegate.h"

@class MMBrandHeadImageView, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UIView, WSStreamPlayerView, WSVideoModel;

@interface WSVideoFlowTableViewCell : MMTableViewCell <WSVideoPlayerViewDelegate>
{
    UIView *_sourceContainerView;
    MMBrandHeadImageView *_sourceHeadImgView;
    MMUILabel *_sourceLabel;
    UIImageView *_sourceArrow;
    UIButton *_shareButton;
    MMUILabel *_titleLabel;
    MMUILabel *_countLabel;
    NSMutableArray *_arrTagButton;
    UIView *_divLine;
    UIView *_shareButtonDivLine;
    UIView *_videoMaskView;
    UIView *_videoTopMaskView;
    UIView *_videoBottomMaskView;
    BOOL _needIPhoneXLayout;
    id <WSVideoFlowTableViewCellDelegate> _delegate;
    WSStreamPlayerView *_videoPlayerView;
    WSVideoModel *_videoModel;
}

+ (float)HeightForBottomTagPanel:(id)arg1;
+ (float)HeightBottomCountLabel:(id)arg1;
+ (float)HeightForDescLabel:(id)arg1 maxWidth:(float)arg2;
+ (float)HeightForBottomPanel:(id)arg1 maxWidth:(float)arg2;
+ (float)HeightForVideoModel:(id)arg1 maxWidth:(float)arg2;
+ (float)EstimatedCellHeight;
+ (float)HeightForVideoPlayerView;
+ (float)OffsetYForVideoPlayerView;
@property(nonatomic) BOOL needIPhoneXLayout; // @synthesize needIPhoneXLayout=_needIPhoneXLayout;
@property(retain, nonatomic) WSVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(readonly, nonatomic) WSStreamPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(nonatomic) __weak id <WSVideoFlowTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)weakenCell:(BOOL)arg1 animated:(BOOL)arg2;
- (void)resetSurroundMask;
- (void)weakenSurrounds:(BOOL)arg1;
- (void)onMaskPlayButtonClick:(id)arg1;
- (void)onDelayToHideControlViews;
- (void)onShowControlViews;
- (BOOL)hasPlayAnyVideo;
- (BOOL)isInteractiveVideo;
- (id)onPlayNextVideo:(BOOL)arg1 currentVideo:(id)arg2;
- (BOOL)canPlayNextVideo;
- (void)onOperateShare:(id)arg1;
- (void)onDelayPlayVideo;
- (BOOL)onVideoPlayEnd;
- (void)onVideoStateChange:(int)arg1;
- (void)enableFullScreen:(BOOL)arg1 orientation:(int)arg2 video:(id)arg3;
- (void)resumePlayerView:(id)arg1;
- (void)removePlayerView;
- (void)layoutDivLine;
- (void)layoutMaskView;
- (void)layoutTag;
- (void)layoutCountLabel;
- (void)layoutDescLabel;
- (void)layoutVideoPlayerView;
- (void)layoutShareDivLine;
- (void)layoutShareButton;
- (void)layoutSource;
- (void)layoutViews;
- (void)layoutSubviews;
- (void)onTapSurroundings:(id)arg1;
- (void)onTapMaskView:(id)arg1;
- (void)delayTapTag:(id)arg1;
- (void)onTapTag:(id)arg1;
- (void)onTapTitle:(id)arg1;
- (void)onTapSource:(id)arg1;
- (void)onShare:(id)arg1;
- (void)playVideoForce:(BOOL)arg1;
- (void)forcePlayVideo;
- (void)playVideo;
- (void)showAsPreparePlay;
- (void)updateVideoThumb;
- (void)setVideoInfo:(id)arg1;
- (void)reset;
- (id)getPlayCountLabelText;
- (void)initDivLine;
- (void)initMaskView;
- (void)initCountLabel;
- (void)initTagButton;
- (id)genTagButton;
- (void)initDescLabel;
- (void)initShareDivLine;
- (void)initShareButton;
- (void)initSource;
- (void)initView;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

