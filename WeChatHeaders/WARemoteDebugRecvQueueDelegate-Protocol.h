//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WARemoteDebug_DebugMessage;

@protocol WARemoteDebugRecvQueueDelegate <NSObject>
- (void)consoleLog:(NSString *)arg1 isSendout:(BOOL)arg2;
- (void)recvAccumulateCountReachThreshold;
- (void)recvHandleMessage:(WARemoteDebug_DebugMessage *)arg1;
- (void)recvSyncMessagesFromMinSeq:(unsigned long)arg1 toMaxSeq:(unsigned long)arg2;
@end

