//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMUIViewControllerExt.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMUISearchBar, MMUIViewController, NSMutableArray, NSString, UISearchDisplayController, UIView;

@interface MMSearchBar : MMObject <UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, MMUIViewControllerExt>
{
    id <MMSearchBarDelegate> m_delegate;
    NSString *m_nsLastSearchText;
    MMUISearchBar *m_searchBar;
    NSMutableArray *m_arrFilteredObject;
    UISearchDisplayController *m_searchDisplayController;
    MMUIViewController *m_viewController;
    int m_returnKeyType;
    BOOL m_isShouldRemoveDimmingView;
}

@property(nonatomic) int m_returnKeyType; // @synthesize m_returnKeyType;
@property(retain, nonatomic) MMUISearchBar *m_searchBar; // @synthesize m_searchBar;
@property(retain, nonatomic) UISearchDisplayController *m_searchDisplayController; // @synthesize m_searchDisplayController;
@property(retain, nonatomic) NSString *m_nsLastSearchText; // @synthesize m_nsLastSearchText;
@property(nonatomic) __weak id <MMSearchBarDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)clearSearchDisplayController;
- (void)finishSearch;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)yOffsetForUnactiveStatus;
- (id)getFilteredObjects;
- (void)clearFilteredObjects;
- (void)addFilteredObject:(id)arg1;
- (unsigned int)getObjectCount;
- (void)setFilteredObjects:(id)arg1;
- (id)getObjectFor:(unsigned int)arg1;
- (void)UISplitViewWillChangeSplitMode;
- (void)dealloc;
- (id)initWithContentsController:(id)arg1;
- (id)initWithContentsController:(id)arg1 change:(BOOL)arg2;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)resetSearchDisplayController;
@property(readonly, nonatomic) UIView *contentsView;
- (void)fixSearchIconSize;
- (void)fixOrientationBug;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

