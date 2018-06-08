//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "ContactInfoViewControllerDelegate.h"
#import "ContactsItemViewDelegate.h"
#import "IAddressBookFriendMgrExt.h"
#import "SendVerifyMsgViewControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "VerifyPhoneDelegate.h"
#import "contactInfoDelegate.h"
#import "contactVerifyLogicDelegate.h"

@class AddressBookFriend, CContactVerifyLogic, ContactInfoViewController, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UITextField;

@interface AddressBookFriendViewController : MMSearchBarDisplayController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, IAddressBookFriendMgrExt, contactInfoDelegate, VerifyPhoneDelegate, ContactInfoViewControllerDelegate, ContactsItemViewDelegate, contactVerifyLogicDelegate, SendVerifyMsgViewControllerDelegate>
{
    MMTableView *m_tableView;
    UITextField *m_searchTextField;
    UIButton *m_searchBtn;
    AddressBookFriend *m_oCurrentFriendWrap;
    NSMutableArray *m_arrAddressBookFriendList;
    NSMutableDictionary *m_dicNicknameToFriends;
    NSMutableArray *m_arrFilteredFriendList;
    ContactInfoViewController *m_CurrentFriendItemView;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSMutableArray *m_arrKey;
    NSMutableDictionary *m_dicFriendList;
}

@property(retain, nonatomic) ContactInfoViewController *m_CurrentFriendItemView; // @synthesize m_CurrentFriendItemView;
@property(retain, nonatomic) AddressBookFriend *m_oCurrentFriendWrap; // @synthesize m_oCurrentFriendWrap;
- (void).cxx_destruct;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)bindPhoneReturn;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)onUpdateContact:(id)arg1;
- (void)onRemoveContact;
- (void)onAddContact;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (void)verifyContact:(id)arg1;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onSendVerifyMsgCancel;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)onContactVerifyFail;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeAddressBookFriendCell:(id)arg1 row:(unsigned int)arg2 section:(unsigned int)arg3 tableView:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)newAddressBookFriendArrived;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)loadData:(BOOL)arg1;
- (void)trySyncAddressBook;
- (void)sortFriendList;
- (void)stopLoading;
- (void)startLoading;
- (BOOL)canSyncAddressBook;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
