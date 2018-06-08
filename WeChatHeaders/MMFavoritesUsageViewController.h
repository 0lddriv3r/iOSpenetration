//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavoritesUsageDataControllerDelegate.h"
#import "IFavoritesExt.h"
#import "WCActionSheetDelegate.h"

@class FavSightView, MMFavoritesUsageDataController, MMTableView, MMUIWindow, NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface MMFavoritesUsageViewController : MMUIViewController <FavoritesUsageDataControllerDelegate, IFavoritesExt, WCActionSheetDelegate>
{
    MMFavoritesUsageDataController *m_dataController;
    UIView *m_multiSelectActionView;
    UIButton *m_delBtn;
    UILabel *m_multiTipLabel;
    MMTableView *m_tableView;
    UIView *m_emptyView;
    UIView *m_loadingView;
    UIView *m_footerView;
    UIActivityIndicatorView *m_activityView;
    MMUIWindow *m_fullScreenWindow;
    FavSightView *m_sightView;
    BOOL m_bFistLoadFromCache;
    unsigned long long nLeftSize;
    int fromScene;
}

@property(nonatomic) int fromScene; // @synthesize fromScene;
- (void).cxx_destruct;
- (void)OnGetNextPageFavoritesCapacityItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(BOOL)arg3;
- (void)OnGetFirstPageFavoritesCapacityItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(BOOL)arg3;
- (BOOL)onResponseForSelectFavItem:(id)arg1;
- (void)onSelectCountChanged:(unsigned int)arg1;
- (void)reloadTableAtIndexPath:(id)arg1;
- (void)reloadTableView;
- (void)showEmptyView;
- (void)onLoadingMore;
- (id)getCurrentViewController;
- (void)stopActivityLoading;
- (float)getContentOffsetAfterAdd:(id)arg1;
- (void)onBtnEdit;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)viewDidTransitionToNewSize;
- (void)showChoosenCapacityUI;
- (void)showLeftCapacityUI;
- (int)getSelectCapacity;
- (void)onDeleteItems;
- (void)hideSelectActionView;
- (void)initMultiSelectActionView;
- (void)initEmptyView;
- (void)HideLoadingView;
- (void)initLoadingView;
- (void)initTableFooterView;
- (void)updateTableFooterHasMore:(BOOL)arg1;
- (void)initTableView;
- (void)setViewTitle;
- (void)initNavigationBar;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
