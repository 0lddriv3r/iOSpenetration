//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol WXGBackupBasicLogicDelegate <NSObject>
- (BOOL)onBasicLogicSendData:(NSData *)arg1;

@optional
- (void)onBasicLogicNotifyCanReconnect;
- (void)onBasicLogicAlert:(unsigned int)arg1;
- (void)onBasicProgresssCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBasicLogicNotifyEvent:(unsigned int)arg1;
@end

