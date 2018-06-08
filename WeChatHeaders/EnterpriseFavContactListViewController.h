//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IEnterpriseContactMgrExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CContact, MMTableView, NSArray, NSString, UIView;

@interface EnterpriseFavContactListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IEnterpriseContactMgrExt>
{
    CContact *_chatBrandContact;
    NSArray *_aryFav;
    MMTableView *_tableView;
    UIView *_emptyView;
}

- (void).cxx_destruct;
- (void)onBatchModifyEnterpriseContact:(id)arg1;
- (void)JumpToChatRoom:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)reloadAll;
- (void)updateEmptyView;
- (void)initEmptyView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (id)initWithSubChatContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

