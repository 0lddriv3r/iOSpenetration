//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface Q2DMapReachability : NSObject
{
    BOOL reachableOnWWAN;
    struct __SCNetworkReachability *reachabilityRef;
    NSObject<OS_dispatch_queue> *reachabilitySerialQueue;
    CDUnknownBlockType reachableBlock;
    CDUnknownBlockType unreachableBlock;
    id reachabilityObject;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
+ (id)reachabilityWithHostname:(id)arg1;
@property(retain, nonatomic) id reachabilityObject; // @synthesize reachabilityObject;
@property(copy, nonatomic) CDUnknownBlockType unreachableBlock; // @synthesize unreachableBlock;
@property(copy, nonatomic) CDUnknownBlockType reachableBlock; // @synthesize reachableBlock;
@property(nonatomic) BOOL reachableOnWWAN; // @synthesize reachableOnWWAN;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue; // @synthesize reachabilitySerialQueue;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef;
- (void).cxx_destruct;
- (id)description;
- (void)reachabilityChanged:(unsigned int)arg1;
- (id)currentReachabilityFlags;
- (id)currentReachabilityString;
- (unsigned int)reachabilityFlags;
- (int)currentReachabilityStatus;
- (BOOL)isInterventionRequired;
- (BOOL)isConnectionOnDemand;
- (BOOL)connectionRequired;
- (BOOL)isConnectionRequired;
- (BOOL)isReachableViaWiFi;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachable;
- (BOOL)isReachableWithFlags:(unsigned int)arg1;
- (void)stopNotifier;
- (BOOL)startNotifier;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;

@end

