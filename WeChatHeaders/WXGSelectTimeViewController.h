//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WXGActionSheetDatePickerDelegate.h"

@class MMTableView, NSDate, NSString, WXGActionSheetDatePicker;

@interface WXGSelectTimeViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WXGActionSheetDatePickerDelegate, UIAlertViewDelegate>
{
    NSDate *m_beginBeginDate;
    NSDate *m_endEndDate;
    NSDate *m_beginDate;
    NSDate *m_endDate;
    BOOL m_firstClickSelectBeginTime;
    BOOL m_firstClickSelectEndTime;
    BOOL _selectAllTime;
    BOOL _selectTextOnly;
    BOOL _shouldSelectContent;
    NSDate *_beginDate;
    NSDate *_endDate;
    NSDate *_oldestDate;
    NSDate *_newestDate;
    NSString *_selectTimeTitle;
    NSString *_selectContentTitle;
    NSString *_selectTextOnlyTip;
    NSString *_selectSpecificTimeTip;
    id <WXGSelectTimeViewControllerDelegate> _delegate;
    MMTableView *_mainTableView;
    WXGActionSheetDatePicker *_sheetDatePicker;
}

+ (id)getDateWithoutHMS:(id)arg1;
+ (id)getCurrentDateWithoutHMS;
@property(retain, nonatomic) WXGActionSheetDatePicker *sheetDatePicker; // @synthesize sheetDatePicker=_sheetDatePicker;
@property(retain, nonatomic) MMTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(nonatomic) BOOL shouldSelectContent; // @synthesize shouldSelectContent=_shouldSelectContent;
@property(retain, nonatomic) id <WXGSelectTimeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *selectSpecificTimeTip; // @synthesize selectSpecificTimeTip=_selectSpecificTimeTip;
@property(retain, nonatomic) NSString *selectTextOnlyTip; // @synthesize selectTextOnlyTip=_selectTextOnlyTip;
@property(retain, nonatomic) NSString *selectContentTitle; // @synthesize selectContentTitle=_selectContentTitle;
@property(retain, nonatomic) NSString *selectTimeTitle; // @synthesize selectTimeTitle=_selectTimeTitle;
@property(nonatomic) BOOL selectTextOnly; // @synthesize selectTextOnly=_selectTextOnly;
@property(nonatomic) BOOL selectAllTime; // @synthesize selectAllTime=_selectAllTime;
@property(retain, nonatomic) NSDate *newestDate; // @synthesize newestDate=_newestDate;
@property(retain, nonatomic) NSDate *oldestDate; // @synthesize oldestDate=_oldestDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onCancelSelectDate;
- (void)onSelectDateDone:(id)arg1;
- (void)onSelectEndTime;
- (void)onSelectBeginTime;
- (void)onDone;
- (void)onCancel;
- (void)p_popNavigationController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (void)p_reloadView;
- (void)initView;
- (void)refreshData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

