//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary, PublicWifiDB;

@interface PublicWifiCache : MMObject
{
    NSMutableDictionary *_notRegisterDict;
    PublicWifiDB *_db;
}

+ (id)getInstance;
@property(retain, nonatomic) PublicWifiDB *db; // @synthesize db=_db;
@property(retain, nonatomic) NSMutableDictionary *notRegisterDict; // @synthesize notRegisterDict=_notRegisterDict;
- (void).cxx_destruct;
- (id)getAPCheckConfig;
- (void)saveAPCheckConfig:(id)arg1;
- (BOOL)isApCheckNotRegisterIn12hSinceLastTryWithMac:(id)arg1;
- (void)saveApcheckNotRegisterTime:(double)arg1 mac:(id)arg2;
- (id)retrivalApAuthForSsid:(id)arg1;
- (BOOL)removeApBase:(id)arg1;
- (id)retrivalApBaseForMac:(id)arg1;
- (BOOL)saveApBase:(id)arg1;
- (void)cleanCache;
- (void)closeDB;
- (void)initDB;
- (BOOL)shouldUserConfirm;
- (void)userConfirm;
- (id)convertAPBase:(id)arg1;
- (id)init;
- (void)dealloc;

@end

