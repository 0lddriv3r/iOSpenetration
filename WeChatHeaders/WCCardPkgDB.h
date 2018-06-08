//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCTDatabase, WCTTable;

@interface WCCardPkgDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_tableCardInfo;
    WCTTable *m_tableMsgCenter;
    WCTTable *m_tableOfflineCode;
    WCTTable *m_tableOfflineCodeInfo;
}

@property(retain, nonatomic) WCTTable *m_tableOfflineCodeInfo; // @synthesize m_tableOfflineCodeInfo;
@property(retain, nonatomic) WCTTable *m_tableOfflineCode; // @synthesize m_tableOfflineCode;
@property(retain, nonatomic) WCTTable *m_tableMsgCenter; // @synthesize m_tableMsgCenter;
@property(retain, nonatomic) WCTTable *m_tableCardInfo; // @synthesize m_tableCardInfo;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (void).cxx_destruct;
- (void)fixBugForStateFlagInCardInfoTable;
- (void)saveDatabaseVersion:(unsigned int)arg1;
- (unsigned int)getDatabaseVersion;
- (id)pathForDatabaseVersion;
- (void)CloseDB;
- (void)FixDatabaseBug;
- (BOOL)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (BOOL)runTransaction:(CDUnknownBlockType)arg1;
- (BOOL)initDB;
- (void)reloadDataBase;
- (void)dealloc;
- (id)init;
- (unsigned long)getUnshowCodeCountByCardId:(id)arg1;
- (BOOL)deleteCodesByCardId:(id)arg1;
- (BOOL)deleteShowingCodeByCardId:(id)arg1;
- (BOOL)deleteCodeByQrCardIdAndCodeId:(id)arg1 qrCodeId:(id)arg2;
- (BOOL)updateCodeStatus:(id)arg1;
- (id)getUnShowQrCodesByCardId:(id)arg1;
- (id)getQrCodeByCardId:(id)arg1;
- (id)getShowingQrcodeByCardId:(id)arg1;
- (BOOL)insertOrUpdateOfflineCodeItem:(id)arg1;
- (BOOL)deleteAllCodeConfig;
- (id)getQrCodeConfigByCardId:(id)arg1;
- (id)getAllQrCodeConfig;
- (BOOL)insertOrUpdateCodeConfigItem:(id)arg1;
- (void)updateStateFlagWithLoacalId:(id)arg1;
- (id)getAllWCCard;
- (id)getWCCardByCardID:(id)arg1;
- (id)getDynamicCards;
- (unsigned long)getDynamicCardCount;
- (id)getAllAvailableCards;
- (unsigned long)getAvailableWCCardCount;
- (unsigned long)getWCCardCount;
- (BOOL)getNeedBatchGetWCCardIdInfoList:(id)arg1 byMinUpdateTime:(unsigned long)arg2;
- (BOOL)getNextPageNeedBatchGetWCCardIdInfoList:(id)arg1 byCurMinUpdateTime:(unsigned long)arg2;
- (BOOL)getFirstPageNeedBatchGetWCCardIdInfoList:(id)arg1;
- (BOOL)getNextPageWCCardList:(id)arg1 byCurMinUpdateTime:(unsigned long)arg2;
- (BOOL)getFirstPageWCCardList:(id)arg1;
- (BOOL)deleteWCCardByLocalCardID:(unsigned long)arg1;
- (BOOL)deleteWCCardByCardID:(id)arg1;
- (BOOL)insertOrUpdateWCCard:(id)arg1;
- (BOOL)insertOrUpdateWCCardByAddCardItem:(id)arg1;
- (BOOL)setConsumedMsgRead:(id)arg1;
- (BOOL)cleanAllMsg;
- (BOOL)setAllMsgRead;
- (id)getLastMsg;
- (unsigned long)insertWCCardPkgMsg:(id)arg1 XML:(id)arg2;
- (BOOL)deleteWCCardMsgByLocalMsgID:(unsigned long)arg1;
- (id)getNextPageMsgListByCurMinUpdateTime:(unsigned long)arg1 HasSmaller:(char *)arg2;
- (id)getFirstPageMsgList;
- (id)getUnreadMsgList;
- (unsigned long)getUnreadMessageCount;
- (unsigned long)getMessageCount;

@end
