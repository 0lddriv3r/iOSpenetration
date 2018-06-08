//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCTDatabase, WCTTable;

@interface WCDeviceAccountWCDB : MMObject
{
    WCTDatabase *m_db;
    WCTTable *m_tableAccount;
    WCTTable *m_tableAirKiss;
}

@property(retain, nonatomic) WCTTable *m_tableAirKiss; // @synthesize m_tableAirKiss;
@property(retain, nonatomic) WCTTable *m_tableAccount; // @synthesize m_tableAccount;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (void).cxx_destruct;
- (BOOL)insertOrUpdateInAirKissForKey:(id)arg1 WithData:(id)arg2;
- (id)getDataInAirKissForKey:(id)arg1;
- (void)delDeviceInfoInAccountForUser:(id)arg1 AndDeviceId:(id)arg2;
- (void)delDeviceInfosInAccountForUser:(id)arg1;
- (BOOL)insertOrUpdateDeviceInfoInAccount:(id)arg1;
- (id)getDeviceInfoInAccountForDID:(long long)arg1;
- (id)getDeviceInfoInAccountForMd5Str:(id)arg1;
- (id)getDeviceInfoInAccountForUser:(id)arg1 AndDeviceId:(id)arg2;
- (id)getAllDeviceInfosInAccountForUser:(id)arg1;
- (unsigned long)getCountOfDeviceInfosInAccountForUser:(id)arg1;
- (id)getAllDeviceInfosInAccount;
- (id)getDeviceBrandAccountWCDBPath;
- (BOOL)setupDB;
- (void)dealloc;
- (id)init;

@end
