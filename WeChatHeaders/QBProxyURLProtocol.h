//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

#import "QBNetworkDelegate.h"

@class NSString, QBDNSQueryItem, QBNetwork, QBProtocolProxy;

@interface QBProxyURLProtocol : NSURLProtocol <QBNetworkDelegate>
{
    int _directReasonType;
    BOOL _stopLoading;
    int _resourceType;
    QBProtocolProxy *_protocolProxy;
    QBDNSQueryItem *_currentQueryItem;
    BOOL _isTBSInnerRequest;
    BOOL _isHTMLRespnse;
    BOOL _hadProceJs;
    BOOL _hadFindFirstFlag;
    unsigned char _FindInsertPostionStatus;
    char *_firstTag;
    unsigned int _firstTagPos;
    BOOL _firstTagFound;
    BOOL _isWKType;
    NSString *_originPOSTURLString;
    QBNetwork *_network;
}

+ (void)getSystemThreads;
+ (id)toInjectScriptTags;
+ (void)removeAllFrameInfo;
+ (void)removeFrameInfoWithAddress:(id)arg1;
+ (BOOL)isFrameSrcForInjectWithURLString:(id)arg1;
+ (BOOL)isFrameSrcForRedirectWithURLString:(id)arg1;
+ (void)addFrameInfoWithAddress:(id)arg1 withURLString:(id)arg2;
+ (BOOL)isValidCachedResponse:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)isTBSInnerURL:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)getCurrentMainURL;
+ (void)setCurrentMainURL:(id)arg1;
+ (void)startProxyWithWorker:(Class)arg1;
@property(retain, nonatomic) QBNetwork *network; // @synthesize network=_network;
- (void).cxx_destruct;
- (id)qbNetworkOriginHost:(id)arg1;
- (void)qbNetwork:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)qbNetwork:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (struct __SecTrust *)newServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (id)qbNetwork:(id)arg1 willCacheResponse:(id)arg2;
- (id)qbNetwork:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)qbNetwork:(id)arg1 didFailWithError:(id)arg2;
- (void)qbNetworkDidFinishLoading:(id)arg1;
- (void)qbNetwork:(id)arg1 didReceiveData:(id)arg2;
- (void)sendRspToWebView:(id)arg1;
- (void)qbNetwork:(id)arg1 didReceiveResponse:(id)arg2;
- (void)ifNeedNotfiyJsGetCookieResponse:(id)arg1;
- (BOOL)isNeedSpecialRedirectedProcessByHttpResponseHeaders:(id)arg1;
- (void)sendRspToWebViewForRedirectWithLocation:(id)arg1;
- (BOOL)isNeedProcRedirectForLess_9_2_IOS;
- (id)injectScriptToData:(id)arg1;
- (void)recordRspContentType:(id)arg1;
- (BOOL)returnCacheDataFor304:(unsigned int)arg1;
- (BOOL)isValidateConditionalRequest;
- (BOOL)canLoadCacheData;
- (id)cachedURLResponseIfPossible;
- (void)dealloc;
- (void)mttStopLoading;
- (void)stopLoading;
- (void)_doSendRequest:(id)arg1 directType:(int)arg2;
- (void)_doSendRequestWarpper:(id)arg1;
- (id)_dnsQueryItem:(id)arg1 cached:(BOOL)arg2;
- (void)_sendRequestDirect:(int)arg1;
- (void)mttStartLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

