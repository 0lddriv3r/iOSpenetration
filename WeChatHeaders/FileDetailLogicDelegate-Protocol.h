//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@protocol FileDetailLogicDelegate <NSObject>
- (UIViewController *)getCurrentViewController;
- (void)onCanShareToFriendByButton;
- (void)onRevoked;
- (void)onDownloadFilePartLen:(unsigned long)arg1 TotalLen:(unsigned long long)arg2;
- (void)onDownloadFileSuccess;
- (void)onDownloadFileFail:(BOOL)arg1;
@end
