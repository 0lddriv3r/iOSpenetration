//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WAVideoRequestTask;

@protocol WAVideoRequestTaskDelegate <NSObject>
- (NSString *)getScheme;
- (void)didFailLoadingWithTask:(WAVideoRequestTask *)arg1 WithError:(int)arg2;
- (void)didFinishLoadingWithTask:(WAVideoRequestTask *)arg1;
- (void)didReceiveVideoDataWithTask:(WAVideoRequestTask *)arg1;
- (void)task:(WAVideoRequestTask *)arg1 didReceiveVideoLength:(unsigned int)arg2 mimeType:(NSString *)arg3;
@end
