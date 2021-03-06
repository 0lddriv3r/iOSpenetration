//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCTDatabase, WCTTable;

@interface OpLogDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
}

- (void).cxx_destruct;
- (BOOL)DeleteOplogInDB:(unsigned long)arg1;
- (unsigned long)GetOpLogCount;
- (id)GetOplogsAfterOplogId:(unsigned long)arg1 limit:(int)arg2;
- (BOOL)InsertOplogInDB:(id)arg1;
- (void)CloseDB;
- (BOOL)ConfigWithDir:(id)arg1;
- (void)dealloc;

@end

