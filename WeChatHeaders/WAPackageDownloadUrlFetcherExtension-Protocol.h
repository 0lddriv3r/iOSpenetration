//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WAInfoData;

@protocol WAPackageDownloadUrlFetcherExtension <NSObject>

@optional
- (void)onPackageDownloadUrlFetchFailWithErrCode:(int)arg1 forInfoData:(WAInfoData *)arg2;
- (void)onPackageDownloadUrlFetchSuccessWithDownloadUrl:(NSString *)arg1 patchUrl:(NSString *)arg2 forInfoData:(WAInfoData *)arg3;
@end

