//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AddMemLogicDelegate.h"
#import "ChatRoomManagementDelegate.h"
#import "ChatRoomMemberGridViewDelegate.h"
#import "DelMemLogicDelegate.h"
#import "IAutoSetRemarkExt.h"
#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "IOplogExt.h"
#import "MMTableViewInfoDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "UIAlertViewDelegate.h"
#import "ViewMemLogicDelegate.h"
#import "WAMsgBrowserDataLogicDelegate.h"
#import "WCActionSheetDelegate.h"
#import "contactInfoDelegate.h"
#import "tableViewDelegate.h"

@class AddMemLogic, CContact, ChangeOwnerLogic, DelMemLogic, DelaySwitchSettingLogic, MMTableViewInfo, NSArray, NSIndexPath, NSString, NameEditorViewController, UIButton, UIView, ViewMemLogic, WAMsgBrowserDataLogic, WAMsgFastBrowserView;

@interface ChatRoomInfoViewController : MMUIViewController <RichTextLayoutDelegate, WAMsgBrowserDataLogicDelegate, tableViewDelegate, ChatRoomMemberGridViewDelegate, MMTableViewInfoDelegate, contactInfoDelegate, IContactMgrExt, IGroupMgrExt, UIAlertViewDelegate, WCActionSheetDelegate, IAutoSetRemarkExt, IOplogExt, AddMemLogicDelegate, ViewMemLogicDelegate, DelMemLogicDelegate, ChatRoomManagementDelegate>
{
    CContact *m_chatRoomContact;
    NSArray *m_arrMemberList;
    id <chatRoomInfoDelegate><chatRoomSettingDelegate> m_delegate;
    UIButton *m_muteButton;
    UIView *m_titleView;
    BOOL m_bDeleteStatus;
    BOOL m_bFromAddressBook;
    BOOL m_isChatStatusNotifyOpen;
    MMTableViewInfo *m_tableViewInfo;
    AddMemLogic *m_addMemLogic;
    ViewMemLogic *m_viewMemLogic;
    DelMemLogic *m_delMemLogic;
    ChangeOwnerLogic *m_changeOwnerLogic;
    BOOL m_isShowDislayName;
    BOOL m_bIsShowNotificationSectionIndexAtFirst;
    NSIndexPath *m_notificationSectionIndex;
    BOOL m_bIsShowNickNameSectionIndexAtFirst;
    NSIndexPath *m_showNicknameSectionIndex;
    BOOL m_bIsShowAnnouncementSectionIndexAtFirst;
    NSIndexPath *m_showAnnouncementSectionIndex;
    BOOL m_bEnterDescView;
    unsigned int m_nCellCnt;
    unsigned int m_nCellCol;
    NameEditorViewController *m_CurrentVC;
    BOOL m_bIsShowViewMoreBtn;
    UIButton *m_viewMoreBtn;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    WAMsgBrowserDataLogic *m_weappMsgDataLogic;
    WAMsgFastBrowserView *m_weappBrowserView;
    int _m_searchScene;
}

@property(nonatomic) int m_searchScene; // @synthesize m_searchScene=_m_searchScene;
@property(nonatomic) BOOL m_bIsShowAnnouncementSectionIndexAtFirst; // @synthesize m_bIsShowAnnouncementSectionIndexAtFirst;
@property(nonatomic) BOOL m_bIsShowNickNameSectionIndexAtFirst; // @synthesize m_bIsShowNickNameSectionIndexAtFirst;
@property(nonatomic) BOOL m_bIsShowNotificationSectionIndexAtFirst; // @synthesize m_bIsShowNotificationSectionIndexAtFirst;
@property(nonatomic) BOOL m_bFromAddressBook; // @synthesize m_bFromAddressBook;
@property(retain, nonatomic) UIButton *m_muteButton; // @synthesize m_muteButton;
@property(nonatomic) __weak id <chatRoomInfoDelegate><chatRoomSettingDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void).cxx_destruct;
- (void)changeSetting;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (void)confirmOnArriveFund:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)quitChatRoom;
- (BOOL)canShowUpgradeStatus;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)setShowDisplayName:(id)arg1;
- (void)showSetRoomDisplayName;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned long)arg3 cgiWrap:(id)arg4;
- (void)setChatRoomDisplayName:(id)arg1 vc:(id)arg2;
- (id)getDisplayName;
- (void)showMoreMember;
- (void)setShowRemoveMember;
- (void)onDeleteMember:(id)arg1;
- (void)onAddMemLogicStop:(BOOL)arg1;
- (void)addMember;
- (void)onViewMemLogicStop:(BOOL)arg1;
- (void)showMoreMemberEx;
- (void)onDelMemLogicStop:(BOOL)arg1;
- (void)showDelMemView;
- (void)openContactInfo:(id)arg1;
- (void)onEnterChat;
- (void)dealloc;
- (id)init;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadMemberListAndView;
- (void)removeCoverView;
- (void)hideCoverView;
- (void)startCoverAnimOnIndexPath:(id)arg1;
- (void)initView;
- (void)doReset;
- (void)updateMemberView;
- (void)initFooterView;
- (void)setTopSession:(id)arg1;
- (void)onEditAndSearch;
- (void)onQuit:(id)arg1;
- (void)showWeAppMsg;
- (void)makeWeAppMsgListCell:(id)arg1 cellInfo:(id)arg2;
- (void)onWAMsgDataLogicLoadOK;
- (void)initWeAppMsgDataLogic;
- (void)initWeAppFastBrowserView;
- (void)onQRCodeView;
- (void)makeQRInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)showAdminViewName;
- (void)showGroupManage;
- (void)showAdminViewDesc;
- (void)initData;
- (id)makeEnterBtn;
- (void)reloadTableData;
- (void)reloadProfileTableData;
- (void)makeDescCell:(id)arg1 cellInfo:(id)arg2;
- (BOOL)shouldOpenNewLineAtY:(float)arg1 withLineHeight:(float)arg2 richTextView:(id)arg3;
- (id)makeDescView;
- (void)makeMemListSection:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeViewMoreBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)updateToNormalStatusEx;
- (void)loadMemberList;
- (void)resortMemList;
- (void)initTitleView;
- (void)updateTitleView;
- (BOOL)isTopSessionCountExceed;
- (void)onTopSession:(BOOL)arg1;
- (BOOL)getSessionTopped;
- (void)OnSetChatRoomTopic:(id)arg1 ErrorInfo:(id)arg2 Success:(BOOL)arg3;
- (void)OnChangeMemberDisplayName:(id)arg1;
- (void)checkNeedReload:(id)arg1;
- (void)OnChangeGroup:(id)arg1;
- (void)onExpose;
- (void)toggleWatchContact:(id)arg1;
- (void)switchSaveToAddressBook:(id)arg1;
- (void)onClear:(id)arg1;
- (void)showChatBackgroundConfig;
- (void)setMuteStatus:(id)arg1;
- (BOOL)setUpdateNotifyMuted:(BOOL)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned long)arg2 memberList:(id)arg3 errTip:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

