//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMRefreshTableFooterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCOutGetWCOGiftCardListDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString, WCOutGetWCOGiftCardList, WCTimeLineFooterView;

@interface WCOutShareCardViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, tableViewDelegate, MMRefreshTableFooterDelegate, WCOutGetWCOGiftCardListDelegate>
{
    BOOL _bHasMoreItems;
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    NSMutableArray *_arrMsgInMemory;
    WCOutGetWCOGiftCardList *_cgi;
}

@property(retain, nonatomic) WCOutGetWCOGiftCardList *cgi; // @synthesize cgi=_cgi;
@property(nonatomic) BOOL bHasMoreItems; // @synthesize bHasMoreItems=_bHasMoreItems;
@property(retain, nonatomic) NSMutableArray *arrMsgInMemory; // @synthesize arrMsgInMemory=_arrMsgInMemory;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)onClickBottomBtn;
- (void)configRightBarButtonItem;
- (void)WCOutGetWCOGiftCardListDidFail:(id)arg1;
- (void)WCOutGetWCOGiftCardList:(id)arg1 successWithResponse:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)getMoreData;
- (void)getData;
- (void)addMsgWithArray:(id)arg1;
- (void)initTableView;
- (void)initTableFooterView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
