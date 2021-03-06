//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMTimer, NSMutableSet, NSRecursiveLock, NewContactDB, OpLogDB, WCTDatabase, WCTTable;

@interface CMMDB : NSObject
{
    NSRecursiveLock *m_lockMMDB;
    NSMutableSet *m_setMessageCreatedTable;
    NSMutableSet *m_setMessageExtCreatedTable;
    OpLogDB *m_oplogWcdb;
    MMTimer *m_backupTimer;
    BOOL m_checkCorruption;
    WCTDatabase *m_db;
    NewContactDB *m_contactDB;
    WCTTable *m_tableContact;
    WCTTable *m_tableContactExt;
    WCTTable *m_tableContactMeta;
    WCTTable *m_tableRevokeMsg;
    WCTTable *m_tableEmoticon;
    WCTTable *m_tableEmoticonUpload;
    WCTTable *m_tableEmoticonDownload;
    WCTTable *m_tableEmoticonPackage;
    WCTTable *m_tableBottle;
    WCTTable *m_tableBottleContact;
    WCTTable *m_tableMassSendContact;
    WCTTable *_m_tableQQContact;
    WCTTable *_m_tableMessageBizExt;
}

+ (Class)getClassFromMessageTableName:(id)arg1;
+ (id)md5StringFromUserName:(id)arg1;
+ (id)helloMessageTableName:(id)arg1;
+ (id)messageExtTableName:(id)arg1;
+ (id)messageTableName:(id)arg1;
+ (id)dbPathWithDocDir:(id)arg1 userName:(id)arg2;
@property(retain) WCTTable *m_tableMessageBizExt; // @synthesize m_tableMessageBizExt=_m_tableMessageBizExt;
@property(retain) WCTTable *m_tableQQContact; // @synthesize m_tableQQContact=_m_tableQQContact;
@property(retain, nonatomic) OpLogDB *m_oplogWcdb; // @synthesize m_oplogWcdb;
@property(retain) WCTTable *m_tableMassSendContact; // @synthesize m_tableMassSendContact;
@property(retain) WCTTable *m_tableBottleContact; // @synthesize m_tableBottleContact;
@property(retain) WCTTable *m_tableBottle; // @synthesize m_tableBottle;
@property(retain) WCTTable *m_tableEmoticonPackage; // @synthesize m_tableEmoticonPackage;
@property(retain) WCTTable *m_tableEmoticonDownload; // @synthesize m_tableEmoticonDownload;
@property(retain) WCTTable *m_tableEmoticonUpload; // @synthesize m_tableEmoticonUpload;
@property(retain) WCTTable *m_tableEmoticon; // @synthesize m_tableEmoticon;
@property(retain) WCTTable *m_tableRevokeMsg; // @synthesize m_tableRevokeMsg;
@property(retain) WCTTable *m_tableContactMeta; // @synthesize m_tableContactMeta;
@property(retain) WCTTable *m_tableContactExt; // @synthesize m_tableContactExt;
@property(retain) WCTTable *m_tableContact; // @synthesize m_tableContact;
@property(retain) NewContactDB *m_contactDB; // @synthesize m_contactDB;
@property(retain) WCTDatabase *m_db; // @synthesize m_db;
- (void).cxx_destruct;
- (void)clearMessageExtCreatedTableCache;
- (void)removeMessageExtCreatedTableCache:(id)arg1;
- (void)addMessageExtCreatedTableCache:(id)arg1;
- (BOOL)isMessageExtTableCreated:(id)arg1;
- (void)clearMessageCreatedTableCache;
- (void)removeMessageCreatedTableCache:(id)arg1;
- (void)addMessageCreatedTableCache:(id)arg1;
- (BOOL)isMessageTableCreated:(id)arg1;
- (void)setupMessageCreatedTableCache;
- (void)CreateWCPayMessageBizExtTable;
- (void)CreateNewWCPayBizExtTable:(unsigned long)arg1;
- (id)GetNewWCPayBizExtTable:(unsigned long)arg1;
- (id)GetHelloMessageTable:(id)arg1;
- (BOOL)CreateHelloMessageTable:(id)arg1;
- (void)emptyTrashTable;
- (void)autoEmptyTrashTable;
- (void)TrashMessageAndExtTables:(id)arg1;
- (void)TrashMessageAndExtTable:(id)arg1;
- (void)ClearMessageAndExtCreatedTableCache;
- (void)DropMessageExtTable:(id)arg1;
- (id)GetMessageExtTable:(id)arg1;
- (BOOL)CreateMessageExtTable:(id)arg1;
- (void)DropMessageTable:(id)arg1;
- (id)GetMessageTable:(id)arg1;
- (BOOL)CreateMessageTable:(id)arg1;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (void)createOtherTable;
- (void)createBottleTable;
- (void)createEmoticonTable;
- (void)createMessagesTable;
- (void)createContactTable;
- (void)createTables;
- (void)clearTables;
- (void)closeDBBeforeInit;
- (void)onTransactionRollback;
- (void)DropEmoticonDownloadTable;
- (BOOL)IsEmoticonPackageTableExist;
- (id)dbPaths;
- (id)dbPath;
- (BOOL)rollbackTransaction;
- (BOOL)commitTransaction;
- (BOOL)beginTransaction;
- (BOOL)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (BOOL)runTransaction:(CDUnknownBlockType)arg1;
- (void)CloseAndPreventOtherThreadsInBlock:(CDUnknownBlockType)arg1;
- (void)Close;
- (void)InitMMDB:(id)arg1 UsrName:(id)arg2 NewUser:(char *)arg3;
- (void)dealloc;
- (id)init;
- (BOOL)DeleteMassSendContact:(id)arg1;
- (id)GetAllMassSendContact;
- (BOOL)DeleteBottle:(unsigned long)arg1;
- (id)GetAllBottle:(const struct WCTPropertyList *)arg1;
- (id)GetBottleByLocalID:(unsigned long)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (unsigned long)GetServerIDInBottleByLocalID:(unsigned long)arg1;
- (unsigned long)GetLocalIDInBottleByBottleID:(id)arg1;
- (BOOL)UpdateBottle:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 byLocalId:(unsigned long)arg3;
- (unsigned long)InsertBottle:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (BOOL)DeleteBottleContact:(id)arg1;
- (unsigned long)GetCountOfBottleContact;
- (id)GetAllBottleContact:(const struct WCTPropertyList *)arg1;
- (id)GetBottleContact:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (BOOL)UpdateBottleContact:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 byUserName:(id)arg3;
- (BOOL)InsertBottleContact:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (BOOL)deleteWCPayMessageBizExtWithChatname:(id)arg1;
- (id)getWCPayMessageBizExtArrayOnProperty:(const struct WCTPropertyList *)arg1 where:(const struct WCTExpr *)arg2;
- (BOOL)insertWCPayMessageBizExt:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (BOOL)isWCPayMessageBizExtExistWithChatname:(id)arg1 localId:(unsigned long)arg2;
- (unsigned long)GetCountOfNewWCPayBizExtOnDistinctProperty:(const struct WCTProperty *)arg1 Where:(const struct WCTExpr *)arg2 bizType:(unsigned long)arg3;
- (BOOL)deleteWCPayMessageBizExtWithChatname:(id)arg1 bizId:(id)arg2 onType:(unsigned long)arg3;
- (BOOL)deleteWCPayMessageBizExtWithChatname:(id)arg1 OnType:(unsigned long)arg2;
- (BOOL)deleteNewWCPayBizExtMsg:(const struct WCTExpr *)arg1 OnType:(unsigned long)arg2;
- (BOOL)UpdateWCPayMessageBizStatus:(unsigned long)arg1 byChatName:(id)arg2 byMsgLocalId:(unsigned long)arg3 bizType:(unsigned long)arg4;
- (id)getWCPayMessageBizExtArrayOnProperty:(const struct WCTPropertyList *)arg1 where:(const struct WCTExpr *)arg2 OnType:(unsigned long)arg3;
- (BOOL)insertWCPayMessageBizExt:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 type:(unsigned long)arg3;
- (BOOL)isNewWCPayBizExtExistWithChatname:(id)arg1 localId:(unsigned long)arg2 type:(unsigned long)arg3;
- (BOOL)DeleteMessageExtForBatchDeleteByChatName:(id)arg1 localId:(unsigned long)arg2;
- (BOOL)DeleteMessageExtByChatName:(id)arg1 localId:(unsigned long)arg2;
- (BOOL)UpdateMessageExtFlag:(unsigned long)arg1 byChatName:(id)arg2 localId:(unsigned long)arg3;
- (BOOL)UpdateMessageExtSource:(id)arg1 byChatName:(id)arg2 localId:(unsigned long)arg3;
- (id)GetMsgExtInMessageExtWithTable:(id)arg1 chatName:(id)arg2 localId:(unsigned long)arg3;
- (id)GetMessageExtyChatName:(id)arg1 OnProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3;
- (id)GetMsgSourceInMessageExtWithTable:(id)arg1 chatName:(id)arg2 localId:(unsigned long)arg3;
- (id)GetMsgSourceInMessageExt:(id)arg1 localId:(unsigned long)arg2;
- (BOOL)InsertBackupMessageExt:(id)arg1 withChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3;
- (BOOL)InsertMessageExt:(id)arg1 withChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3;
- (BOOL)IsMessageExtExistWithChatName:(id)arg1 localId:(unsigned long)arg2;
- (unsigned long)GetMaxMessageLocalIdByChatName:(id)arg1 where:(const struct WCTExpr *)arg2;
- (unsigned long)GetMessageCountByChatName:(id)arg1 where:(const struct WCTExpr *)arg2;
- (BOOL)DeleteMessageForBatchDeleteByChatName:(id)arg1 localId:(unsigned long)arg2;
- (BOOL)DeleteMessageByChatName:(id)arg1 localId:(unsigned long)arg2;
- (BOOL)UpdateMessageStatus:(unsigned long)arg1 byChatName:(id)arg2 localId:(unsigned long)arg3;
- (BOOL)UpdateMessageByChatName:(id)arg1 localId:(unsigned long)arg2 withDBMessage:(id)arg3 OnProperty:(const struct WCTPropertyList *)arg4;
- (id)GetMessagesByChatName:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3 order:(const list_6bfdf17e *)arg4 limit:(int)arg5 hasError:(char *)arg6;
- (id)GetMessagesByChatName:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3 order:(const list_6bfdf17e *)arg4 limit:(int)arg5;
- (id)GetMessageByChatName:(id)arg1 OnProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3;
- (unsigned long)GetMinCreateTimeInMessage:(id)arg1 where:(const struct WCTExpr *)arg2;
- (unsigned long)GetMinCreateTimeInMessage:(id)arg1;
- (unsigned long)GetMaxCreateTimeInMessage:(id)arg1;
- (unsigned long)InsertBackupMessage:(id)arg1 withChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3;
- (unsigned long)InsertMessage:(id)arg1 withChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3;
- (BOOL)IsMessageExistWithChatName:(id)arg1 localId:(unsigned long)arg2;
- (unsigned long)GetHelloMessageCountByChatName:(id)arg1 withProperty:(const struct WCTResult *)arg2 Where:(const struct WCTExpr *)arg3;
- (BOOL)UpdateHelloMessage:(id)arg1 byChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3 where:(const struct WCTExpr *)arg4;
- (BOOL)DeleteAllHelloMessageByChatName:(id)arg1 helloUser:(id)arg2;
- (id)GetHelloMessagesByChatName:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3 order:(const list_6bfdf17e *)arg4 groupBy:(const struct WCTExpr *)arg5 limit:(int)arg6;
- (id)GetHelloMessagesByChatName:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3 order:(const list_6bfdf17e *)arg4 limit:(int)arg5;
- (id)GetHelloMessageByChatName:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3 order:(const list_6bfdf17e *)arg4;
- (unsigned long)GetMaxCreateTimeInHelloMessage:(id)arg1;
- (unsigned long)InsertHelloMessage:(id)arg1 withChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3;
- (BOOL)RemoveOldRevokeMessagesBefore:(unsigned long)arg1;
- (id)GetRevokeMsgBySvrId:(long long)arg1;
- (BOOL)InsertRevokeMessage:(id)arg1;
- (void)fillEmoticonPackageQueryProperty:(struct WCTPropertyList *)arg1;
- (BOOL)IsEmoticonPackageDownloaded:(id)arg1;
- (BOOL)IsEmoticonPackagePurchased:(id)arg1;
- (BOOL)IsEmoticonPackageExistByPackageId:(id)arg1;
- (BOOL)DeleteAllEmotcionPackage;
- (BOOL)DeleteEmoticonPackageNotInIdList:(id)arg1;
- (BOOL)DeleteEmoticonPackageByPackageId:(id)arg1;
- (id)GetEmoticonPackageList;
- (id)GetEmoticonPackageListByPid:(id)arg1;
- (BOOL)UpdateDownloadStatusInEmoticonPackage:(unsigned long)arg1 byPackageId:(id)arg2;
- (BOOL)UpdatePayStatusInEmoticonPackage:(unsigned long)arg1 byPackageId:(id)arg2;
- (BOOL)InsertEmoticonPackageList:(id)arg1;
- (BOOL)InsertEmoticonPackageWithId:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 payStatus:(unsigned long)arg4 downloadStatus:(unsigned long)arg5;
- (BOOL)DelAllEmoticon;
- (id)DeleteEmoticonByPackageId:(id)arg1 WithoutExtFlag:(unsigned long)arg2;
- (BOOL)DeleteEmoticonByMd5:(id)arg1;
- (BOOL)IsEmoticonExistByMd5:(id)arg1;
- (id)GetEmoticonsOnProperty:(const struct WCTPropertyList *)arg1 Where:(const struct WCTExpr *)arg2 orderBy:(const list_6bfdf17e *)arg3 limit:(int)arg4;
- (id)GetAllEmoticon:(const struct WCTPropertyList *)arg1;
- (BOOL)UpdateExtFlagInEmoticon:(unsigned long)arg1 byMd5:(id)arg2 NeedOverWrite:(BOOL)arg3;
- (BOOL)UpdatePackageIdInEmoticon:(id)arg1 byMd5:(id)arg2;
- (BOOL)UpdateLastUsedTimeInEmoticon:(unsigned long)arg1 byMd5:(id)arg2;
- (BOOL)UpdateExtInfoInEmoticon:(id)arg1 byMd5:(id)arg2;
- (BOOL)UpdateEmoticon:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (BOOL)InsertEmoticon:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (unsigned long)GetCountOfEmoticonUploadByUserName:(id)arg1;
- (unsigned long)GetCountOfEmoticonUpload;
- (BOOL)DelAllEmoticonUpload;
- (BOOL)DelRowInEmoticonUpload:(id)arg1 LocalID:(unsigned long)arg2;
- (id)GetFirstEmoticonUploadOnProperty:(const struct WCTPropertyList *)arg1;
- (BOOL)InsertEmoticonUpload:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (BOOL)IsEmoticonUploadExistByUserName:(id)arg1 localId:(unsigned long)arg2;
- (unsigned long)GetCountOfEmoticonDownload;
- (id)emoticonDownloadsOnProperty:(const struct WCTPropertyList *)arg1 afterCreateTime:(unsigned long)arg2;
- (unsigned long)GetFriendMetaFlag:(id)arg1;
- (unsigned long)GetLastUpdateTimeOfUser:(id)arg1;
- (id)GetContactAndExtWithContactProperty:(const struct WCTPropertyList *)arg1 contactExtProperty:(const struct WCTPropertyList *)arg2 fromTables:(id)arg3 where:(const struct WCTExpr *)arg4 getError:(id *)arg5 limit:(int)arg6;
- (unsigned long)getContactCount;
- (id)ContactExtTableName;
- (id)ContactTableName;
- (BOOL)DeleteContactExtByUserName:(id)arg1;
- (id)GetContactExtByUserName:(id)arg1 property:(const struct WCTPropertyList *)arg2;
- (BOOL)IsContactExtExist:(id)arg1;
- (BOOL)IsContactExist:(id)arg1;
- (BOOL)DeleteContactByUserName:(id)arg1;
- (BOOL)getAllRemarkList:(id)arg1 listType:(unsigned long)arg2;
- (BOOL)getAllUserName:(id)arg1;
- (id)GetContactsWhere:(const struct WCTExpr *)arg1 onProperty:(const struct WCTPropertyList *)arg2 getError:(id *)arg3;
- (id)GetContactByUserName:(id)arg1 property:(const struct WCTPropertyList *)arg2;
- (id)getTableRepairMetas;
- (void)cleanOneTable:(id)arg1;
- (void)continueCleanUp;
- (BOOL)isCleanUpFinished;
- (BOOL)DeleteOplog:(unsigned long)arg1;
- (id)GetOplogsAfterOplogId:(unsigned long)arg1 limit:(int)arg2;
- (BOOL)InsertOplog:(id)arg1;
- (id)oplogDBDirWithDocDir:(id)arg1 userName:(id)arg2;
- (void)CloseOplogDB;
- (void)SetupOplogDBWithDocDir:(id)arg1 userName:(id)arg2;
- (void)setSequence:(int)arg1 forTableName:(id)arg2;
- (id)backupPaths;
- (void)restartBackup;
- (void)stopBackup;
- (void)clearBackup;
- (void)backup;
- (void)setAutoBackup:(BOOL)arg1;

@end

