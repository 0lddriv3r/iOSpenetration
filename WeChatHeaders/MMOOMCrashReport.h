//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MonoServiceLogicExt.h"

@class NSString;

@interface MMOOMCrashReport : NSObject <MonoServiceLogicExt>
{
}

+ (void)reportWeAppCrashScene;
+ (void)reportWeAppFoomScene;
+ (void)reportFoomScene;
+ (void)reportIDKEYByTypeOS:(unsigned int)arg1;
+ (void)reportIDKEYByType:(unsigned int)arg1;
+ (void)userHasWatch:(BOOL)arg1;
+ (id)lastDumpFileName;
+ (void)setDumpFileName:(id)arg1;
+ (void)isForegroundMainThreadBlock:(BOOL)arg1;
+ (id)lastTimeFOOMScene;
+ (BOOL)isLastTimeFOOM;
+ (BOOL)isOSReboot;
+ (unsigned long long)getSystemLaunchTimeStamp;
+ (BOOL)isOSChange;
+ (BOOL)isAppChange;
+ (void)enterForeground;
+ (void)willSuspend;
+ (void)enterBackground;
+ (void)registerExtension;
+ (void)setWeAppName:(id)arg1;
+ (void)setScene:(id)arg1;
+ (void)setFlag:(id)arg1;
+ (void)checkAndReport;
+ (void)checkRebootType;
+ (void)initialize;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

