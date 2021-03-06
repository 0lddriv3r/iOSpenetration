//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IFavoritesExt.h"
#import "IFavoritesRepairSvrDataExt.h"
#import "MyFavoritesBaseCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MMFavoritesDataController : MMObject <IFavoritesRepairSvrDataExt, UITableViewDataSource, UITableViewDelegate, MyFavoritesBaseCellDelegate, IFavoritesExt, WCActionSheetDelegate>
{
    id <FavoritesDataControllerDelegate> m_delegate;
    NSMutableDictionary *m_cellViewCache;
    NSMutableDictionary *m_selectedItemsDict;
    NSMutableArray *m_arrFavItem;
    BOOL m_bReadyToLoad;
    BOOL m_bEditing;
    BOOL m_bHasMoreData;
    unsigned long m_curMinItemUpdateTime;
    int m_dataType;
    BOOL _m_bAnimating;
}

@property(nonatomic) BOOL m_bAnimating; // @synthesize m_bAnimating=_m_bAnimating;
@property(readonly, nonatomic) NSMutableDictionary *m_selectedItemsDict; // @synthesize m_selectedItemsDict;
@property(nonatomic) BOOL m_bHasMoreData; // @synthesize m_bHasMoreData;
@property(nonatomic) BOOL m_bReadyToLoad; // @synthesize m_bReadyToLoad;
@property(nonatomic) BOOL m_bEditing; // @synthesize m_bEditing;
@property(nonatomic) __weak id <FavoritesDataControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onRepairUpdateFavItem:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)PushXMLContentForItem:(id)arg1;
- (void)updateCellView:(id)arg1;
- (void)OnAddFavoritesItem:(id)arg1 ErrCode:(int)arg2;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnUpdateItems:(id)arg1;
- (void)OnUpdateItemDescription:(id)arg1 ErrCode:(int)arg2;
- (void)OnDelFavoritesItem:(unsigned long)arg1;
- (void)checkScrollForTop:(id)arg1;
- (void)autoScrollForSearchBar:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)realDeleteFavItemAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)deleteFavItemAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)removePostImgs:(id)arg1;
- (void)removeFavItemData:(id)arg1;
- (void)deleteFavItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)genNormalCellView:(int)arg1;
- (float)getHeightForItem:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onLoadMore;
- (int)getFavArrItemIndex:(int)arg1;
- (void)initData;
- (void)restartAllFailedItem;
- (void)addPostItem:(id)arg1;
- (void)safeAddItemList:(id)arg1;
- (float)getContentOffsetAfterAdd:(id)arg1 firstVisibleItemIndex:(int)arg2;
- (BOOL)isItemInArray:(unsigned long)arg1;
- (int)indexOfFavItem:(unsigned long)arg1;
- (BOOL)hasData;
- (void)clearCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

