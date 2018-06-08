//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EnterpriseBrandContactHelperDelegate.h"
#import "EnterpriseBrandSearchControllerDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "IEnterpriseBrandContactMgrExt.h"
#import "IEnterpriseBrandSessionMgrExt.h"
#import "IMMNewSessionMgrExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class EnterpriseBrandContactHelper, EnterpriseBrandSearchController, ForwardMessageLogicController, MMSearchBar, MMTableView, NSString, UIButton, UIView;

@interface EnterpriseBrandSessionListViewController : MMUIViewController <IEnterpriseBrandContactMgrExt, ForwardMessageLogicDelegate, EnterpriseBrandSearchControllerDelegate, EnterpriseBrandContactHelperDelegate, IEnterpriseBrandSessionMgrExt, UITableViewDelegate, UITableViewDataSource, IMMNewSessionMgrExt>
{
    NSString *_mainUserName;
    MMTableView *_tableView;
    UIView *_footerView;
    UIView *_footerViewBackground;
    UIView *_emptyView;
    unsigned long _fromScene;
    ForwardMessageLogicController *m_forwardLogic;
    EnterpriseBrandSearchController *_searchController;
    MMSearchBar *_searchBar;
    UIButton *_weworkButton;
    BOOL _isEntering;
    unsigned long _enterTime;
    unsigned long _wwEntryType;
    EnterpriseBrandContactHelper *_helper;
}

- (void).cxx_destruct;
- (id)getTitleString;
- (id)makeNormalCell:(id)arg1;
- (void)reloadTable;
- (void)openMainBrandInfo:(id)arg1;
- (void)openWework:(id)arg1;
- (void)openDisabledBrandList:(id)arg1;
- (id)getCurrentViewController;
- (void)shareToFriend:(id)arg1;
- (void)showRightTopMenuBtn:(id)arg1;
- (id)getViewController;
- (id)getMMSearchBar;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (void)onEnterpriseBrandSessionsChanged:(id)arg1;
- (void)onSessionChanged:(id)arg1;
- (void)onSessionTotalUnreadCountChange:(unsigned long)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reportSubBrandClick:(id)arg1 SubType:(int)arg2 unreadCount:(int)arg3;
- (void)reportExposeWeWorkBanner:(unsigned long)arg1;
- (void)reportClick:(unsigned long)arg1;
- (void)reportQuit;
- (void)reportEnter;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willDisappear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateTitleView;
- (void)updateLeftBarItem;
- (void)hideSearchBar;
- (void)resetBannerTips;
- (void)initWeworkEntry;
- (void)initSearchBar;
- (void)initFooterView;
- (void)initTableView;
- (void)initView;
- (BOOL)reloadWeworkEntryData;
- (void)initData;
- (void)dealloc;
- (id)initWithEnterpriseMainUserName:(id)arg1 fromScene:(unsigned long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
