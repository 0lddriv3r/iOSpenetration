//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonManageCellDelegate.h"
#import "IEmoticonPackageMgrExt.h"
#import "StoreEmotionDeleteCgiDelegate.h"
#import "StoreEmotionReplaceMyPanelListCgiDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString, StoreEmotionDeleteCgi, StoreEmotionReplaceMyPanelListCgi, StoreEmotionSynchronizeView, UILabel, UIView;

@interface EmoticonManageViewController : MMUIViewController <EmoticonManageCellDelegate, StoreEmotionDeleteCgiDelegate, StoreEmotionReplaceMyPanelListCgiDelegate, tableViewDelegate, UITableViewDelegate, UITableViewDataSource, IEmoticonPackageMgrExt, WCActionSheetDelegate>
{
    BOOL m_hideOtherSectoin;
    BOOL m_hideUndownloadRow;
    UIView *_headerView;
    StoreEmotionSynchronizeView *_syncView;
    BOOL m_isDeleteMode;
    NSMutableArray *m_arrExistLocalPackage;
    NSMutableArray *m_arrOtherPackage;
    MMTableView *m_tableView;
    UILabel *m_tipsLabel;
    UIView *m_existLocalHeadView;
    StoreEmotionDeleteCgi *m_deleteCgi;
    StoreEmotionReplaceMyPanelListCgi *m_replaceCgi;
    NSString *_leftBarTitle;
    int _hasNotDownloadCount;
}

@property(nonatomic) int hasNotDownloadCount; // @synthesize hasNotDownloadCount=_hasNotDownloadCount;
@property(retain, nonatomic) NSString *leftBarTitle; // @synthesize leftBarTitle=_leftBarTitle;
@property(retain, nonatomic) StoreEmotionReplaceMyPanelListCgi *m_replaceCgi; // @synthesize m_replaceCgi;
@property(retain, nonatomic) StoreEmotionDeleteCgi *m_deleteCgi; // @synthesize m_deleteCgi;
@property(retain, nonatomic) UIView *m_existLocalHeadView; // @synthesize m_existLocalHeadView;
@property(nonatomic) BOOL m_isDeleteMode; // @synthesize m_isDeleteMode;
@property(retain, nonatomic) UILabel *m_tipsLabel; // @synthesize m_tipsLabel;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSMutableArray *m_arrOtherPackage; // @synthesize m_arrOtherPackage;
@property(retain, nonatomic) NSMutableArray *m_arrExistLocalPackage; // @synthesize m_arrExistLocalPackage;
- (void).cxx_destruct;
- (void)onStoreEmotionReplaceMyPanelListCgiFailed;
- (void)onStoreEmotionReplaceMyPanelListCgiOKWithPids:(id)arg1;
- (void)onStoreEmotionDeleteCgiFailed:(id)arg1;
- (void)onStoreEmotionDeleteCgiOK:(id)arg1;
- (void)onUnstallButtonClickWithPid:(id)arg1;
- (BOOL)isEmoticonManageCellDeleteMode;
- (void)deleteSelectedEmoticonPackageWithPid:(id)arg1;
- (void)saveSort;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)OnUpdateEmoticonPackageListAfterSort;
- (void)OnUpdateEmoticonPackageList;
- (void)viewDidLayoutSubviews;
- (void)onGotoNormalMode;
- (void)OnCancel;
- (void)OnDone;
- (void)onGotoDeleteMode;
- (BOOL)isInExistLocalSecticon:(int)arg1;
- (void)reloadData;
- (void)updateEditButtonStatus;
- (BOOL)isDeleteMode;
- (void)OnCancelModalView:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initView;
- (void)loadDataFromDB;
- (void)initData;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

