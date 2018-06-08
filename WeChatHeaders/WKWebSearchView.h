//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YYWKWebView.h"

#import "WebSearchInterface.h"
#import "YYWebViewInterface.h"

@class NSMutableArray, NSString, NSURLRequest, UIScrollView;

@interface WKWebSearchView : YYWKWebView <YYWebViewInterface, WebSearchInterface>
{
    BOOL _isSnsContactPage;
    NSString *_keyword;
    NSMutableArray *_keywordStack;
    int _context;
    NSString *_navTitle;
    NSString *_subSessionId;
    unsigned long long _bizType;
}

@property(retain, nonatomic) NSString *subSessionId; // @synthesize subSessionId=_subSessionId;
@property(nonatomic) BOOL isSnsContactPage; // @synthesize isSnsContactPage=_isSnsContactPage;
@property(retain, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(nonatomic) int context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *keywordStack; // @synthesize keywordStack=_keywordStack;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (void)loadRequest:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL allowsBackForwardNavigationGestures;
@property(nonatomic) BOOL allowsInlineMediaPlayback;
@property(readonly, nonatomic, getter=canGoBack) BOOL canGoBack;
@property(readonly, nonatomic, getter=canGoForward) BOOL canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
@property(nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property(readonly, nonatomic) NSURLRequest *request;
@property(nonatomic) BOOL scalesPageToFit;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate;

@end

