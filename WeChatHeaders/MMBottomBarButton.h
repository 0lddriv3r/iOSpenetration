//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface MMBottomBarButton : UIButton
{
    BOOL _extendTouchArea;
    int _barButtonStyle;
}

@property(nonatomic) int barButtonStyle; // @synthesize barButtonStyle=_barButtonStyle;
@property(nonatomic) BOOL extendTouchArea; // @synthesize extendTouchArea=_extendTouchArea;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

