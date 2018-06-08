//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMLockCircle, MMLockOverlayView, NSMutableArray, NSMutableDictionary;

@interface MMPatternLockView : UIView
{
    id <MMPatternLockViewDelegate> _delegate;
    MMLockCircle *_selectedCell;
    MMLockOverlayView *_overLay;
    int _oldCellIndex;
    int _currentCellIndex;
    NSMutableDictionary *_drawnLines;
    NSMutableArray *_finalLines;
    NSMutableArray *_cellsInOrder;
}

+ (float)heightOfLockView;
@property(retain, nonatomic) NSMutableArray *cellsInOrder; // @synthesize cellsInOrder=_cellsInOrder;
@property(retain, nonatomic) NSMutableArray *finalLines; // @synthesize finalLines=_finalLines;
@property(retain, nonatomic) NSMutableDictionary *drawnLines; // @synthesize drawnLines=_drawnLines;
@property(nonatomic) int currentCellIndex; // @synthesize currentCellIndex=_currentCellIndex;
@property(nonatomic) int oldCellIndex; // @synthesize oldCellIndex=_oldCellIndex;
@property(retain, nonatomic) MMLockOverlayView *overLay; // @synthesize overLay=_overLay;
@property(retain, nonatomic) MMLockCircle *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(nonatomic) __weak id <MMPatternLockViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)highlightSelectCell:(id)arg1;
- (void)handleCircleSkip;
- (void)handlePanAtPoint:(struct CGPoint)arg1;
- (void)gestured:(id)arg1;
- (void)addGestureRecognizer;
- (void)endPattern;
- (id)uniqueLineIdForLineJoiningPoint:(int)arg1 AndPoint:(int)arg2;
- (id)cellAtIndex:(int)arg1;
- (int)indexForCell:(id)arg1;
- (int)indexForPoint:(struct CGPoint)arg1;
- (void)onPwdCorrect;
- (void)onPwdError;
- (void)initData;
- (void)resetView;
- (void)calculateCirclePosition;
- (void)setUpTheView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

