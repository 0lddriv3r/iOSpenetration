//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "MMTableViewIndexViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCPaySelectBankSearchResultViewControllerDelegate.h"
#import "WCPayT2BCGetBankListCgiDelegate.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, UISearchController, WCPaySelectBankSearchResultViewController, WCPayT2BCGetBankListCgi;

@interface WCPaySelectBankViewController : WCPayBaseViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDelegate, UITableViewDataSource, WCPayT2BCGetBankListCgiDelegate, WCPaySelectBankSearchResultViewControllerDelegate, MMTableViewIndexViewDelegate>
{
    MMTableView *m_tableView;
    id <WCPaySelectBankViewControllerDelegate> _m_delegate;
    UISearchController *_searchController;
    WCPaySelectBankSearchResultViewController *_resultsController;
    WCPayT2BCGetBankListCgi *_m_getBankListCgi;
    NSMutableArray *_m_majorBankList;
    NSMutableDictionary *_m_allBankData;
    NSMutableArray *_m_indexArray;
    float _searchBackgroundY;
    float _searchBackgroundHeight;
}

@property(nonatomic) float searchBackgroundHeight; // @synthesize searchBackgroundHeight=_searchBackgroundHeight;
@property(nonatomic) float searchBackgroundY; // @synthesize searchBackgroundY=_searchBackgroundY;
@property(retain, nonatomic) NSMutableArray *m_indexArray; // @synthesize m_indexArray=_m_indexArray;
@property(retain, nonatomic) NSMutableDictionary *m_allBankData; // @synthesize m_allBankData=_m_allBankData;
@property(retain, nonatomic) NSMutableArray *m_majorBankList; // @synthesize m_majorBankList=_m_majorBankList;
@property(retain, nonatomic) WCPayT2BCGetBankListCgi *m_getBankListCgi; // @synthesize m_getBankListCgi=_m_getBankListCgi;
@property(retain, nonatomic) WCPaySelectBankSearchResultViewController *resultsController; // @synthesize resultsController=_resultsController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) __weak id <WCPaySelectBankViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (id)parseBankNameKey:(id)arg1;
- (int)mmcurrentIndexForTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (int)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)layoutCell:(id)arg1 bankItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)OnCancel;
- (void)updateNavigationBar;
- (void)updateTableView;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)didSelectBankItem:(id)arg1;
- (void)onWCPaySelectBankSearchResultViewControllerDidSelectBankItem:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateSearch;
- (void)updateView;
- (void)OnGetBankListWithError:(id)arg1 errorCode:(unsigned long)arg2;
- (void)OnGetBankListOK:(id)arg1 allBankList:(id)arg2;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewWillAppear:(BOOL)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)fixSearchBarBackgroundWhenActive;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

