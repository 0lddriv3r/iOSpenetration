//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIGestureRecognizer, UIImage, UIView;

@protocol MultiImageScrollViewDelegate <NSObject>
- (UIImage *)imageAtPage:(unsigned long)arg1;
- (UIView *)viewAtPage:(unsigned long)arg1 frame:(struct CGRect)arg2;

@optional
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(float)arg1;
- (NSString *)imagePathAtPage:(unsigned long)arg1;
- (void)onChangePage;
- (void)multiImageScrollViewWillBeginDragging;
- (void)OnLongPressBegin:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onDoubleTap:(UIGestureRecognizer *)arg1;
- (void)onSingleTap:(UIGestureRecognizer *)arg1;
@end

