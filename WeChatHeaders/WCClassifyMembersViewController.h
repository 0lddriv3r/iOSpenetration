//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactMgrExt.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "NewChatRoomMemberItemViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCreateNewGroupViewControllerDelegate.h"
#import "WCFacadeExt.h"
#import "tableViewDelegate.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, WCGroup, WCOpLog;

@interface WCClassifyMembersViewController : MMUIViewController <WCActionSheetDelegate, tableViewDelegate, NewChatRoomMemberItemViewDelegate, MultiSelectContactsViewControllerDelegate, IContactMgrExt, WCFacadeExt, WCCreateNewGroupViewControllerDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    WCGroup *_group;
    NSMutableArray *_arrGroupTempMember;
    NSString *_tempGroupName;
    NSMutableDictionary *_dicGroupOutsiderMember;
    NSMutableDictionary *_dicGroupMemberView;
    NSMutableArray *_arrGroupMember;
    MMTableView *_tableView;
    BOOL _deleteStatus;
    WCOpLog *_wcOpLog;
    BOOL m_hasAddMemberWhenOnDone;
    BOOL m_hasDelMemberWhenOnDone;
    BOOL m_hasReturnAddMemberResponse;
    BOOL m_hasReturnDelMemberResponse;
}

@property(retain, nonatomic) NSMutableDictionary *dicGroupOutsiderMember; // @synthesize dicGroupOutsiderMember=_dicGroupOutsiderMember;
@property(retain, nonatomic) NSString *tempGroupName; // @synthesize tempGroupName=_tempGroupName;
@property(retain, nonatomic) WCGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *arrGroupMember; // @synthesize arrGroupMember=_arrGroupMember;
@property(retain, nonatomic) NSMutableArray *arrGroupTempMember; // @synthesize arrGroupTempMember=_arrGroupTempMember;
@property(retain, nonatomic) NSMutableDictionary *dicGroupMemberView; // @synthesize dicGroupMemberView=_dicGroupMemberView;
- (void).cxx_destruct;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 indexPath:(id)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)onWCDeleteGroupReturn:(BOOL)arg1 groupID:(id)arg2;
- (void)onWCGroupModMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCGroupRemoveMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCGroupAddMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)setShowRemoveMember;
- (void)onLongPressEx:(id)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)onAddMember:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnWCCreatNewGroupName:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)onDeleteGroup;
- (void)tryDeleteGroup;
- (void)showAlert:(id)arg1;
- (void)onSelectRoundCell;
- (void)onDone;
- (void)resetBlackListControlStatus;
- (void)modOutsiderGroup;
- (void)onCancel;
- (BOOL)shouldModGroup;
- (void)onDismiss;
- (id)initWithWCGroup:(id)arg1;
- (void)initGroupTempMember;
- (void)reloadMember:(id)arg1;
- (void)reloadMemberListAndView;
- (void)stopLoading;
- (void)startLoadingWithTitle:(id)arg1;
- (void)initView;
- (void)initFooterView;
- (void)initOutsiderFooterView;
- (void)initBlacklistFooterView;
- (void)initData;
- (void)loadOutsiderMembers;
- (void)loadMemberList;
- (void)makeGroupNameCell:(id)arg1;
- (int)getColCount;
- (void)updateNavigation;
- (void)updateTitle;
- (id)getGroupName;
- (id)getDefaultGroupName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
