//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString;

@interface WCCardListViewController : MMUIViewController <tableViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *m_tableView;
    id <WCCardListViewControllerDelegate> m_delegate;
    NSMutableArray *_cardDataList;
}

@property(retain, nonatomic) NSMutableArray *cardDataList; // @synthesize cardDataList=_cardDataList;
@property(nonatomic) __weak id <WCCardListViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)loadCellSubView:(id)arg1 cardIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)OnDataChange;
- (void)dealloc;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)onCancel;
- (void)initView;
- (void)initTableView;
- (void)changeDataSource:(id)arg1;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
