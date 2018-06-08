//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WARemoteDebugSendQueue.h"

@class CADisplayLink, NSMutableArray;

@interface WARemoteDebugAsyncSendQueue : WARemoteDebugSendQueue
{
    double _sendTimestamp;
    CADisplayLink *_sendTimer;
    unsigned long _sendSeq;
    unsigned long _prevSendSeq;
    NSMutableArray *_msgQueue;
    NSMutableArray *_pkgQueue;
    unsigned long _resendCountForSvrBlock;
    unsigned long _resendCountForSvrError;
}

- (void).cxx_destruct;
- (void)destorySendTimer;
- (void)initSendTimer;
- (unsigned long)getIntervalSendCount;
- (void)updatePrintInfo;
- (void)sendOrResendPkg;
- (void)resendTryAgain;
- (void)handleSendDebugMsgResp:(id)arg1 uuid:(id)arg2;
- (void)msgQueue2PkgQueue;
- (void)handleQueue;
- (void)sendDebugMsgList:(id)arg1;
- (id)init;
- (void)dealloc;

@end

