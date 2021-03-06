//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIViewController, WAAppTaskExtInfo, WAPermissionResult, WAWebViewController;

@protocol WAWebViewDelegate <NSObject>

@optional
- (void)webviewDidShow404ErrorView:(WAWebViewController *)arg1;
- (void)remoteDomEvent:(NSString *)arg1 webViewID:(unsigned long)arg2;
- (BOOL)isRemoteDebugMode;
- (WAAppTaskExtInfo *)getTaskExtInfo;
- (void)triggerTaskRouteToHomePage:(WAWebViewController *)arg1;
- (unsigned int)getWebViewDepthInStack;
- (WAWebViewController *)getLastWebViewFrom:(WAWebViewController *)arg1;
- (WAWebViewController *)getFirstWebViewFrom:(WAWebViewController *)arg1;
- (void)publishPostMessage:(NSDictionary *)arg1 fromWebView:(WAWebViewController *)arg2;
- (BOOL)hasPermissionToShowActionSheetMenuType:(unsigned long)arg1;
- (BOOL)checkWebViewRunMode:(NSString *)arg1;
- (void)checkUserAuthWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 failHandler:(void (^)(NSString *))arg3 fromWebView:(WAWebViewController *)arg4;
- (WAPermissionResult *)getPermissionResultWithJSAPI:(NSString *)arg1 fromWebView:(WAWebViewController *)arg2;
- (BOOL)isForceEnableClose;
- (void)firstPageWebViewDidSweepBack:(WAWebViewController *)arg1;
- (BOOL)webViewIsSameDepthWithFirstPage:(WAWebViewController *)arg1;
- (BOOL)webViewIsFirstPage:(WAWebViewController *)arg1;
- (void)webViewClickExitButton:(WAWebViewController *)arg1;
- (void)webViewBeforeClickReturnButton:(WAWebViewController *)arg1;
- (void)killAppFrom:(WAWebViewController *)arg1 animate:(BOOL)arg2;
- (void)enterBackgroundFrom:(WAWebViewController *)arg1 mode:(int)arg2 animate:(BOOL)arg3 completion:(void (^)(void))arg4;
- (WAWebViewController *)popWebViewCount:(long)arg1 fromWebView:(WAWebViewController *)arg2;
- (void)popToFirstWebViewFrom:(WAWebViewController *)arg1 animated:(BOOL)arg2;
- (void)webViewDidSwitchTab:(WAWebViewController *)arg1;
- (WAWebViewController *)getPreviousWebViewFromWebView:(WAWebViewController *)arg1;
- (WAWebViewController *)getTabChildWebViewWithRelativeURL:(NSString *)arg1 fromWebView:(WAWebViewController *)arg2;
- (void)webViewOnPageReload:(WAWebViewController *)arg1 withRouteInfo:(NSDictionary *)arg2;
- (void)webViewInjectScriptFail:(WAWebViewController *)arg1;
- (void)webViewDidTerminateInContentProcess:(WAWebViewController *)arg1;
- (void)webViewOnBeforeEveluateIndexData:(WAWebViewController *)arg1;
- (void)webView:(WAWebViewController *)arg1 didPresent:(UIViewController *)arg2;
- (void)webViewDidPush:(WAWebViewController *)arg1;
- (void)webViewDidBeDismissed:(WAWebViewController *)arg1;
- (void)webViewDidBePoped:(WAWebViewController *)arg1;
- (void)webViewDidDisappear:(WAWebViewController *)arg1;
- (void)webViewDidAppear:(WAWebViewController *)arg1;
@end

