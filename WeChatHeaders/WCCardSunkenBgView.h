//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIColor;

@interface WCCardSunkenBgView : MMUIView
{
    float _vSideWidth;
    float _hSideWidth;
    float _sunkenRadius;
    UIColor *_sunkenColor;
}

@property(retain, nonatomic) UIColor *sunkenColor; // @synthesize sunkenColor=_sunkenColor;
@property(nonatomic) float sunkenRadius; // @synthesize sunkenRadius=_sunkenRadius;
@property(nonatomic) float hSideWidth; // @synthesize hSideWidth=_hSideWidth;
@property(nonatomic) float vSideWidth; // @synthesize vSideWidth=_vSideWidth;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

