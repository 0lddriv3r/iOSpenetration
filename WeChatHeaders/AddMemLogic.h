//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IGroupMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "contactVerifyLogicDelegate.h"

@class CContact, CContactVerifyLogic, NSArray, NSMutableArray, NSString;

@interface AddMemLogic : MMObject <UIAlertViewDelegate, MultiSelectContactsViewControllerDelegate, contactVerifyLogicDelegate, IGroupMgrExt, UITextFieldDelegate, MMTipsViewControllerDelegate>
{
    id <AddMemLogicDelegate> m_delegate;
    NSMutableArray *m_arrNeedVerifyUsrName;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSArray *m_arrMemberList;
    unsigned long _m_viewScene;
    CContact *_m_oContact;
}

@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
@property(nonatomic) unsigned long m_viewScene; // @synthesize m_viewScene=_m_viewScene;
@property(nonatomic) __weak id <AddMemLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (int)getFTSCommonScene;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)OnInviteChatRoomMember:(id)arg1 Ret:(int)arg2 Error:(id)arg3 withUserData:(id)arg4;
- (void)verifyContact;
- (void)contactVerifyOk:(id)arg1;
- (void)onContactVerifyFail;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)addMembersToChatRoom:(id)arg1 WithDesp:(id)arg2;
- (void)addMembersToChatRoom:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showDespAlertView:(id)arg1;
- (void)addGroupVerifySuccessSystemNodeView:(id)arg1;
- (void)OnAddGroupMember:(id)arg1 withStatus:(unsigned long)arg2 memberList:(id)arg3 inviteList:(id)arg4 Error:(id)arg5;
- (BOOL)canShowUpgradeStatus;
- (id)genErrorString:(id)arg1 withGroupVerify:(BOOL)arg2;
- (id)getErrorContactName:(id)arg1;
- (void)start:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

