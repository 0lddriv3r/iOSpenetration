//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSMutableArray, NSString, UIColor, UIGestureRecognizer, UIImageView, UIView;

@interface WCCardMultiMenuCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    UIView *_menuContentView;
    UIView *_actualContentView;
    UIGestureRecognizer *_panGestureRecognizer;
    float _initialTouchPositionX;
    BOOL _shouldDisplayContextMenuView;
    BOOL _contextMenuHidden;
    BOOL _shouldDisplayRightSwipeTips;
    UIImageView *_copyedBackgroundView;
    BOOL _bIsNeedUpdateMenu;
    BOOL _contextMenuEnabled;
    NSIndexPath *_indexPath;
    NSMutableArray *_arrMenuItems;
    UIColor *_menuBackgroundColor;
    CDUnknownBlockType _editAction;
}

@property(copy, nonatomic) CDUnknownBlockType editAction; // @synthesize editAction=_editAction;
@property(retain, nonatomic) UIColor *menuBackgroundColor; // @synthesize menuBackgroundColor=_menuBackgroundColor;
@property(nonatomic) BOOL contextMenuEnabled; // @synthesize contextMenuEnabled=_contextMenuEnabled;
@property(retain, nonatomic) NSMutableArray *arrMenuItems; // @synthesize arrMenuItems=_arrMenuItems;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (float)getCurrentWidth;
- (void)showRightSwipeTips;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)animation;
- (void)resetActionContentView;
- (void)setMenuOptionsViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)onClearBackgroundView;
- (id)contentView;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (void)updateMenuView;
- (void)onDeleteButtonClicked:(id)arg1;
- (void)onGiftButtonClicked:(id)arg1;
- (void)handlePan:(id)arg1;
- (BOOL)isMenuHidden;
- (BOOL)isPointInMenu:(struct CGPoint)arg1;
- (void)hideMenuOptionsAnimated:(BOOL)arg1;
- (void)forceHideMenuOptionsAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

