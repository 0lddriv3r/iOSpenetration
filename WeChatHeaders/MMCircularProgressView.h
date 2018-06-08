//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMTimer, NSArray, UIColor, UIImage, UIImageView;

@interface MMCircularProgressView : UIView
{
    BOOL _clockwise;
    UIColor *_fillColor;
    UIColor *_progressColor;
    UIImage *_progressImage;
    UIImage *_borderImage;
    float _edgeRatio;
    float _innerPadding;
    UIImageView *_borderImageView;
    NSArray *_steps;
    float _animationStep;
    MMTimer *_animationTimer;
    double _max;
    double _min;
    double _current;
}

@property(retain, nonatomic) MMTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) float animationStep; // @synthesize animationStep=_animationStep;
@property(nonatomic) BOOL clockwise; // @synthesize clockwise=_clockwise;
@property(nonatomic) double current; // @synthesize current=_current;
@property(nonatomic) double min; // @synthesize min=_min;
@property(nonatomic) double max; // @synthesize max=_max;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) UIImageView *borderImageView; // @synthesize borderImageView=_borderImageView;
@property(nonatomic) float innerPadding; // @synthesize innerPadding=_innerPadding;
@property(nonatomic) float edgeRatio; // @synthesize edgeRatio=_edgeRatio;
@property(retain, nonatomic) UIImage *borderImage; // @synthesize borderImage=_borderImage;
@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateAnimation;
- (void)stopAnimation;
- (void)startAnimationWithDuration:(float)arg1;
- (BOOL)orientation;
- (double)maxValue;
- (double)currentValue;
- (double)previousStepMaxValue;
- (double)currentStepMaxValue;
- (void)setIncrementalSteps:(id)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setCurrentValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)incrementBy:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

