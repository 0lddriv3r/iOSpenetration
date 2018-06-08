//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, QBBeaconLocalStrategy;

@interface QBBeaconAnalytics : NSObject
{
    BOOL analyticsEnabled;
    QBBeaconLocalStrategy *localStrategy;
    NSMutableArray *anaModules;
    int workType;
    int status;
    BOOL hasLocalDB;
    BOOL hasSyncServer;
    int serverSyncDelay;
    int currentStatus;
}

+ (id)getDefualtAnalytics;
@property(nonatomic) int currentStatus; // @synthesize currentStatus;
@property(nonatomic) int workType; // @synthesize workType;
@property(retain, nonatomic) NSMutableArray *anaModules; // @synthesize anaModules;
@property(retain) QBBeaconLocalStrategy *localStrategy; // @synthesize localStrategy;
@property(nonatomic) BOOL hasSyncServer; // @synthesize hasSyncServer;
@property(nonatomic) BOOL hasLocalDB; // @synthesize hasLocalDB;
@property(nonatomic) int serverSyncDelay; // @synthesize serverSyncDelay;
@property(nonatomic) int status; // @synthesize status;
@property(nonatomic) BOOL analyticsEnabled; // @synthesize analyticsEnabled;
- (void).cxx_destruct;
- (void)setSessionId:(id)arg1;
- (id)sessionId;
- (void)setAesKeyEncrypt:(id)arg1;
- (id)aesKeyEncrypt;
- (void)setAesKey:(id)arg1;
- (id)aesKey;
- (void)reachabilityChanged:(id)arg1;
- (void)appEnterBackground;
- (void)appResumed;
- (BOOL)isBackground;
- (void)registObserver;
- (void)apnEventNotifyListen;
- (BOOL)fetchCommonStrategyFormDB;
- (void)asyncStrategyQuery;
- (void)initStrategyConfig;
- (BOOL)initLocalService;
- (BOOL)enableAnlytics:(int)arg1 uin:(id)arg2 gatewayIP:(id)arg3;
- (id)init;

@end
