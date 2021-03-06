//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class GameCenterNavRedDot, GameIndexNav;

@interface GameCenterUserActionCell : MMUIView
{
    BOOL _bIsForeigner;
    float _redDotMoveX;
    GameIndexNav *_userActionNav;
    GameCenterNavRedDot *_redDot;
    id <GameCenterUserActionCellDelegate> _delegate;
}

@property(nonatomic) __weak id <GameCenterUserActionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onMsgCenterButtonClickedV3;
- (void)onMyProfileClicked;
- (void)onMsgCenterBtnClicked;
- (void)onGiftBtnClicked;
- (void)onSearchBtnClicked;
- (id)getBadgeNumberView:(int)arg1;
- (void)addNumberRedDot:(id)arg1 RedDotNum:(int)arg2;
- (void)addRoundRedDot:(id)arg1;
- (float)addButton:(float)arg1 ImageUrl:(id)arg2 ButtonAction:(SEL)arg3 RedDotType:(int)arg4 RedDotNum:(int)arg5 desc:(id)arg6;
- (void)addMyProfile:(float)arg1;
- (void)addBottomLine;
- (void)addButtonsV4;
- (void)layoutSubviews;
- (id)genLabelWithFontSize:(float)arg1 text:(id)arg2 textColor:(id)arg3 x:(float)arg4 y:(float)arg5 maxWidth:(float)arg6 superView:(id)arg7;
- (id)createMsgCenterItemView;
- (void)addMsgCenterButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 Data:(id)arg2 RedDot:(id)arg3 IsForeigner:(BOOL)arg4;

@end

