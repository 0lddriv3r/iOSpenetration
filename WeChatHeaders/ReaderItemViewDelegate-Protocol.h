//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol ReaderItemViewDelegate <NSObject>
- (UIImage *)cacheImageForCover:(NSString *)arg1;
- (void)onReaderItemDidLoadCoverImage:(unsigned long)arg1 coverImage:(UIImage *)arg2 cover:(NSString *)arg3;
- (void)onReaderItemLongPress:(unsigned long)arg1;
- (void)onReaderItemClick:(unsigned long)arg1;
- (void)onReaderItemBeginTouch:(unsigned long)arg1;
@end

