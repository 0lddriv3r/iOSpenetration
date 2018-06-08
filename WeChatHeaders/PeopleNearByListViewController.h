//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PeopleNearByListHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LbsContactInfoList, MMTableView, NSArray, NSMutableDictionary, NSString, PeopleNearByListHeaderView, SeePeopleNearByLogicController;

@interface PeopleNearByListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, PeopleNearByListHeaderViewDelegate>
{
    PeopleNearByListHeaderView *m_lbsHeaderView;
    LbsContactInfoList *m_lbsContactList;
    MMTableView *m_tableView;
    SeePeopleNearByLogicController *m_logicController;
    NSMutableDictionary *m_userHeaderImageCache;
    int m_iRoomMemberCount;
    id <PeopleNearByListViewControllerDelegate> m_delegate;
    NSArray *m_lbsPoiList;
    unsigned int m_abtestResult;
}

@property(retain, nonatomic) NSArray *lbsPoiList; // @synthesize lbsPoiList=m_lbsPoiList;
@property(nonatomic) int iRoomMemberCount; // @synthesize iRoomMemberCount=m_iRoomMemberCount;
@property(retain, nonatomic) NSMutableDictionary *userHeaderImageCache; // @synthesize userHeaderImageCache=m_userHeaderImageCache;
@property(retain, nonatomic) SeePeopleNearByLogicController *logicController; // @synthesize logicController=m_logicController;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=m_tableView;
@property(retain, nonatomic) LbsContactInfoList *lbsContactList; // @synthesize lbsContactList=m_lbsContactList;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)adjustSubviewRects;
- (void)onChatRoomNearByBtnClicked;
- (void)reloadWithLbsPoiList:(id)arg1;
- (void)reloadWithLbsContactInfoList:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)genLBSPeopleCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genLBSPoiCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (BOOL)isLBSPeopleIndex:(id)arg1;
- (id)getCachedHeaderImageForUser:(id)arg1;
- (void)showChatRoomView;
- (id)init;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
