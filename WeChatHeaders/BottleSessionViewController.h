//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FloatBottleContentLogicDelegate.h"
#import "IBottleSessionExt.h"
#import "IMMNewSessionMgrExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, NSArray, NSMutableDictionary, NSString, UILabel;

@interface BottleSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, IBottleSessionExt, FloatBottleContentLogicDelegate, IMMNewSessionMgrExt>
{
    MMTableView *m_tableView;
    UILabel *m_tipLabel;
    NSMutableDictionary *m_dicSessionCellCache;
    NSArray *m_arrNewArriveList;
    BOOL m_bFromMainFrame;
}

@property(nonatomic) BOOL m_bFromMainFrame; // @synthesize m_bFromMainFrame;
@property(retain, nonatomic) NSArray *m_arrNewArriveList; // @synthesize m_arrNewArriveList;
- (void).cxx_destruct;
- (void)onSessionTotalUnreadCountChange:(unsigned long)arg1;
- (void)showTips:(id)arg1;
- (void)deleteThrowBackBottle:(id)arg1;
- (void)BottleSessionChanged:(id)arg1;
- (void)BottleNeedReload;
- (void)updateSessionByName:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void)pluginsChanged:(id)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)initData;
- (void)reloadNewArrList;
- (BOOL)isNewArrive:(id)arg1;
- (void)initView;
- (void)updateLeftBarButtonItem;
- (void)initRightButton;
- (void)updateRightButtonState;
- (void)onJumpToBottleMainFrame:(id)arg1;
- (void)onEditContact:(id)arg1;
- (void)OnLeave:(id)arg1;
- (void)goToInfoViewController:(id)arg1;
- (void)UpdateTipLabel;
- (void)initTableView;
- (void)UpdateTableView;
- (void)UpdateHeaderView;
- (void)UpdateTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

