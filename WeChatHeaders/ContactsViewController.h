//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "ContactsDataLogicDelegate.h"
#import "FriendAsistSessionExt.h"
#import "IOpenImResourceMgrExt.h"
#import "MMSearchBarDelegate.h"
#import "MMTableViewIndexViewDelegate.h"
#import "MMVoiceSearchBarDelegate.h"
#import "MMVoiceSearchDelegate.h"
#import "MainTableDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "VerifyPhoneDelegate.h"
#import "WCActionSheetDelegate.h"

@class ContactsDataLogic, FTSVoiceSearchBarController, MMMainTableView, NSMutableArray, NSString, UILabel;

@interface ContactsViewController : MMTabBarBaseViewController <UITableViewDelegate, UITableViewDataSource, VerifyPhoneDelegate, WCActionSheetDelegate, ContactsDataLogicDelegate, MMSearchBarDelegate, MMVoiceSearchDelegate, MMVoiceSearchBarDelegate, FriendAsistSessionExt, MainTableDelegate, MMTableViewIndexViewDelegate, IOpenImResourceMgrExt>
{
    MMMainTableView *m_tableView;
    struct UIEdgeInsets m_tableViewInsets;
    UILabel *m_countLabel;
    BOOL m_bShouldShowBindPhoneTip;
    ContactsDataLogic *m_contactsDataLogic;
    BOOL m_bShowHelloGroup;
    unsigned long m_uiHelloGroupUnreadCount;
    FTSVoiceSearchBarController *m_mmSearchBar;
    BOOL m_hasAddBlurEffectView;
    BOOL m_needResetTableViewOffset;
    BOOL m_canSearchAfterInit;
    NSMutableArray *m_brandContactGroupList;
    BOOL _hasWechatOut;
}

@property(nonatomic) BOOL hasWechatOut; // @synthesize hasWechatOut=_hasWechatOut;
@property(retain, nonatomic) NSMutableArray *m_brandContactGroupList; // @synthesize m_brandContactGroupList;
- (void).cxx_destruct;
- (void)checkDBAutoRecover;
- (void)initDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)resetViewStatus;
- (void)onFriendAssistUnreadCountChanged;
- (void)updateTabBarBadge;
- (void)updateHelloGroup;
- (void)updateViewWhenSelectTab:(BOOL)arg1;
- (id)getViewController;
- (void)OnSayHelloDataChange;
- (void)displayControllerSetActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)SearchBarBecomeUnActive;
- (BOOL)shouldShowTabbar;
- (void)SearchBarBecomeActive;
- (void)addBlurEffectView;
- (void)setSearchTableResultText:(id)arg1;
- (void)OnVoiceSearchButtonDown;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)applySearchBeginAnimation:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)MMVoiceSearchBarCancelButtonClicked:(id)arg1;
- (void)MMVoiceSearchBarSearchButtonClicked:(id)arg1;
- (void)MMVoiceSearchBar:(id)arg1 textDidChange:(id)arg2;
- (BOOL)MMVoiceSearchBarShouldBeginEditing:(id)arg1;
- (void)cancelSearch;
- (void)onGetOpenImResourceDone:(id)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (int)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (int)mmcurrentIndexForTableView:(id)arg1;
- (void)loadHeaderViewSelection;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)bindPhoneReturn;
- (void)handleSelectdBrandGroup:(int)arg1;
- (void)handleSelectdBindPhone;
- (void)handleSelectedWechatOut;
- (void)handleSelectOpenIM:(unsigned int)arg1;
- (void)handleSelectEnterpriseBrand:(unsigned int)arg1;
- (void)handleSelectdHelloGroup:(unsigned int)arg1;
- (void)handleSelectdContactTag;
- (void)handleSelectdChatRoom;
- (void)handleSelectdHelloGroup;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)makeNewUserTipCell:(id)arg1;
- (void)makeBindPhoneCell:(id)arg1;
- (void)makeOpenIMEntranceCell:(id)arg1 row:(unsigned int)arg2;
- (void)makeHelloGroupCell:(id)arg1 row:(unsigned int)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned int)arg3 row:(unsigned int)arg4;
- (void)makeEnterpriseBrandCell:(id)arg1 row:(int)arg2;
- (void)makeWechatOutCell:(id)arg1;
- (void)makeContactTagCell:(id)arg1;
- (void)makeChatRoomCell:(id)arg1;
- (void)makeHelloGroupCell:(id)arg1;
- (void)addRedDotInGroupCell:(id)arg1 existNewBrand:(BOOL)arg2;
- (id)createContactsItemViewInCell:(id)arg1;
- (void)makeGroupCell:(id)arg1 head:(id)arg2 title:(id)arg3;
- (void)makeGroupCell:(id)arg1 url:(id)arg2 title:(id)arg3;
- (void)updateEnterpriseBrandItemCell:(id)arg1 contact:(id)arg2;
- (void)updateNewContactsItemCell:(id)arg1 contact:(id)arg2;
- (int)numberOfCellForBrandGroup;
- (int)numberOfCellForOpenIM;
- (int)numberOfCellForEnterpriseBrandGroup;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (unsigned long)getSectionType:(int)arg1;
- (int)ConvertToNormalContactSection:(int)arg1;
- (BOOL)HasBindPhoneTip;
- (BOOL)HasWechatOutGroup;
- (BOOL)HasBrandGroup;
- (BOOL)HasEnterpriseBrandGroup;
- (BOOL)HasOpenIMEntrance;
- (BOOL)HasHelloGroup;
- (void)tryHideSearchGuideView;
- (void)tryInitViewOfSearchController;
- (BOOL)isSeachActive;
- (float)getMainTableHeight;
- (void)setUIEventEnabled:(BOOL)arg1;
- (void)handleFrameChangeForSearchBar;
- (void)hideSearchBar;
- (void)finishSearchBarImmediately;
- (BOOL)hasShowSearchBar;
- (void)initSearchBar;
- (void)initTitleArea;
- (void)initBarItem;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)reLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)removeContactsTip;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAppear;
- (void)initTableView;
- (void)initCountLabel:(id)arg1;
- (void)updateCount;
- (void)initData;
- (void)onAddContact;
- (void)onShowAddContact:(BOOL)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)openContactInfoView:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

