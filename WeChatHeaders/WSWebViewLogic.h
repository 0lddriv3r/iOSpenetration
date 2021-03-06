//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXSearchJSLogicImpl.h"

#import "YYWebViewDelegate.h"

@class NSString, NSURLRequest;

@interface WSWebViewLogic : WXSearchJSLogicImpl <YYWebViewDelegate>
{
}

- (void)webViewContentProcessDidTerminate:(id)arg1;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 isMainFrame:(BOOL)arg4;
- (void)showWebview:(id)arg1;
- (unsigned long)curVersion;
- (unsigned long)curSearchScene;
- (float)curFontRatio;
- (id)curLang;
- (void)onWebViewTerminal:(id)arg1;
- (void)onWebViewFailLoad:(id)arg1 withError:(id)arg2;
- (void)onWebViewFinishedLoad:(id)arg1;
- (void)onWebViewStartLoad:(id)arg1;
- (BOOL)onWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)loadFile:(id)arg1;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

