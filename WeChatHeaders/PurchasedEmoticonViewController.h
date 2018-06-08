//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonBoughtListMgrExt.h"
#import "MMRefreshTableFooterDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class EmoticonStoreFootView, MMTableView, NSMutableArray, NSString;

@interface PurchasedEmoticonViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, EmoticonBoughtListMgrExt, MMRefreshTableFooterDelegate, WCActionSheetDelegate, UIAlertViewDelegate>
{
    BOOL isLoadedFromCache;
    NSMutableArray *m_arrTableData;
    MMTableView *m_tableView;
    EmoticonStoreFootView *m_tailView;
    float labelMaxWidth;
}

@property(nonatomic) float labelMaxWidth; // @synthesize labelMaxWidth;
@property(nonatomic) BOOL isLoadedFromCache; // @synthesize isLoadedFromCache;
@property(retain, nonatomic) EmoticonStoreFootView *m_tailView; // @synthesize m_tailView;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSMutableArray *m_arrTableData; // @synthesize m_arrTableData;
- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)reloadData;
- (void)OnBoughtListChanged:(id)arg1 withRet:(int)arg2;
- (void)OnRestoreEmoticonItemFailed;
- (void)OnRestoreEmoticonItemSuccess;
- (struct CGPoint)makeTimeLimitLabel:(id)arg1 IndexPath:(id)arg2 marginRight:(struct CGPoint)arg3;
- (struct CGPoint)makeTimeLabel:(id)arg1 IndexPath:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (struct CGPoint)makePriceLabel:(id)arg1 IndexPath:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (struct CGPoint)makePackNameLabel:(id)arg1 IndexPath:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (struct CGPoint)makeImageView:(id)arg1 IndexPath:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)checkIAPRet:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onClickNavRightButton:(id)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)initFooterView;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

