//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIButton.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString;

@interface MMTransparentButton : MMUIButton <UIGestureRecognizerDelegate>
{
    BOOL m_bScale;
    id <MMTransparentButtonDelegate> _delegate;
    struct CGPoint _m_pTouchLocation;
}

@property(nonatomic) struct CGPoint m_pTouchLocation; // @synthesize m_pTouchLocation=_m_pTouchLocation;
@property(nonatomic) __weak id <MMTransparentButtonDelegate> m_delegate; // @synthesize m_delegate=_delegate;
@property(nonatomic) BOOL m_bScale; // @synthesize m_bScale;
- (void).cxx_destruct;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)recordTouchLocationwithEvent:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

