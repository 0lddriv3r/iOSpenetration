//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EmoticonBoardPageWrap, EmoticonboardPageOffset;

@protocol EmoticonBoardPageCollectionControllerDelegate <NSObject>

@optional
- (void)didScrollToOffsetValue:(float)arg1;
- (void)didStopAtPage:(EmoticonBoardPageWrap *)arg1 pageOffset:(EmoticonboardPageOffset *)arg2;
@end

