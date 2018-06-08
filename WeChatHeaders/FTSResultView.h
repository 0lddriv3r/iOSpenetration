//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "FTSResultViewDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WSTagSearchDelegate.h"

@class AttributeLabel, MMTableView, MMTagSearchBar, MMUIViewController, NSMutableArray, NSString, UIImageView, UIView, WCTimeLineFooterView, WSTagSearchLogic;

@interface FTSResultView : MMUIView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, WSTagSearchDelegate, FTSResultViewDelegate>
{
    NSString *m_keyword;
    NSString *m_defaultKeyword;
    MMUIViewController *m_controller;
    UIView *m_bottomView;
    UIView *m_searchBarSuperView;
    UIImageView *m_searchBarWrap;
    MMTagSearchBar *m_searchBar;
    MMTableView *m_tableView;
    WCTimeLineFooterView *m_footerView;
    NSMutableArray *m_resultAry;
    NSString *m_emptyTipSuffix;
    AttributeLabel *m_emptyTipLabel;
    BOOL m_popForCancel;
    BOOL m_hasMoving;
    float m_moveStartOffset;
    float m_moveCurOffset;
    float m_moveContentOffsetY;
    UIImageView *m_bottomViewShadow;
    id <FTSResultViewDelegate> m_detailViewDelegate;
    int m_searchScene;
    WSTagSearchLogic *_tagSearchLogic;
    FTSResultView *_addedResultView;
    NSString *_cachedSearchBarText;
    BOOL _isUseSectionResult;
    float _searchTextFieldNormalWidth;
    struct CGSize _searchIconDefaultSize;
    UIImageView *_searchIcon;
    FTSResultView *_previousResultView;
    NSMutableArray *_arrSectionResult;
}

@property(retain, nonatomic) NSMutableArray *arrSectionResult; // @synthesize arrSectionResult=_arrSectionResult;
@property(retain, nonatomic) WSTagSearchLogic *tagSearchLogic; // @synthesize tagSearchLogic=_tagSearchLogic;
@property(nonatomic) __weak FTSResultView *previousResultView; // @synthesize previousResultView=_previousResultView;
@property(retain, nonatomic) FTSResultView *addedResultView; // @synthesize addedResultView=_addedResultView;
@property(nonatomic) int searchScene; // @synthesize searchScene=m_searchScene;
@property(nonatomic) __weak id <FTSResultViewDelegate> detailViewDelegate; // @synthesize detailViewDelegate=m_detailViewDelegate;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=m_bottomView;
@property(retain, nonatomic) NSString *emptyTipSuffix; // @synthesize emptyTipSuffix=m_emptyTipSuffix;
@property(retain, nonatomic) NSMutableArray *resultAry; // @synthesize resultAry=m_resultAry;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=m_keyword;
@property(retain, nonatomic) MMUIViewController *viewController; // @synthesize viewController=m_controller;
@property(retain, nonatomic) UIView *searchBarSuperView; // @synthesize searchBarSuperView=m_searchBarSuperView;
- (void).cxx_destruct;
- (void)onRemoveAddedResultView;
- (void)onFTSDetailViewReturn:(BOOL)arg1;
- (void)setCachedSearchBarText;
- (void)cacheSearchBarText;
- (id)getTagSearchText;
- (id)getTagDisplayText;
- (BOOL)searchBarHasTagInfo;
- (int)getRowCountForSection:(int)arg1;
- (int)getSectionCount;
- (id)getSeperatedFooterView;
- (id)getNoResultView:(float)arg1;
- (BOOL)needNoResultTableFooterView;
- (BOOL)needSeperatedFooterInSection:(int)arg1;
- (BOOL)needNoResultFooterInSection:(int)arg1;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLoadMore;
- (void)reloadData;
- (BOOL)isSearchRunning;
- (BOOL)hasMoreData;
- (BOOL)isSearchAll;
@property(readonly, nonatomic) BOOL isUseSectionResult;
- (BOOL)isSubResultView;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)handleTextChanged:(id)arg1 immediately:(BOOL)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)updateSearchBarPosition;
- (void)moveRight;
- (void)cancelMoveSearchBar;
- (void)setNoResultFooterView;
- (void)setEmptyFooterView;
- (void)setNormalFooterView;
- (void)setLoadingFooterView;
- (BOOL)hasSearchDone:(id)arg1;
- (id)getSearchArray:(id)arg1;
- (id)getSearchSectionArray:(id)arg1;
- (void)didAddResultView:(id)arg1;
- (void)resetSearchIconFrame;
- (id)getSearchIcon;
- (void)enableButton:(id)arg1;
- (BOOL)hasAddedResultView;
- (void)recursivePopPreviousResultView;
- (void)cancelSearch;
- (void)remove;
- (void)popForSubResultView:(BOOL)arg1;
- (id)getTopAddedResultView;
- (id)getFirstResultView;
- (void)pop:(BOOL)arg1;
- (void)pop;
- (void)showWithStaticSearchBar;
- (void)show;
- (id)getRealSearchText;
- (id)getSearchText;
- (void)handleRotateEvent;
- (void)clearResource;
- (void)setDefaultKeyWord:(id)arg1;
- (void)loadTableView;
- (void)loadView;
- (void)onBackButtonClick;
- (void)dealloc;
- (id)initWithSearchBar:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithViewController:(id)arg1;
- (id)init;
- (float)getSearchTextFieldWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

