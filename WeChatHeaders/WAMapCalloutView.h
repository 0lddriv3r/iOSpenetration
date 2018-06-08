//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIColor;

@interface WAMapCalloutView : UIView
{
    UIButton *_btn;
    UIColor *_bgColor;
    float _radius;
    float _margin;
    UIColor *_shadowColor;
    float _shadowOpacity;
    float _shadowOffsetX;
    float _shadowOffsetY;
}

@property(nonatomic) float shadowOffsetY; // @synthesize shadowOffsetY=_shadowOffsetY;
@property(nonatomic) float shadowOffsetX; // @synthesize shadowOffsetX=_shadowOffsetX;
@property(nonatomic) float shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) float margin; // @synthesize margin=_margin;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)initSubView;
- (id)initWithParam:(id)arg1;
- (void)getDarwPath:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
