//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EnterpriseMemberViewDelegate.h"
#import "IEnterpriseContactMgrExt.h"
#import "IEnterpriseGroupMgrExt.h"
#import "MMWebViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CEnterpriseContact, MMTableViewInfo, MMTitleView, NSMutableArray, NSString;

@interface EnterpriseContactInfoViewController : MMUIViewController <EnterpriseMemberViewDelegate, MMWebViewDelegate, WCActionSheetDelegate, IEnterpriseGroupMgrExt, IEnterpriseContactMgrExt>
{
    CEnterpriseContact *_enterpriseContact;
    NSString *_myUserName;
    NSMutableArray *_memberDataItemList;
    NSMutableArray *_memberViewList;
    BOOL _isMuteChanged;
    BOOL _isFavoriteChanged;
    BOOL _isTopChanged;
    BOOL _isChatStatusNotifyOpen;
    BOOL _isFavorite;
    BOOL _isTop;
    BOOL _isDeleteButtonHidden;
    MMTitleView *_titleView;
    MMTableViewInfo *_tableViewInfo;
    unsigned long _colCount;
}

- (void).cxx_destruct;
- (void)onUpdateEnterpriseGroupName:(id)arg1 errorCode:(int)arg2;
- (void)onUpdateEnterpriseGroupMemberList:(id)arg1 errorCode:(int)arg2;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onBatchModifyEnterpriseContact:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onWebViewWillClose:(id)arg1;
- (void)onEnterpriseMemberViewAdd:(id)arg1;
- (void)onEnterpriseMemberViewDelete:(id)arg1;
- (void)onEnterpriseMemberHeadImageLongPress:(id)arg1;
- (void)onEnterpriseMemberHeadImageClick:(id)arg1;
- (BOOL)isContactInRoomMember:(id)arg1;
- (void)switchDeleteButtonHidden;
- (void)updateDeleteButtonHidden:(BOOL)arg1;
- (void)enterEnterpriseChat:(id)arg1;
- (void)updateContactSetting;
- (void)setTopStatus:(id)arg1;
- (void)setFavStatus:(id)arg1;
- (void)setMuteStatus:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)openEditTitle;
- (void)quitChatRoom;
- (void)onQuitButtonClicked:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemberCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeMemberListSection;
- (id)makeSettingSection;
- (id)makeChatRoomSection;
- (void)reloadTableViewInfo;
- (void)updateTableFooterView;
- (void)updateTitleView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableViewInfo;
- (void)initTitleView;
- (void)initData;
- (void)dealloc;
- (id)initWithEnterpriseContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
