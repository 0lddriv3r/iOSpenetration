//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MyFavoritesBaseCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MMFavoritesUsageDataController : MMObject <UITableViewDataSource, UITableViewDelegate, MyFavoritesBaseCellDelegate>
{
    NSMutableDictionary *m_cellViewCache;
    NSMutableArray *m_arrFavItem;
    int m_curMinItemDataSize;
    BOOL m_bEditing;
    BOOL m_bReadyToLoad;
    BOOL m_bHasMoreData;
    BOOL _m_bAnimating;
    id <FavoritesUsageDataControllerDelegate> m_delegate;
    NSMutableDictionary *m_selectedItemsDict;
}

@property(nonatomic) BOOL m_bAnimating; // @synthesize m_bAnimating=_m_bAnimating;
@property(readonly, nonatomic) NSMutableDictionary *m_selectedItemsDict; // @synthesize m_selectedItemsDict;
@property(nonatomic) BOOL m_bHasMoreData; // @synthesize m_bHasMoreData;
@property(nonatomic) BOOL m_bReadyToLoad; // @synthesize m_bReadyToLoad;
@property(nonatomic) BOOL m_bEditing; // @synthesize m_bEditing;
@property(nonatomic) __weak id <FavoritesUsageDataControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)PushXMLContentForItem:(id)arg1;
- (void)onLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)removeFavItemData:(id)arg1;
- (void)removePostImgs:(id)arg1;
- (void)deleteFavItems:(id)arg1;
- (void)deleteFavItemAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)genNormalCellView:(int)arg1;
- (float)getHeightForItem:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)getContentOffsetAfterAdd:(id)arg1 firstVisibleItemIndex:(int)arg2;
- (int)indexOfFavItem:(unsigned long)arg1;
- (void)safeAddItemList:(id)arg1;
- (BOOL)hasData;
- (void)initData;
- (void)clearCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

