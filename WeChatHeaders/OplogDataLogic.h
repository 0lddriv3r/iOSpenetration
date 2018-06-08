//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMDB, NSMutableArray, NSRecursiveLock;

@interface OplogDataLogic : NSObject
{
    unsigned long m_oplogStartRowID;
    unsigned long m_oplogItemID;
    BOOL m_bNeedContinue;
    BOOL m_bDBEnd;
    NSMutableArray *m_arrOplogs;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
}

@property BOOL m_bNeedContinue; // @synthesize m_bNeedContinue;
- (void).cxx_destruct;
- (unsigned long)setFailOplog:(id)arg1;
- (void)deleteOplog:(id)arg1;
- (id)loadOplogFromDBlimit:(int)arg1;
- (void)checkNeedContiue;
- (void)filterByMD5;
- (id)getFromDBOplog:(id)arg1;
- (void)loadOplogData:(unsigned long)arg1;
- (BOOL)InsertOplog:(unsigned long)arg1 Oplog:(id)arg2;
- (id)initWithDB:(id)arg1 lock:(id)arg2;

@end
