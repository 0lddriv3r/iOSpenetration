//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class GameRecommendData;

@interface GameCenterTodayRecommendView : MMUIView
{
    GameRecommendData *_recommendData;
    id <GameCenterTodayRecommendViewDelegate> _delegate;
}

@property(nonatomic) __weak id <GameCenterTodayRecommendViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onBgBtnClicked:(id)arg1;
- (id)genLabelWithFontSize:(float)arg1 text:(id)arg2 textColor:(id)arg3 x:(float)arg4 y:(float)arg5 maxWidth:(float)arg6 superView:(id)arg7;
- (id)getDesc:(id)arg1;
- (id)getTitle:(id)arg1;
- (id)getIconUrl:(id)arg1;
- (id)gameViewWithWidth:(float)arg1 game:(id)arg2;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1 recommendData:(id)arg2;

@end
