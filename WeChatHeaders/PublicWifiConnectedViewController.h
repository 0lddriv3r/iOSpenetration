//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactInfoViewControllerDelegate.h"
#import "MMWebViewDelegate.h"
#import "PublicWifiBrandInoCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APBase, MMTableView, NSArray, NSString;

@interface PublicWifiConnectedViewController : MMUIViewController <PublicWifiBrandInoCellDelegate, MMWebViewDelegate, ContactInfoViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    BOOL _isNeedFollow;
    id <PublicWifiConnectedViewControllerDelegate> _delegate;
    NSArray *_rowData;
    MMTableView *_tableView;
    APBase *_apBase;
    unsigned int _followState;
}

@property(nonatomic) unsigned int followState; // @synthesize followState=_followState;
@property(nonatomic) BOOL isNeedFollow; // @synthesize isNeedFollow=_isNeedFollow;
@property(retain, nonatomic) APBase *apBase; // @synthesize apBase=_apBase;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *rowData; // @synthesize rowData=_rowData;
@property(nonatomic) __weak id <PublicWifiConnectedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestAddContactToWeixinServer;
- (void)onRemoveContact;
- (void)onFollowStateChanged:(BOOL)arg1;
- (void)jumpToBrandProfile;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)normalSpace;
- (void)genBrandDescCell:(id)arg1;
- (void)initFooterView;
- (void)initHeaderView;
- (void)initTableView;
- (void)initView;
- (BOOL)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)dismissWithAnimate;
- (void)onBack;
- (void)onDone;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)reloadData;
- (id)initWithApBase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
