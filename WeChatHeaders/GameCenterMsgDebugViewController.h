//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSArray, NSMutableArray, NSString;

@interface GameCenterMsgDebugViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>
{
    int _selectedSection;
    MMTableView *_tableView;
    NSMutableArray *_notifyData;
    NSArray *_sectionTitles;
    NSArray *_rowTitles;
}

@property(retain, nonatomic) NSArray *rowTitles; // @synthesize rowTitles=_rowTitles;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSMutableArray *notifyData; // @synthesize notifyData=_notifyData;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)initFindFriendEntryIconDownloadData;
- (void)initWeakNetStrategyData;
- (void)initGiftRedDotData;
- (void)initMsgCenterRedDotData;
- (void)initFloatLayerNotifyData;
- (void)initBubbleData;
- (void)initFindFriendNotifyData;
- (void)initData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

