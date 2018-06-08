//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLProtocol, QBProtocolWorker;

@interface QBProtocolProxy : NSObject
{
    QBProtocolWorker *_worker;
    int _resType;
    BOOL _isQBWebViewRequest;
    unsigned int _byteLength;
    NSURLProtocol *_protocol;
}

+ (BOOL)workerClassRespondsToSelector:(SEL)arg1;
+ (BOOL)protocolRequestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)protocolCanonicalRequestForRequest:(id)arg1;
+ (id)protocolAddCustomHTTPHeader:(id)arg1;
+ (BOOL)protocolCanInitWithRequest:(id)arg1 isQBWebViewRequest:(BOOL)arg2;
+ (void)setProtocolWorkerClass:(Class)arg1;
+ (id)validURLForRequest:(id)arg1;
@property(nonatomic) __weak NSURLProtocol *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (void)protocolDidSendRequest:(id)arg1 type:(int)arg2;
- (void)protocolDidResolveDNS:(double)arg1 type:(unsigned int)arg2 address:(id)arg3;
- (void)protocolDidStopLoading;
- (id)protocolWillSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)protocolDidFailWithError:(id)arg1;
- (void)protocolDidFinishLoadingWithCached:(id)arg1;
- (void)protocolDidFinishLoading;
- (id)protocolDidReceiveData:(id)arg1;
- (BOOL)protocolDidReceiveResponse:(inout id *)arg1 error:(id *)arg2;
- (void)protocolDidStartLoading;
- (BOOL)protocolShouldStartLoading;
- (void)protocolDidInitialized:(id)arg1 resourceType:(int)arg2;

@end

