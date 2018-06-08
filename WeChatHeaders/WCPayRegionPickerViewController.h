//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "LocationRetrieveDelegate.h"
#import "MMRegionSeachResultsViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LocationRetriever, MMRegionCodeMgr, MMRegionSeachResultsViewController, MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UISearchController, UIViewController;

@interface WCPayRegionPickerViewController : WCPayBaseViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, MMRegionSeachResultsViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, LocationRetrieveDelegate, PBMessageObserverDelegate>
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_dataDict;
    NSMutableArray *m_dataAry;
    BOOL m_isInitRegionCode;
    NSString *m_selectedRegionCode;
    MMRegionCodeMgr *m_regionCodeMgr;
    NSArray *arrCurRegionCodes;
    LocationRetriever *_locationRetriever;
    int m_iLocationRetrieveResult;
    NSMutableArray *m_arrServerReturnCode;
    BOOL m_bInCurrent;
    BOOL _isTopLevel;
    BOOL _openSearch;
    BOOL _chinaFirst;
    UIViewController *topController;
    id <WCPayRegionPickerViewControllerDelegate> _delegate;
    NSArray *_allRegions;
    UISearchController *_searchController;
    MMRegionSeachResultsViewController *_resultsController;
    NSArray *_foreignCountries;
}

@property(retain, nonatomic) NSArray *foreignCountries; // @synthesize foreignCountries=_foreignCountries;
@property(retain, nonatomic) MMRegionSeachResultsViewController *resultsController; // @synthesize resultsController=_resultsController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSArray *allRegions; // @synthesize allRegions=_allRegions;
@property(nonatomic) BOOL chinaFirst; // @synthesize chinaFirst=_chinaFirst;
@property(nonatomic) BOOL openSearch; // @synthesize openSearch=_openSearch;
@property(retain, nonatomic) NSArray *arrCurRegionCodes; // @synthesize arrCurRegionCodes;
@property(retain, nonatomic) NSString *selectedRegionCode; // @synthesize selectedRegionCode=m_selectedRegionCode;
@property(nonatomic) __weak id <WCPayRegionPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isTopLevel; // @synthesize isTopLevel=_isTopLevel;
@property(nonatomic) __weak UIViewController *topController; // @synthesize topController;
- (void).cxx_destruct;
- (id)getResultsWithRegion:(id)arg1;
- (void)didSelectRegion:(id)arg1;
- (void)selectForeignCountriesEntranceCell;
- (id)makeForeginEntrance:(id)arg1;
- (BOOL)isForeignCountriesEntranceCell:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)resultVC:(id)arg1 didSelectedRegion:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)setupSearch;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)isLocationSection:(int)arg1;
- (BOOL)isLocationRetrieving;
- (void)scrollToRegion:(id)arg1;
- (void)OnReturn;
- (void)OnDataChange;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupView;
- (void)initTableView;
- (void)initRegion;
- (id)initWithArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
