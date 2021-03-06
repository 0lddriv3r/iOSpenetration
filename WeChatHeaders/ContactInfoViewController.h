//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactInfoAssistDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "ICertInfoMgrExt.h"
#import "IContactMgrExt.h"
#import "IHDHeadImageViewExt.h"
#import "IStrangerContactMgrExt.h"
#import "IUpdateProfileMgrExt.h"
#import "MMSayHelloViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "VerifyPhoneDelegate.h"
#import "WCFacadeExt.h"

@class CBaseContactInfoAssist, CContact, CContactVerifyLogic, CMessageWrap, ForwardMessageLogicController, NSMutableDictionary, NSString, SendVerifyMsgLogicController;

@interface ContactInfoViewController : MMUIViewController <ForwardMessageLogicDelegate, UIAlertViewDelegate, PBMessageObserverDelegate, ContactInfoAssistDelegate, IContactMgrExt, VerifyPhoneDelegate, MMSayHelloViewControllerDelegate, ICertInfoMgrExt, WCFacadeExt, IStrangerContactMgrExt, IUpdateProfileMgrExt, IHDHeadImageViewExt>
{
    unsigned long m_uiVerify;
    CContact *m_contact;
    CContact *m_chatContact;
    id <contactInfoDelegate> m_delegate;
    id <ContactInfoViewControllerDelegate> m_InfoDelegate;
    CBaseContactInfoAssist *m_oContactInfoAssist;
    CContactVerifyLogic *m_contactVerifyLogic;
    NSString *m_nsLocation;
    BOOL m_bPopToRootWhenDelete;
    unsigned long m_uiFromScene;
    int m_wcOperateMode;
    Class m_popToViewControllerClassWhenDelete;
    int m_searchScene;
    id m_userData;
    float m_CurrentWidth;
    ForwardMessageLogicController *m_forwardLogic;
    unsigned long _startTime;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
    int m_uiAddFriendStatScene;
    int _m_qrCodeAddFriendScene;
    NSMutableDictionary *_verifyUserInfoList;
    NSString *_searchId;
    NSString *_searchKeyword;
    unsigned long _searchFromIndex;
    NSString *_searchExtraParamsString;
    CMessageWrap *_sourceMsg;
    NSString *_reportInfo;
}

@property(retain, nonatomic) NSString *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) CMessageWrap *sourceMsg; // @synthesize sourceMsg=_sourceMsg;
@property(retain, nonatomic) NSString *searchExtraParamsString; // @synthesize searchExtraParamsString=_searchExtraParamsString;
@property(nonatomic) unsigned long searchFromIndex; // @synthesize searchFromIndex=_searchFromIndex;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSMutableDictionary *verifyUserInfoList; // @synthesize verifyUserInfoList=_verifyUserInfoList;
@property(nonatomic) int m_qrCodeAddFriendScene; // @synthesize m_qrCodeAddFriendScene=_m_qrCodeAddFriendScene;
@property(nonatomic) int m_uiAddFriendStatScene; // @synthesize m_uiAddFriendStatScene;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
@property(nonatomic) int m_searchScene; // @synthesize m_searchScene;
@property(nonatomic) Class m_popToViewControllerClassWhenDelete; // @synthesize m_popToViewControllerClassWhenDelete;
@property(nonatomic) unsigned long m_uiFromScene; // @synthesize m_uiFromScene;
@property(nonatomic) BOOL m_bPopToRootWhenDelete; // @synthesize m_bPopToRootWhenDelete;
@property(retain, nonatomic) NSString *m_nsLocation; // @synthesize m_nsLocation;
@property(nonatomic) unsigned long m_uiVerify; // @synthesize m_uiVerify;
@property(nonatomic) __weak id <ContactInfoViewControllerDelegate> m_InfoDelegate; // @synthesize m_InfoDelegate;
@property(nonatomic) __weak id <contactInfoDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_chatContact; // @synthesize m_chatContact;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)reportEnter;
- (void)onHDHeadImageWillDisappear;
- (void)onHDHeadImageWillAppear;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onExpose;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)confirmExpose:(unsigned long)arg1;
- (void)onSayHelloViewSendSayHello:(id)arg1;
- (void)statBanner;
- (void)onVerifyOK;
- (void)onAddToContact;
- (void)onSendVerifyMsg;
- (void)onSayHello;
- (void)bindPhoneReturn;
- (void)onDeleteContact:(id)arg1;
- (void)delAllMsg;
- (void)onVerifyOKWithContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)copyContactField:(id)arg1 toContact:(id)arg2;
- (void)onProfileChange;
- (void)dealloc;
- (void)onWCGroupRemoveMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCGroupAddMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCGroupModMemberReturn:(BOOL)arg1 group:(id)arg2;
- (id)getSearchId;
- (id)getContactVerifyLogic;
- (void)onRemoveContact;
- (void)onPopViewController:(BOOL)arg1;
- (void)onTalk:(id)arg1;
- (BOOL)onFilterSendReceiver:(id)arg1;
- (id)getCurrentViewController;
- (void)onShareMyFriend;
- (id)getViewController;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)onNewMessageWithPushOnTop:(id)arg1;
- (void)onNewMessage:(id)arg1;
- (void)jumpToContentViewController:(id)arg1;
- (void)doReset;
- (void)contactVerifyOk:(id)arg1;
- (void)onFriendRequestSend;
- (void)reportPageStayTimeWithPluginType:(int)arg1;
- (void)checkNeedForcedUpdateForMemberDetail;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)updateContactFromServer;
- (void)reloadContactAssist;
- (id)tagForCurrentPage;
- (id)tagForActivePage;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reloadView;
- (void)reloadFloatView;
- (id)getUserData;
- (void)reloadData;
- (void)initSystemPluginData:(int)arg1;
- (BOOL)isInMyContactList;
- (id)initWithTitle:(id)arg1;
- (id)init;
- (unsigned long)GetFromScene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

