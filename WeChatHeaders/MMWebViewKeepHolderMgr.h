//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class MMTimer, MMWebViewController, NSMutableArray, NSMutableDictionary, NSString;

@interface MMWebViewKeepHolderMgr : MMService <MMService>
{
    MMWebViewController *_webViewVCForNewMainFrameBanner;
    MMWebViewController *_webViewVCForArticleReadingBanner;
    NSString *_musicBarUrl;
    NSMutableArray *_dpArrOpenedWebview;
    NSMutableDictionary *_dicBackgroundWebviewTask;
    NSMutableArray *_arrTaskOrder;
    MMTimer *_checkTimer;
    BOOL _bIsDelayLoading;
}

- (void).cxx_destruct;
- (BOOL)onServiceMemoryWarning;
- (void)dealloc;
- (id)init;
- (void)updateCurrentBackToChatState;
- (void)clickPushKeepHoldWebview;
- (void)cancelHoldWebViewVC:(id)arg1;
- (id)getKeepHoldWebViewVCForNewMainFrameBanner;
- (id)getKeepHoldWebViewVCTitleForNewMainFrameBanner;
- (void)keepHoldWebViewVCForNewMainFrameBanner:(id)arg1;
- (void)createNewWebviewIfNoCache;
- (void)dp_sendJSEventToAllWebView:(id)arg1 Param:(id)arg2 AppID:(id)arg3 Host:(id)arg4;
- (void)dp_deleteWebView:(id)arg1;
- (void)dp_addWebViewAsWeak:(id)arg1;
- (void)onCheckBackgroundTaskTimeOut;
- (void)cleanAllBackgroundTask;
- (id)getCurrentAllPresentingBackgroundVC;
- (void)deleteBackgroundTaskForKey:(id)arg1;
- (id)getBackgroundTaskForKey:(id)arg1;
- (BOOL)addBackgroundTask:(id)arg1 forKey:(id)arg2 IsPresented:(BOOL)arg3;
- (void)setDelayLoading:(BOOL)arg1;
- (BOOL)hasDelayLoadingTask;
- (void)cancelHoldWebViewVCForReadingBanner;
- (id)getKeepHoldMusicBarUrl;
- (id)getKeepHoldWebViewVCForReadingBanner;
- (void)keepHoldWebViewVCForReadingBanner:(id)arg1 musicBarUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

