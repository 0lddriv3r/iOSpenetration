//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChatRoomMemberGridViewDelegate.h"
#import "IContactLabelMgrExt.h"
#import "MMTableViewInfoDelegate.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "contactInfoDelegate.h"

@class ContactTagData, MMTableViewInfo, NSMutableArray, NSString, UILabel, UITextField;

@interface ContactTagDetailViewController : MMUIViewController <UIAlertViewDelegate, MMTableViewInfoDelegate, ChatRoomMemberGridViewDelegate, contactInfoDelegate, IContactLabelMgrExt, MultiSelectContactsViewControllerDelegate, UITextFieldDelegate>
{
    ContactTagData *_contactTagData;
    int _actionType;
    unsigned long _uiJobID;
    MMTableViewInfo *m_tableViewInfo;
    NSMutableArray *m_arrMemberList;
    unsigned int m_nCellCnt;
    BOOL m_bDeleteStatus;
    UITextField *m_tagNameTextField;
    UILabel *m_WarningTextLabel;
    id <ContactTagDetailViewControllerDelegate> m_delegate;
    NSString *m_title;
    NSString *m_leftBarButtonTitle;
    BOOL isAlreadyPopKeyBoardWhenCreate;
    BOOL isShowWarningText;
    BOOL isAlreadyDisMissSelf;
    BOOL isTagNameOverLimit;
    int TagCountOfMutiSelectScene;
    BOOL m_bIsFromContactTagHelloWorld;
    NSString *ns_CurTagNameTextFieldValue;
}

@property(retain, nonatomic) NSString *m_leftBarButtonTitle; // @synthesize m_leftBarButtonTitle;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(nonatomic) BOOL m_bIsFromContactTagHelloWorld; // @synthesize m_bIsFromContactTagHelloWorld;
@property(retain, nonatomic) NSString *ns_CurTagNameTextFieldValue; // @synthesize ns_CurTagNameTextFieldValue;
@property(nonatomic) __weak id <ContactTagDetailViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onDeleteContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned long)arg3;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned long)arg3;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned long)arg3;
- (void)updateContactLabelName:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned long)arg3;
- (void)reloadMemberListAndView:(id)arg1 isChatRoomList:(BOOL)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)onLongPressEx:(id)arg1;
- (void)setShowRemoveMember;
- (void)addMember;
- (void)ShowMultiSelectContactsViewController:(id)arg1;
- (void)onTagNameChanged:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (unsigned long)JobForContactTagChanged;
- (unsigned long)JobForTagNameWithServer;
- (BOOL)isTagNameEmpty:(id)arg1;
- (BOOL)isTagNameEmptyOrExist:(id)arg1;
- (BOOL)isContactTagListChanged;
- (BOOL)isTagNameChanged;
- (BOOL)isTagNameCreated;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)SetSaveButtonEnable:(BOOL)arg1;
- (void)onSave:(id)arg1;
- (void)onDismiss:(id)arg1;
- (void)InternalDisMissSelfAnimated:(BOOL)arg1;
- (void)initView;
- (void)reloadTableData;
- (void)makeDeleteBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)onTagDeleteButtonPress:(id)arg1;
- (id)makeDeleteBtnSection;
- (id)makeMemListSection;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (int)getColCount;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)updateToNormalStatusEx;
- (void)updateMemberView;
- (unsigned int)getBtnList:(id)arg1;
- (void)HideWarningText;
- (void)ShowWarningText:(id)arg1;
- (void)makeWarningTextCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeInfoHeaderSection;
- (void)makeTagNameCell:(id)arg1 CellInfo:(id)arg2;
- (void)initData;
- (void)LoadMemberList;
- (void)sortTagContacts;
- (void)dealloc;
- (id)initWithMembers:(id)arg1;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
