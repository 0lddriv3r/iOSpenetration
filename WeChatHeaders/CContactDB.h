//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMDB;

@interface CContactDB : NSObject
{
    CMMDB *m_oMMDB;
}

- (void).cxx_destruct;
- (void)getContactQueryProperty:(struct WCTPropertyList *)arg1;
- (BOOL)isFriendExtTableExist:(id)arg1;
- (void)getFriendExtTableValue:(id)arg1 fromDBObject:(id)arg2;
- (void)getFriendTableValue:(id)arg1 fromDBObject:(id)arg2;
- (unsigned long)GetFriendMetaFlag:(id)arg1;
- (unsigned long)GetLastUpdateTimeOfUser:(id)arg1;
- (BOOL)deleteContact:(id)arg1;
- (BOOL)getAllRemarkList:(id)arg1 listType:(unsigned long)arg2;
- (BOOL)getAllUserName:(id)arg1;
- (BOOL)getAllContactNoExtInfoList:(id)arg1 listType:(unsigned long)arg2;
- (BOOL)getAllContactList:(id)arg1 listType:(unsigned long)arg2;
- (BOOL)getContactList:(id)arg1 listType:(unsigned long)arg2 limit:(int)arg3;
- (unsigned long)getContactCount;
- (void)getFriendAndExtTableValue:(id)arg1 fromDBContact:(id)arg2 DBContactExt:(id)arg3;
- (BOOL)loadContactExtInfo:(id)arg1;
- (id)getContact:(id)arg1;
- (BOOL)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (BOOL)runTransaction:(CDUnknownBlockType)arg1;
- (void)initDB:(id)arg1;
- (id)init;

@end

