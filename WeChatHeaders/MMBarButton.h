//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface MMBarButton : UIButton
{
    int iContentWidth;
    int iContentHight;
    int iOriginWidth;
    int iOriginHeight;
    int eBarButtonStyle;
}

@property(nonatomic) int eBarButtonStyle; // @synthesize eBarButtonStyle;
@property(nonatomic) int iOriginHeight; // @synthesize iOriginHeight;
@property(nonatomic) int iOriginWidth; // @synthesize iOriginWidth;
@property(nonatomic) int iContentHight; // @synthesize iContentHight;
@property(nonatomic) int iContentWidth; // @synthesize iContentWidth;
- (void)tintColorDidChange;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

