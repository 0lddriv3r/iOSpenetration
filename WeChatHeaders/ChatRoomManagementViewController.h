//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChangeOwnerLogicDelegate.h"
#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "MMTableViewInfoDelegate.h"

@class CContact, ChangeOwnerLogic, MMTableViewInfo, NSString;

@interface ChatRoomManagementViewController : MMUIViewController <MMTableViewInfoDelegate, ChangeOwnerLogicDelegate, IContactMgrExt, IGroupMgrExt>
{
    MMTableViewInfo *m_tableViewInfo;
    ChangeOwnerLogic *m_changeOwnerLogic;
    CContact *m_chatRoomContact;
    id <ChatRoomManagementDelegate> m_delegate;
}

@property(nonatomic) __weak id <ChatRoomManagementDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void).cxx_destruct;
- (void)dealloc;
- (void)OnSetChatRoomAccessType:(id)arg1 Type:(unsigned long)arg2 ErrorInfo:(id)arg3 Success:(BOOL)arg4;
- (void)onModifyContact:(id)arg1;
- (void)checkOwner;
- (id)getViewController;
- (void)didReceiveMemoryWarning;
- (void)OnReturn;
- (void)onChangeOwnerLogicStop:(BOOL)arg1;
- (void)showChangeOwnerView;
- (void)switchAllowOwnerApprove:(id)arg1;
- (void)reloadTableData;
- (void)initTableView;
- (void)initData;
- (void)checkNeedForcedUpdateForInfoDetail;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

