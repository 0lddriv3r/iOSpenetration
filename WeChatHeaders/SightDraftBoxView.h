//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSString, SightView, UICollectionView, UIView;

@interface SightDraftBoxView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *m_container;
    NSMutableArray *m_dataAry;
    NSMutableArray *m_selectedAry;
    NSMutableArray *m_itemViewAry;
    int m_selectedItem;
    SightView *_selectedPlayer;
    UIView *m_previewContent;
    BOOL m_editMode;
    BOOL m_leaveEditMode;
    float m_itemWidth;
    id <SightDraftBoxDelegate> _delegate;
    NSString *_selectTag;
}

@property(retain, nonatomic) NSString *selectTag; // @synthesize selectTag=_selectTag;
@property(nonatomic) __weak id <SightDraftBoxDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reflashState;
- (void)scrollToBottom:(BOOL)arg1;
- (void)reloadContent;
- (void)confirmDeleted;
- (void)undoDeleted;
- (void)leaveEditMode;
- (void)enterEditMode;
- (BOOL)isInEditMode;
- (id)getPreviewClickAnimation;
- (id)getClickAnimation;
- (void)switchItemSelected:(int)arg1 withView:(id)arg2;
- (void)onDeleteButton:(id)arg1;
- (void)onItemLongClick:(id)arg1;
- (void)setItemSelected:(int)arg1;
- (void)onSelectItem:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadContainer;
- (void)clearPlayer;
- (id)makeCell:(int)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)clearSelectedPlayer;
- (void)setTopInset:(float)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (void)makeContainer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
