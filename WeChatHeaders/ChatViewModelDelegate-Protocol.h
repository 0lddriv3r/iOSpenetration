//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, MMTableView;

@protocol ChatViewModelDelegate <NSObject>
- (MMTableView *)getTableView;
- (void)updateTableContentOffsetAnimated:(BOOL)arg1 OffsetDelta:(float)arg2;
- (struct CGRect)getInputToolViewFrame;
- (struct CGRect)getNodeRectInScreen:(unsigned long)arg1;
- (void)reloadNodeWithMessageWrap:(CMessageWrap *)arg1;
@end

