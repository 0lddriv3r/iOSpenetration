//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "INetworkStatusMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class MemoryMappedKV, NSCharacterSet, NSObject<OS_dispatch_queue>, NSString;

@interface WCSiriMgr : MMService <MMService, MMKernelExt, PBMessageObserverDelegate, IContactMgrExt, INetworkStatusMgrExt>
{
    NSObject<OS_dispatch_queue> *m_updateContactQueue;
    BOOL _needRefreshSessionKey;
    BOOL _isRefreshingSessionKey;
    BOOL _isSirikitAvaiable;
    BOOL _trySiriRecovery;
    MemoryMappedKV *_mappedKV;
    NSCharacterSet *_symbolCharacterSet;
}

+ (id)getSiriDeviceId;
@property(retain, nonatomic) NSCharacterSet *symbolCharacterSet; // @synthesize symbolCharacterSet=_symbolCharacterSet;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(nonatomic) BOOL trySiriRecovery; // @synthesize trySiriRecovery=_trySiriRecovery;
@property(nonatomic) BOOL isSirikitAvaiable; // @synthesize isSirikitAvaiable=_isSirikitAvaiable;
@property(nonatomic) BOOL isRefreshingSessionKey; // @synthesize isRefreshingSessionKey=_isRefreshingSessionKey;
@property(nonatomic) BOOL needRefreshSessionKey; // @synthesize needRefreshSessionKey=_needRefreshSessionKey;
- (void).cxx_destruct;
- (void)updateVocabulary:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (id)getSiriContactBy:(id)arg1 inDict:(id)arg2;
- (void)onNewContact:(id)arg1;
- (void)confirmAlive;
- (void)onContactListUpdate:(unsigned long)arg1;
- (id)vocabularyFromContactName:(id)arg1;
- (BOOL)IsEnChar:(unsigned short)arg1;
- (void)addVocabularyFor:(id)arg1 toVocabularys:(id)arg2;
- (id)convertContactToSiriIfNeed:(id)arg1;
- (void)portContactsDataToContainerFolderWithSession:(id)arg1;
- (void)updateApplicationContextIfCould;
- (void)checkAndRefreshSessionKeyIfNeed;
- (BOOL)isSessionKeyCached;
- (void)handleGetIosExtensionKeyResp:(id)arg1 Event:(unsigned long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)getExtensionKeyForceRefresh;
- (void)onAuthOK;
- (void)onNetworkStatusChange:(unsigned long)arg1;
- (id)getQueue;
- (BOOL)isSiriRestricted;
- (BOOL)isSiriKitAvailable;
- (void)dealloc;
- (void)onPreQuit;
- (void)onServiceEnterForeground;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
