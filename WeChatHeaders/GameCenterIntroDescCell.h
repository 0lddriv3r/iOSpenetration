//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class NSString, UIButton, UILabel;

@interface GameCenterIntroDescCell : MMTableViewCell
{
    UILabel *_descLabel;
    UIButton *_foldButton;
    NSString *_descContent;
    BOOL _isFolded;
    id <GameCenterIntroDescCellDelegate> _delegate;
}

+ (float)heightForCellWithDesc:(id)arg1 isFolded:(BOOL)arg2;
+ (float)heightForLabel:(id)arg1 isFolded:(BOOL)arg2;
@property(nonatomic) __weak id <GameCenterIntroDescCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)shouldShowFoldButton:(id)arg1;
- (void)buttonClicked;
- (void)layoutContent;
- (void)reloadData;
- (void)initializeSubview;
- (void)updateWithDesc:(id)arg1 isFolded:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

