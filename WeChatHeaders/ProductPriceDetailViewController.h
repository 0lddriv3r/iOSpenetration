//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ActionList, MMTableView, NSString;

@interface ProductPriceDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned long _getA8KeyScence;
    NSString *_productId;
    ActionList *_actionList;
    MMTableView *_tableView;
}

@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ActionList *actionList; // @synthesize actionList=_actionList;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)makeCell:(id)arg1 actionBase:(id)arg2;
- (id)genDescLabel2Cell:(id)arg1;
- (id)genDigestLabel2Cell:(id)arg1;
- (id)genNameLabel2Cell:(id)arg1;
- (id)getSystemAppID:(unsigned long)arg1;
- (void)OnReturn;
- (void)viewDidLoad;
- (id)initWithActionList:(id)arg1 ProductID:(id)arg2 Scence:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

