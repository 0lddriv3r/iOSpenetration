//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXSearchJSLogicImpl.h"

#import "YYWebViewDelegate.h"

@class BrandArticleSearchLogic, NSString, NSURLRequest;

@interface BrandArticleSearchPageBaseLogic : WXSearchJSLogicImpl <YYWebViewDelegate>
{
    BrandArticleSearchLogic *m_searchLogic;
}

- (void).cxx_destruct;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 isMainFrame:(BOOL)arg4;
- (id)currentImplement;
- (void)showWebview:(id)arg1;
- (float)fontSizeRatio;
- (id)currentLanguage;
- (unsigned long)searchVersion;
- (unsigned long)searchScene;
- (void)dealloc;
- (id)initWithSearchLogic:(id)arg1 webView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end
