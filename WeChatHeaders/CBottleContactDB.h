//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMDB;

@interface CBottleContactDB : NSObject
{
    CMMDB *m_oMMDB;
}

- (void).cxx_destruct;
- (void)saveUserImage:(id)arg1;
- (void)setDBBottleConact:(id)arg1 fromObject:(id)arg2 isSetUserName:(BOOL)arg3 vecProperty:(struct WCTPropertyList *)arg4;
- (void)getBottleContact:(id)arg1 fromDBObject:(id)arg2;
- (void)fillQueryProperty:(struct WCTPropertyList *)arg1;
- (int)GetBottleContactCount;
- (BOOL)updateContact:(id)arg1;
- (BOOL)deleteContact:(id)arg1;
- (BOOL)addContact:(id)arg1;
- (BOOL)getAllContactList:(id)arg1;
- (id)getContact:(id)arg1;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;

@end

