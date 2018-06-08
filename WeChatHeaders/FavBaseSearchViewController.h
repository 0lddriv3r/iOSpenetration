//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FavSearchControllerDelegate.h"
#import "IFavoritesExt.h"
#import "IFavoritesRepairSvrDataExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FavBaseSearchConfig, FavForwardLogicController, MMFavoritesSearchController, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UILabel, UIView;

@interface FavBaseSearchViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, FavSearchControllerDelegate, IFavoritesExt, FavForwardLogicDelegate, IFavoritesRepairSvrDataExt>
{
    BOOL _bUseFilter;
    BOOL _bEditing;
    BOOL _bReceiveSearchResult;
    BOOL _bChangeToEditingStatusAnimating;
    id <FavBaseSearchViewControllerDelegate> _delegate;
    NSString *_searchTitle;
    unsigned long _searchType;
    NSMutableArray *_arrFilterItems;
    NSMutableArray *_arrFilterDatas;
    NSMutableArray *_arrSelectedItems;
    FavBaseSearchConfig *_searchConfig;
    MMTableView *_tableView;
    UIView *_headerView;
    UIView *_filterFooterView;
    UIButton *_editBtn;
    UIButton *_forwardBtn;
    FavForwardLogicController *_favForwardLogicController;
    UIView *_loadingView;
    UILabel *_loadingLabel;
    UIView *_topNavView;
    UIView *_topSepLine;
    MMFavoritesSearchController *_searchController;
    NSMutableDictionary *_dicCellComponentCache;
}

@property(nonatomic) BOOL bChangeToEditingStatusAnimating; // @synthesize bChangeToEditingStatusAnimating=_bChangeToEditingStatusAnimating;
@property(retain, nonatomic) NSMutableDictionary *dicCellComponentCache; // @synthesize dicCellComponentCache=_dicCellComponentCache;
@property(nonatomic) BOOL bReceiveSearchResult; // @synthesize bReceiveSearchResult=_bReceiveSearchResult;
@property(retain, nonatomic) MMFavoritesSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UIView *topSepLine; // @synthesize topSepLine=_topSepLine;
@property(retain, nonatomic) UIView *topNavView; // @synthesize topNavView=_topNavView;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) FavForwardLogicController *favForwardLogicController; // @synthesize favForwardLogicController=_favForwardLogicController;
@property(retain, nonatomic) UIButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) UIView *filterFooterView; // @synthesize filterFooterView=_filterFooterView;
@property(nonatomic) BOOL bEditing; // @synthesize bEditing=_bEditing;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) BOOL bUseFilter; // @synthesize bUseFilter=_bUseFilter;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FavBaseSearchConfig *searchConfig; // @synthesize searchConfig=_searchConfig;
@property(retain, nonatomic) NSMutableArray *arrSelectedItems; // @synthesize arrSelectedItems=_arrSelectedItems;
@property(retain, nonatomic) NSMutableArray *arrFilterDatas; // @synthesize arrFilterDatas=_arrFilterDatas;
@property(retain, nonatomic) NSMutableArray *arrFilterItems; // @synthesize arrFilterItems=_arrFilterItems;
@property(nonatomic) unsigned long searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) NSString *searchTitle; // @synthesize searchTitle=_searchTitle;
@property(nonatomic) __weak id <FavBaseSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onRepairCheckFavItemAvailable:(unsigned long)arg1 occupied:(char *)arg2;
- (void)reloadViewAfterDataChanged;
- (void)processSearchResultDone;
- (void)processSearchResult;
- (id)getFavForawrdViewController;
- (void)OnDelFavoritesItem:(unsigned long)arg1;
- (void)OnSearch:(id)arg1;
- (void)onDidEndSearch;
- (void)onWillBeginSearch;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(BOOL)arg3 FromScene:(unsigned long)arg4 FavIndex:(unsigned long)arg5;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 FromScene:(unsigned long)arg4 FavIndex:(unsigned long)arg5 withCell:(id)arg6;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)onSearchCellViewCanShowMenuItems;
- (BOOL)shouldShowSearchResult:(id)arg1;
- (void)resetHeaderView:(id)arg1;
- (id)getCurrentViewController;
- (void)moreAction:(id)arg1;
- (void)showContentAction:(id)arg1;
- (void)forwardAction:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (unsigned long)entranceScene;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)genFilterCellView:(id)arg1 indexPath:(id)arg2;
- (id)genFilterCellComponent:(int)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)autoScrollForSearchBar:(id)arg1;
- (void)checkScrollForTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateForwardBtnWithCount:(unsigned long)arg1;
- (void)hideSearchBar;
- (void)showSearchBar;
- (void)onMultiSelectEdit;
- (void)OnForwardDone;
- (void)onForward;
- (void)onEdit;
- (void)initFilterFooterView;
- (void)addFilterFooterView;
- (void)forwardFavItemList:(id)arg1;
- (void)forwardDataAndItems:(id)arg1;
- (void)onReturn;
- (void)dealloc;
- (void)initData;
- (void)initLoadingView;
- (void)initHeaderView;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)showTopSepLine:(BOOL)arg1;
- (id)getReturnBarButton;
- (void)initNavigationBar;
- (void)initTableView;
- (void)initConfig;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

