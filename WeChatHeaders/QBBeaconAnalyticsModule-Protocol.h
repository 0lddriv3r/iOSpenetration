//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class QBBeaconModuleStrategy;

@protocol QBBeaconAnalyticsModule
- (BOOL)isEnabled;
- (int)moduleKey;

@optional
- (QBBeaconModuleStrategy *)moduleStrategy;
- (void)setModuleStrategy:(QBBeaconModuleStrategy *)arg1;
- (BOOL)uploadModuleHistoryData;
- (BOOL)checkAndEnable;
- (void)appEnterBack;
- (void)appResumed;
- (void)appStarted;
@end

