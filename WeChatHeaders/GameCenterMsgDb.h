//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCTDatabase, WCTTable;

@interface GameCenterMsgDb : NSObject
{
    WCTDatabase *_db;
    WCTTable *_table;
}

@property(retain, nonatomic) WCTTable *table; // @synthesize table=_table;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (id)getMsgNeedMergeWith:(id)arg1;
- (struct WCTExpr)buildWhereCondition:(int)arg1 lastLocalId:(int)arg2 onlyUnRead:(BOOL)arg3;
- (id)getDbPath;
- (void)closeDbBeforeInit;
- (BOOL)isMsgExistBySvrMsgId:(id)arg1;
- (BOOL)createTable;
- (id)getAllMsg;
- (BOOL)setMsgCenterAllRead;
- (BOOL)setMsgCenterOneMsgRead:(unsigned long)arg1;
- (id)getMsgListByPage:(int)arg1 lastLocalId:(int)arg2 maxCount:(int)arg3;
- (id)getMsgListByPageForJsApi:(int)arg1 lastLocalId:(int)arg2 onlyUnRead:(BOOL)arg3 maxCount:(int)arg4;
- (id)getMsgCenterReadListBefore:(unsigned long)arg1;
- (id)getMsgCenterUnreadList;
- (BOOL)deleteMsgBeforeTimeStamp:(unsigned long)arg1;
- (BOOL)deleteMsgByLocalId:(int)arg1;
- (BOOL)deleteAllMsg;
- (id)getMsgByLocalId:(int)arg1;
- (unsigned long)saveMsgToDB:(id)arg1;
- (BOOL)initDb;

@end

