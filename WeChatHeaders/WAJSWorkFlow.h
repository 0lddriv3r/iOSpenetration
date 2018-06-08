//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSNativeBufferBase.h"

@class JSContext, NSObject<OS_dispatch_queue>, WAJSCoreService;

@interface WAJSWorkFlow : WAJSNativeBufferBase
{
    WAJSCoreService *_service;
    unsigned long _workerId;
    NSObject<OS_dispatch_queue> *_workerQueue;
    JSContext *_context;
}

@property(retain, nonatomic) JSContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(nonatomic) unsigned long workerId; // @synthesize workerId=_workerId;
@property(nonatomic) __weak WAJSCoreService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)stopWorker;
- (void)sendMessage:(id)arg1;
- (void)initJSContext:(id)arg1;
- (void)sendErrorEvent:(id)arg1 stack:(id)arg2;
- (id)init:(id)arg1 workerId:(unsigned long)arg2 service:(id)arg3;

@end

