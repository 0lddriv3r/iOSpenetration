//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CNContactStore, NSArray, NSRecursiveLock;

@interface WCOutAddressBookLogic : MMObject
{
    unsigned long m_addressBookStatus;
    CNContactStore *m_cnContactStore;
    void *m_addressBook;
    BOOL m_isLoadingAddressBook;
    BOOL m_hasLoadAddressBook;
    BOOL m_localAddressBookChanged;
    NSArray *m_phoneContacts;
    double m_lastUpdateAddressBookTime;
    NSRecursiveLock *m_oLock;
    id <WCOutAddressBookLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <WCOutAddressBookLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL hasLoadPhoneContacts; // @synthesize hasLoadPhoneContacts=m_hasLoadAddressBook;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)localAddressBookChanged;
- (void)addCacheWithPhoneContacts:(id)arg1;
- (void)loadAsyncNeedUpdate:(BOOL)arg1;
- (void)tryLoad;
- (void)onContactStoreDidChange:(id)arg1;
- (BOOL)canSyncAddressBook;
- (BOOL)addressBookStatusIsDenied;
- (id)getPhoneContacts;
- (void)loadAddressBook;
- (void)requestAccessForContactsDone:(BOOL)arg1;
- (void)refetchAddressBook;
- (id)init;
- (void)dealloc;

@end
