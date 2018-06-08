//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCWatchSettingCommonViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString, UIButton, UILabel;

@interface WCSettingWatchContactsViewController : WCWatchSettingCommonViewController <UITableViewDataSource, UITableViewDelegate>
{
    MMTableView *_mainTableView;
    BOOL _edited;
    UILabel *_footerLabel;
    UIButton *_addButton;
    NSMutableArray *_watchContactsUsernames;
}

@property(retain, nonatomic) NSMutableArray *watchContactsUsernames; // @synthesize watchContactsUsernames=_watchContactsUsernames;
- (void).cxx_destruct;
- (void)saveQuickRepliesInFileAndTransferToWatch:(BOOL)arg1;
- (void)updateFooterView;
- (void)setNewBadgeInCell:(id)arg1 textLabel:(id)arg2;
- (void)setupSettingCell:(id)arg1 andTitle:(id)arg2 andImage:(id)arg3 indexPath:(id)arg4;
- (id)makeTableHeaderView;
- (void)initUI;
- (void)setNavItemWithTitle:(id)arg1 action:(SEL)arg2;
- (void)dismissModalViewControllerAndReturnContact:(id)arg1;
- (void)watchContactsDidChanged:(id)arg1;
- (void)addContactsAction:(id)arg1;
- (void)showSignalViewAction;
- (void)showMomentsViewAction;
- (void)showTipsViewAction;
- (void)showQuickRepliesViewAction;
- (void)showAddingContactsGuideAction:(id)arg1;
- (void)editingFinishedAction:(id)arg1;
- (void)editingBeginAction:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

