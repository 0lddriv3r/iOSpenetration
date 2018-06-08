//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIColor, UIImageView, UIView, WCVideoCropImageSliderTouch;

@interface SightLocalViewSliderMaskView : UIControl
{
    BOOL _startFlagOnTouch;
    BOOL _endFlagOnTouch;
    BOOL _isInLargeMode;
    id <SightLocalViewSliderMaskViewDelegate> _delegate;
    UIImageView *_startFlag;
    UIImageView *_endFlag;
    UIView *_playFlag;
    UIColor *_lineColor;
    WCVideoCropImageSliderTouch *_lastTouch;
    double _totalDuration;
    double _minDuration;
    struct CGRect _validFrame;
}

@property(nonatomic) BOOL isInLargeMode; // @synthesize isInLargeMode=_isInLargeMode;
@property(retain, nonatomic) WCVideoCropImageSliderTouch *lastTouch; // @synthesize lastTouch=_lastTouch;
@property(nonatomic, getter=isEndFlagOnTouch) BOOL endFlagOnTouch; // @synthesize endFlagOnTouch=_endFlagOnTouch;
@property(nonatomic, getter=isStartFlagOnTouch) BOOL startFlagOnTouch; // @synthesize startFlagOnTouch=_startFlagOnTouch;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) UIView *playFlag; // @synthesize playFlag=_playFlag;
@property(retain, nonatomic) UIImageView *endFlag; // @synthesize endFlag=_endFlag;
@property(retain, nonatomic) UIImageView *startFlag; // @synthesize startFlag=_startFlag;
@property(nonatomic) double minDuration; // @synthesize minDuration=_minDuration;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) struct CGRect validFrame; // @synthesize validFrame=_validFrame;
@property(nonatomic) __weak id <SightLocalViewSliderMaskViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshThumbImagesCollectionViewContentInset;
- (void)playFlagDidStopMovingAtStartFlag:(BOOL)arg1;
- (void)positionOfPlayFlagDidChange;
- (void)switchToLargeMode:(BOOL)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)extendedFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setStartFlagPosition:(float)arg1 andEndFlagPosition:(float)arg2;
- (void)stopMovingPlayFlag;
- (void)movePlayFlagFromPosition:(float)arg1 toPosition:(float)arg2 withinTime:(double)arg3;
- (float)positionOfEndFlag;
- (float)positionOfPlayFlag;
- (float)positionOfStartFlag;
- (float)minimumRange;
- (void)drawRect:(struct CGRect)arg1;
- (void)initView;

@end
