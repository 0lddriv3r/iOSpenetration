//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol WCPayGPLaunchViewControllerDelegate <NSObject>
- (void)onWCPayGPLaunchVCClickOrderHistoryEntry;
- (void)launchActivityAARequestWithActivityTheme:(NSString *)arg1 totalAmount:(unsigned long long)arg2 payerItems:(NSArray *)arg3;
- (void)launchCommonAARequestWithMemberCount:(unsigned long)arg1 perMemberAmount:(unsigned long long)arg2 activityTheme:(NSString *)arg3 payerUsernameArray:(NSArray *)arg4;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyVCWithSelectedContact:(NSArray *)arg1 withUserPayAmountDict:(NSDictionary *)arg2;
- (void)onWCPayGPLaunchVCClickSelectMemberBtn:(NSArray *)arg1 withIgnoreContact:(NSArray *)arg2 withSelectMemberSource:(unsigned int)arg3;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyMode;
- (void)onWCPayGPLaunchViewControllerCancel;
@end

