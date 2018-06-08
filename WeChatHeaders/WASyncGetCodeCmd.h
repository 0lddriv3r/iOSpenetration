//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WASyncBaseCmd.h"

#import "PBCoding.h"

@class NSString, WAInfoData;

@interface WASyncGetCodeCmd : WASyncBaseCmd <PBCoding>
{
    BOOL isEncrypt;
    BOOL isRetry;
    NSString *username;
    NSString *appid;
    unsigned int cmdType;
    unsigned long squence;
    unsigned int networkType;
    unsigned long maxRetryCount;
    unsigned long retryInterval;
    unsigned long appVersion;
    NSString *md5;
    unsigned long currentRetryCount;
    unsigned long lastGetCodeTime;
    unsigned long reportId;
    WAInfoData *_infoData;
}

+ (void)initialize;
@property(retain, nonatomic) WAInfoData *infoData; // @synthesize infoData=_infoData;
- (void)setReportId:(unsigned long)arg1;
- (unsigned long)reportId;
@property(nonatomic) unsigned long lastGetCodeTime; // @synthesize lastGetCodeTime;
@property(nonatomic) unsigned long currentRetryCount; // @synthesize currentRetryCount;
@property(nonatomic) BOOL isRetry; // @synthesize isRetry;
@property(copy, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) unsigned long appVersion; // @synthesize appVersion;
@property(nonatomic) BOOL isEncrypt; // @synthesize isEncrypt;
@property(nonatomic) unsigned long retryInterval; // @synthesize retryInterval;
@property(nonatomic) unsigned long maxRetryCount; // @synthesize maxRetryCount;
@property(nonatomic) unsigned int networkType; // @synthesize networkType;
- (void)setSquence:(unsigned long)arg1;
- (unsigned long)squence;
- (void)setCmdType:(unsigned int)arg1;
- (unsigned int)cmdType;
- (void)setAppid:(id)arg1;
- (id)appid;
- (void)setUsername:(id)arg1;
- (id)username;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)getDescribableNetworkType;
- (BOOL)canRetryNow;
- (BOOL)isAppInfoDataFromThisGetCodeCmd:(id)arg1;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

