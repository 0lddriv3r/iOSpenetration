//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WAPermissionResult, WAWebViewPluginScheduler, WxaExternalInfo;

@protocol WAWebViewJSLogicDelegate <NSObject>

@optional
- (void)remoteDomEvent:(NSString *)arg1 webViewID:(unsigned long)arg2;
- (BOOL)isPreloadWebView;
- (WxaExternalInfo *)getWxaExternalInfo;
- (BOOL)isOpenDebugAndVConsole;
- (unsigned long)getDebugModeType;
- (unsigned long long)getAppVersion;
- (void)checkUserAuthWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 failHandler:(void (^)(NSString *))arg3;
- (BOOL)checkRunModeOnWebview:(NSString *)arg1;
- (WAPermissionResult *)getPermissionResultWithJSAPI:(NSString *)arg1;
- (WAWebViewPluginScheduler *)getPluginScheduler;
- (NSString *)getCurrentAppId;
@end
