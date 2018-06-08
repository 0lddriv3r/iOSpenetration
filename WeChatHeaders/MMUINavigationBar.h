//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationBar.h"

#import "IUiUtilExt.h"

@class CAGradientLayer, NSString, UIView;

@interface MMUINavigationBar : UINavigationBar <IUiUtilExt>
{
    UIView *_barBackShadowView;
    CAGradientLayer *_shadowLayer;
}

@property(retain, nonatomic) CAGradientLayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) UIView *barBackShadowView; // @synthesize barBackShadowView=_barBackShadowView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)darkerNavigationBar;
- (void)adjustBarBackShadowView;
- (void)didRotate:(id)arg1;
- (void)onStatusBarFrameChanged;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(int)arg2;
- (void)setBarTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
