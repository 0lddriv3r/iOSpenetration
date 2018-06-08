//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface WCTuringMgr : MMService <MMService, MMKernelExt>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _bEnable;
}

- (void).cxx_destruct;
- (id)constructReportContent;
- (void)reportAllRecord;
- (void)onAuthOK;
- (void)start:(unsigned int)arg1 action:(unsigned int)arg2 duration:(float)arg3;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
