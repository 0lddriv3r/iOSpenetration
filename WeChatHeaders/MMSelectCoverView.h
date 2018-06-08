//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface MMSelectCoverView : UIView
{
    UIColor *_selectedColor;
    UIColor *_cursorColor;
    float _leftLineLength;
    float _topLineLength;
    float _rightLineLength;
    float _bottomLineLength;
    float _dotRadius;
    struct CGRect _leftCursorRect;
    struct CGRect _rightCursorRect;
}

@property(nonatomic) float dotRadius; // @synthesize dotRadius=_dotRadius;
@property(nonatomic) float bottomLineLength; // @synthesize bottomLineLength=_bottomLineLength;
@property(nonatomic) float rightLineLength; // @synthesize rightLineLength=_rightLineLength;
@property(nonatomic) float topLineLength; // @synthesize topLineLength=_topLineLength;
@property(nonatomic) float leftLineLength; // @synthesize leftLineLength=_leftLineLength;
@property(retain, nonatomic) UIColor *cursorColor; // @synthesize cursorColor=_cursorColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) struct CGRect rightCursorRect; // @synthesize rightCursorRect=_rightCursorRect;
@property(nonatomic) struct CGRect leftCursorRect; // @synthesize leftCursorRect=_leftCursorRect;
- (void).cxx_destruct;
- (float)farBottom;
- (float)farTop;
- (float)farRight;
- (float)farLeft;
- (BOOL)isTouchInRightCursor:(struct CGPoint)arg1;
- (BOOL)isTouchInLeftCursor:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
