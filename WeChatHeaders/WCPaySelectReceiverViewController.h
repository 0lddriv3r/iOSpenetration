//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, NSMutableArray, NSString, UILabel, WCUIAlertView;

@interface WCPaySelectReceiverViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    MMTableView *m_tableView;
    id <WCPaySelectReceiverViewControllerDelegate> _delegate;
    NSMutableArray *_m_otherHistoryArray;
    NSMutableArray *_m_myHistoryArray;
    WCUIAlertView *_m_alertView;
    UILabel *_m_emptyTipsLabel;
}

@property(retain, nonatomic) UILabel *m_emptyTipsLabel; // @synthesize m_emptyTipsLabel=_m_emptyTipsLabel;
@property(retain, nonatomic) WCUIAlertView *m_alertView; // @synthesize m_alertView=_m_alertView;
@property(retain, nonatomic) NSMutableArray *m_myHistoryArray; // @synthesize m_myHistoryArray=_m_myHistoryArray;
@property(retain, nonatomic) NSMutableArray *m_otherHistoryArray; // @synthesize m_otherHistoryArray=_m_otherHistoryArray;
@property(nonatomic) __weak id <WCPaySelectReceiverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)confirmDeleteRecord:(id)arg1;
- (void)confirmSetRemark:(id)arg1 remark:(id)arg2;
- (void)confirmComment:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)layoutCell:(id)arg1 candidate:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)OnCancel;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)updateTableView;
- (void)updateNavigationBar;
- (BOOL)isDataEmpty;
- (void)updateEmptyTipsLabel;
- (void)updateView;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

