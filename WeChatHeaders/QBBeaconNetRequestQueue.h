//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray;

@interface QBBeaconNetRequestQueue : NSObject
{
    NSLock *_queueLock;
    NSMutableArray *_runningQueue;
    NSMutableArray *_waitingQueue;
    int _maxConcurrentRequest;
}

- (void).cxx_destruct;
- (void)requestFinish:(id)arg1;
- (void)addOneRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

