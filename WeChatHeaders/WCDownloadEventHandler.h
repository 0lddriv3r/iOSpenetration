//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtobufEventHandler.h"

@interface WCDownloadEventHandler : ProtobufEventHandler
{
}

- (void)OnProtocolConnectFail:(id)arg1;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (BOOL)decodeShouldLockForWidth:(int)arg1 height:(int)arg2;
- (void)logMd5WithRaw:(id)arg1 rawLen:(unsigned long)arg2 decryptMd5:(id)arg3 rgbaMd5:(id)arg4 urlStr:(id)arg5 decodeTips:(id)arg6;
- (id)calMd5ForBytes:(const void *)arg1 length:(unsigned long)arg2;
- (int)getIDReportSceneKeyOffset:(id)arg1;
- (void)monitorWebpPic:(BOOL)arg1 keyVector:(vector_ecc2264a *)arg2;
- (void)monitorReport:(id)arg1 connectFail:(BOOL)arg2 keyVector:(vector_ecc2264a *)arg3;

@end

