//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol WAMainFrameTaskBarLogicDelegate <NSObject>

@optional
- (void)onDeleteToEmptyTaskBar;
- (void)onEndWhyPullMe;
- (void)onReceiveWhyPullMeTick;
- (void)onReceiveVisibleTick;
- (void)onTaskBarDataUpdated;
@end
