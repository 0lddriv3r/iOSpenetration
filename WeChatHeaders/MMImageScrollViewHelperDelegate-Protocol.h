//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIGestureRecognizer, UIScrollView, UIView;

@protocol MMImageScrollViewHelperDelegate <NSObject>

@optional
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(nonatomic) float maximumZoomScale;
@property(nonatomic) float minimumZoomScale;
@property(nonatomic) float zoomScale;
@property(nonatomic) struct CGRect frame;
- (void)zoomToRect:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)setZoomScale:(float)arg1 animated:(BOOL)arg2;
- (void)removeGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)addGestureRecognizer:(UIGestureRecognizer *)arg1;
- (BOOL)bBanDoubleTap;
- (void)onDoubleTap:(UIGestureRecognizer *)arg1;
- (void)onSingleTap:(UIGestureRecognizer *)arg1;
- (UIScrollView *)getScrollView;
- (UIView *)viewForZooming;
@end

