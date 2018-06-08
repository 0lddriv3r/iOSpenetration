//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMRefreshTableFooterDelegate.h"
#import "MsgNewImgDataLogicDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, MsgNewImgDataLogic, NSMutableArray, NSMutableDictionary, NSString, WCTimeLineFooterView;

@interface MsgFileBrowseViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MsgNewImgDataLogicDelegate, MMRefreshTableFooterDelegate>
{
    BOOL m_bLoading;
    NSMutableArray *m_arrSectionTitle;
    NSMutableDictionary *m_dicMsgsByTitle;
    BOOL _bHasLoad;
    NSString *_contactName;
    unsigned int _filterType;
    id <MMUIViewControllerDelegate> _m_delegate;
    MMTableView *_tableView;
    NSMutableArray *_msgArr;
    MsgNewImgDataLogic *_dataLogic;
    NSMutableDictionary *_cellViewCache;
    WCTimeLineFooterView *_loadingView;
}

@property(retain, nonatomic) WCTimeLineFooterView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableDictionary *cellViewCache; // @synthesize cellViewCache=_cellViewCache;
@property(nonatomic) BOOL bHasLoad; // @synthesize bHasLoad=_bHasLoad;
@property(retain, nonatomic) MsgNewImgDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
@property(retain, nonatomic) NSMutableArray *msgArr; // @synthesize msgArr=_msgArr;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) unsigned int filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)getMoreData;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (BOOL)onMsgNewImgLogicDataMatch:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)updateLoading;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)genNormalCellView:(id)arg1;
- (void)fixItem:(id)arg1;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)cellHeight;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)delMsgAtIndexPath:(id)arg1;
- (id)getMsgInSection:(int)arg1 Row:(int)arg2;
- (void)reloadData;
- (void)rebuildMsgData;
- (void)initNavigationBar;
- (void)initView;
- (BOOL)useBlackStatusbar;
- (id)getViewController;
- (void)initData;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
