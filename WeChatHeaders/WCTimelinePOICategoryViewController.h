//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMPackageDownloadMgrExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString;

@interface WCTimelinePOICategoryViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMPackageDownloadMgrExt>
{
    id <POICategoryDelegate> _delegate;
    MMTableView *m_tableView;
    NSMutableArray *m_categoryArray;
}

@property(retain, nonatomic) NSMutableArray *m_categoryArray; // @synthesize m_categoryArray;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(nonatomic) __weak id <POICategoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleCategoriesConfig:(id)arg1;
- (void)onPackageListUpdated:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)initTableHeaderView;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

