//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WASessionNotifyMgrExtension.h"
#import "WASessionNotifyTableViewCellDelegate.h"

@class NSArray, NSMutableArray, NSNumber, NSString, UITableView, WAContactGetter;

@interface WASessionNotifySettingViewController : MMUIViewController <WASessionNotifyMgrExtension, UITableViewDelegate, UITableViewDataSource, WASessionNotifyTableViewCellDelegate, MMTipsViewControllerDelegate>
{
    NSNumber *_originGlobalOpenStatus;
    NSArray *_arrOriginCloseItem;
    NSNumber *_operatedGlobalOpenStatus;
    NSMutableArray *_arrOperatedOpenUserName;
    NSString *_askingOpenUserName;
    UITableView *_tableView;
    WAContactGetter *m_contactGetter;
    NSString *_sceneID;
}

@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void).cxx_destruct;
- (void)onSessionNotifyUpdate;
- (void)checkAndSendNotifyOperationToServer;
- (BOOL)currentGlobalNotifyOpenStatus;
- (void)removeUserNameInClostItemList:(id)arg1;
- (void)updateNotifyData;
- (void)initData;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2;
- (void)onClickNotifyOpenButton:(id)arg1;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)genHeaderFooterView:(id)arg1 topMargin:(unsigned int)arg2 bottomMargin:(unsigned int)arg3;
- (void)onClickGlobalNotifySwitch:(id)arg1;
- (id)makeSessionListCellWithRow:(int)arg1 tableView:(id)arg2;
- (id)makeGolbalNotifyCell;
- (void)reloadTableView;
- (void)layoutTableView;
- (void)layoutAllSubview;
- (void)initTableView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

