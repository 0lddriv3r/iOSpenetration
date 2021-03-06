//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IFavoritesExt.h"
#import "IStrangerContactMgrExt.h"
#import "PBMessageObserverDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString, UIView;

@interface WCScheduleManageViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, PBMessageObserverDelegate, IStrangerContactMgrExt, IFavoritesExt>
{
    MMTableView *_tableView;
    NSMutableArray *_todoItemArr;
    UIView *_topNavView;
}

@property(retain, nonatomic) UIView *topNavView; // @synthesize topNavView=_topNavView;
@property(retain, nonatomic) NSMutableArray *todoItemArr; // @synthesize todoItemArr=_todoItemArr;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)OnUpdateItems:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)makeScheduleItemCell:(id)arg1 item:(id)arg2;
- (void)makeNoRecentCell:(id)arg1;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (unsigned int)getCellTypeWithIndexPath:(id)arg1;
- (BOOL)isItem:(id)arg1 EqualToItem:(id)arg2;
- (void)getContactsFromServerIfNecessary;
- (void)onReturn;
- (void)updateNavigationItems;
- (void)initNavigationBar;
- (id)navigationBarBkgColor;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)removeSchedule:(id)arg1;
- (void)initView;
- (BOOL)retrieveScheduleData;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

