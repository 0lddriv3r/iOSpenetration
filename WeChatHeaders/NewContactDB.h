//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMDBRRepairerExt.h"
#import "RecoverCustomDataWorker.h"
#import "WCDBRestoreProtocol.h"

@class MMTimer, NSString, WCTDatabase, WCTTable;

@interface NewContactDB : NSObject <MMDBRRepairerExt, WCDBRestoreProtocol, RecoverCustomDataWorker>
{
    WCTDatabase *m_contactDB;
    MMTimer *m_backupTimer;
    WCTTable *_m_tableContact;
    WCTTable *_m_tableOpenIMContact;
    WCTTable *_m_tableMassSendContact;
}

+ (id)contactDBPathWithDocDir:(id)arg1 userName:(id)arg2;
+ (unsigned long)imgStatusToEnum:(id)arg1;
+ (id)imgStatusToString:(unsigned int)arg1;
@property(retain) WCTTable *m_tableMassSendContact; // @synthesize m_tableMassSendContact=_m_tableMassSendContact;
@property(retain) WCTTable *m_tableOpenIMContact; // @synthesize m_tableOpenIMContact=_m_tableOpenIMContact;
@property(retain) WCTTable *m_tableContact; // @synthesize m_tableContact=_m_tableContact;
- (void).cxx_destruct;
- (void)onRepairProgressUpdate:(float)arg1;
- (Class)classFromTableName:(id)arg1;
- (long long)restoreRequireSize;
- (void)resetInitMark;
- (void)restore;
- (id)m_database;
- (void)restartBackup;
- (void)stopBackup;
- (void)clearBackup;
- (void)backup;
- (void)setAutoBackup:(BOOL)arg1;
- (void)willCustomRecoverData:(id)arg1 path:(id)arg2 needCatch:(char *)arg3;
- (void)willRepairDB:(unsigned int)arg1 needCatch:(char *)arg2;
- (BOOL)ModifyNotifyStatus:(id)arg1 withStatus:(unsigned long)arg2;
- (BOOL)IsContactExist:(id)arg1;
- (unsigned long)getContactCount;
- (BOOL)updateContact:(id)arg1;
- (BOOL)deleteContact:(id)arg1;
- (BOOL)addContact:(id)arg1;
- (BOOL)addContact:(id)arg1 log:(BOOL)arg2;
- (id)genDBContactFrom:(id)arg1;
- (BOOL)getAllContactNoExtInfoList:(id)arg1 listType:(unsigned long)arg2;
- (BOOL)getAllContactList:(id)arg1 listType:(unsigned long)arg2;
- (BOOL)getAllRemarkList:(id)arg1 listType:(unsigned long)arg2;
- (BOOL)getAllUserName:(id)arg1;
- (BOOL)loadContactExtInfo:(id)arg1;
- (id)getContact:(id)arg1;
- (void)getFriendExtTableValue:(id)arg1 fromDBObject:(id)arg2;
- (void)getFriendTableValue:(id)arg1 fromDBObject:(id)arg2;
- (BOOL)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (BOOL)runTransaction:(CDUnknownBlockType)arg1;
- (void)initDBWithDocDir:(id)arg1 userName:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)createContactTable;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

