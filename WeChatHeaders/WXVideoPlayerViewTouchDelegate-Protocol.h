//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIGestureRecognizer;

@protocol WXVideoPlayerViewTouchDelegate <NSObject>

@optional
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemChangeAlpha:(float)arg1;
- (void)onWXVideoPlayerViewLongPress:(id)arg1;
- (void)onWXVideoPlayerViewSingleTap:(UIGestureRecognizer *)arg1;
@end

