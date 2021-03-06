//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, CAShapeLayer, NSString, UILabel;

@interface WCCircularProgressView : UIView
{
    float _progressStepForFinishingAnimation;
    double _lastTappedTime;
    BOOL _enable;
    float _progress;
    id <WCCircularProgressViewDelegate> _delegate;
    NSString *_successTipText;
    CAShapeLayer *_unfinishedShapeLayer;
    CAShapeLayer *_finishedShapeLayer;
    CAShapeLayer *_arrowLayer;
    CAShapeLayer *_tickLayer;
    UILabel *_successTipsLabel;
    CADisplayLink *_displayLink;
    float _realProgress;
    float _radius;
}

@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(nonatomic) float realProgress; // @synthesize realProgress=_realProgress;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UILabel *successTipsLabel; // @synthesize successTipsLabel=_successTipsLabel;
@property(retain, nonatomic) CAShapeLayer *tickLayer; // @synthesize tickLayer=_tickLayer;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) CAShapeLayer *finishedShapeLayer; // @synthesize finishedShapeLayer=_finishedShapeLayer;
@property(retain, nonatomic) CAShapeLayer *unfinishedShapeLayer; // @synthesize unfinishedShapeLayer=_unfinishedShapeLayer;
@property(copy, nonatomic) NSString *successTipText; // @synthesize successTipText=_successTipText;
@property(nonatomic) BOOL enable; // @synthesize enable=_enable;
@property(nonatomic) __weak id <WCCircularProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)stopFinishAnimation;
- (void)startFinishAnimation;
- (void)updateAnimation;
- (void)updateTextTipWithProgress:(float)arg1;
- (void)updateTickWithProgress:(float)arg1;
- (void)updateArrowWithProgress:(float)arg1;
- (void)updateCircularWithProgress:(float)arg1 animated:(BOOL)arg2;
- (void)viewDidTapped:(id)arg1;
- (void)applyFinishAnimation;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

