//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMWebImageViewDelegate.h"

@class GameIndex4FeedsBlock, NSString;

@interface GameCenterFeedsCardView : MMUIView <MMWebImageViewDelegate>
{
    GameIndex4FeedsBlock *_feedsData;
    int _sourceScene;
    NSString *_moduleTitle;
    BOOL _bShouldUseHvAppInfo;
    unsigned long _uiArea;
    id <GameCenterFeedsCardViewDelegate><GameCenter3GameViewDelegate> _delegate;
}

+ (float)heightForData:(id)arg1 ModuleTitle:(id)arg2 Index:(int)arg3;
@property(nonatomic) __weak id <GameCenterFeedsCardViewDelegate><GameCenter3GameViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long uiArea; // @synthesize uiArea=_uiArea;
- (void).cxx_destruct;
- (void)onNoPlayGameRowClicked:(id)arg1;
- (void)onGameListRowClicked:(id)arg1;
- (void)onDownloadButtonClicked:(id)arg1;
- (void)onGameListMoreGameClicked:(id)arg1;
- (void)onGameTplMiddleJump:(id)arg1;
- (void)onCornerClicked:(id)arg1;
- (id)getCommonTileDescPicView:(id)arg1 Desc:(id)arg2 PicUrlList:(id)arg3 PicSize:(struct CGSize)arg4 NeedPlayIcon:(BOOL)arg5;
- (void)addVideoOrLiveTplPicCornerView:(id)arg1 IconView:(id)arg2 Desc:(id)arg3;
- (void)addVideoPlayIcon:(id)arg1;
- (id)getGameTplView:(id)arg1;
- (id)getGameDownloadButton:(id)arg1 ShouldUseHvAppInfo:(BOOL)arg2 UiPosition:(int)arg3;
- (id)getGameTagListView:(id)arg1 MaxWidth:(float)arg2;
- (id)getGameHeaderView:(id)arg1;
- (id)createNoPlayGameRowView:(id)arg1;
- (id)getNoPlayGameTplView:(id)arg1;
- (id)getFriendPlayListView:(id)arg1 FriendPlayDesc:(id)arg2 FriendDescFont:(id)arg3 FontColor:(id)arg4 HeadIconSize:(float)arg5 MaxWith:(float)arg6;
- (id)getVerticalSplitView:(float)arg1 OriginY:(float)arg2;
- (id)getGameListOneGameView:(id)arg1 Rank:(int)arg2;
- (id)getGameListMoreGameView:(id)arg1;
- (id)getGameListView:(id)arg1;
- (id)getCreateTopicView:(id)arg1;
- (id)getFindMoreGameView:(id)arg1;
- (id)getCornerView:(id)arg1 MaxWidth:(float)arg2 IsLeft:(BOOL)arg3;
- (id)getCornerView:(id)arg1 RightCorner:(id)arg2;
- (void)setupView;
- (id)initWithData:(id)arg1 ModuleTitle:(id)arg2 Index:(int)arg3 SourceScene:(int)arg4 Delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
