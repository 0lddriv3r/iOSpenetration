//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WAWebViewController;

@protocol WAPageFlowReportExtention <NSObject>

@optional
- (void)EXReport_onAppExit:(unsigned long)arg1 onPage:(WAWebViewController *)arg2;
- (void)EXReport_onBackOnPage:(WAWebViewController *)arg1 toPage:(WAWebViewController *)arg2;
- (void)EXReport_onTargetToNativaPage:(NSString *)arg1;
@end

