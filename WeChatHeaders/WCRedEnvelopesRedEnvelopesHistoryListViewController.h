//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCPayPickerViewDelegate.h"

@class MMTableView, NSString, WCPayPickerView;

@interface WCRedEnvelopesRedEnvelopesHistoryListViewController : WCRedEnvelopesBaseViewController <UITableViewDelegate, UITableViewDataSource, WCPayPickerViewDelegate, WCActionSheetDelegate>
{
    id <WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate> m_delegate;
    BOOL m_loadingMoreOrderList;
    MMTableView *m_tableView;
    int m_enWCRedEnvelopesRedEnvelopesHistoryListViewControllerScene;
    BOOL m_bDidBack;
    WCPayPickerView *m_pickerView;
}

- (void).cxx_destruct;
- (void)OnClickedHeaderImageView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)WCPayPickerViewDidChooseRow:(int)arg1 atSession:(int)arg2;
- (void)OnSelectYears;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned int)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)changeHistoryType;
- (void)setScene:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)commentRedEnvelopes;
- (void)refreshViewWithData:(id)arg1;
- (id)GetHeaderView:(id)arg1;
- (void)initTableView;
- (id)getBottomView;
- (void)viewDidLoad;
- (void)loadMoreOrderList;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)OnLeftBarButtonDone;
- (void)initNavigationBar;
- (BOOL)useTransparentNavibar;
- (void)dealloc;
- (id)initWithScene:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

