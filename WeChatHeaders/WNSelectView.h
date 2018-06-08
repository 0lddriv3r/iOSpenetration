//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIGestureRecognizerDelegate.h"

@class MMMagnifiterView, MMSelectCoverView, MMTableView, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, WNArticleDataController, WNArticleSelectedData;

@interface WNSelectView : MMUIView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *m_oPanGestureRecognizer;
    UITapGestureRecognizer *m_tapGestureRecognizer;
    MMSelectCoverView *_coverView;
    BOOL _bTouchLeft;
    BOOL _bTouchRight;
    float _startOffsetY;
    WNArticleSelectedData *_selectedData;
    BOOL _bSelecting;
    id <WNSelectViewDelegate> delegate;
    MMTableView *_tableView;
    WNArticleDataController *_dataController;
    MMMagnifiterView *_magnifiterView;
}

@property(retain, nonatomic) MMMagnifiterView *magnifiterView; // @synthesize magnifiterView=_magnifiterView;
@property(nonatomic) __weak WNArticleDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) BOOL bSelecting; // @synthesize bSelecting=_bSelecting;
@property(nonatomic) __weak id <WNSelectViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSelectRightPosTextView:(id)arg1 range:(id)arg2 end:(BOOL)arg3;
- (void)setSelectLeftPosTextView:(id)arg1 range:(id)arg2 end:(BOOL)arg3;
- (void)setSelectBottomPos:(float)arg1;
- (void)setSelectTopPos:(float)arg1;
- (void)updateCoverViewLeft:(BOOL)arg1 Right:(BOOL)arg2;
- (void)onPanAction:(id)arg1;
- (void)onTapAction:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onPaste:(id)arg1;
- (void)onCut:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)setUnBold:(id)arg1;
- (void)setBold:(id)arg1;
- (void)hideMenuItems;
- (void)showMenuItems;
- (id)magnifiterView:(float)arg1;
- (void)removeMaginfierView;
- (void)showCoverView:(id)arg1;
- (void)showCoverAll;
- (void)cancelSelect;
- (void)didReloadView;
- (void)hideView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
