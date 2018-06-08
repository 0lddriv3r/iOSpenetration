//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FavTagViewDelegate.h"
#import "IVOIPUILogicMgrExt.h"
#import "MMScrollActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCScheduleLogicControllerDelegate.h"
#import "WNArticleControllerDelegate.h"
#import "WNSelectViewDelegate.h"

@class FavForwardLogicController, FavoritesBrowseDetailReportData, FavoritesItemDataField, MMScrollActionSheet, MMTableView, MMTimer, NSString, UIView, WCScheduleLogicController, WNArticleDataController, WNArticleFooterView, WNParagraphStyleToolView, WNSelectView;

@interface WNArticleViewController : MMUIViewController <WCActionSheetDelegate, FavForwardLogicDelegate, FavTagViewDelegate, UIAlertViewDelegate, WNSelectViewDelegate, WCScheduleLogicControllerDelegate, MMScrollActionSheetDelegate, IVOIPUILogicMgrExt, WNArticleControllerDelegate>
{
    WNParagraphStyleToolView *m_toolView;
    UIView *_headerView;
    WNArticleFooterView *_footerView;
    WNArticleDataController *m_dataController;
    FavForwardLogicController *_favForwardLogicController;
    MMTableView *m_tableView;
    MMTimer *_saveTimer;
    WNSelectView *_selectView;
    BOOL bDeletePopView;
    BOOL bToShowStopRecordAlert;
    float m_keyboardHeight;
    WCScheduleLogicController *_scheduleLogicController;
    MMScrollActionSheet *_scrollActionSheet;
    BOOL bEditable;
    BOOL _bShowMoreMenu;
    id <FavNotePostDelegate> favNotePostDelegate;
    FavoritesBrowseDetailReportData *_reportData;
    FavoritesItemDataField *_scrollToData;
}

@property(retain, nonatomic) FavoritesItemDataField *scrollToData; // @synthesize scrollToData=_scrollToData;
@property(retain, nonatomic) FavoritesBrowseDetailReportData *reportData; // @synthesize reportData=_reportData;
@property(nonatomic) BOOL bShowMoreMenu; // @synthesize bShowMoreMenu=_bShowMoreMenu;
@property(nonatomic) __weak id <FavNotePostDelegate> favNotePostDelegate; // @synthesize favNotePostDelegate;
@property(nonatomic) BOOL bEditable; // @synthesize bEditable;
- (void).cxx_destruct;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onWCScheduleItem:(id)arg1 SetSuccess:(BOOL)arg2 ErrMsg:(id)arg3;
- (void)onWCScheduleSelectDatePickerView;
- (void)onWCScheduleCancelDatePickerView;
- (id)GetScheduleHeaderView;
- (void)onScheduleHeaderViewClicked;
- (void)onUpdateScheduleItem:(id)arg1;
- (BOOL)shouldShowSchedule;
- (void)updateToolBarHeight:(int)arg1 KeyboardHeight:(float)arg2;
- (void)onTopBarFrameChanged;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (BOOL)BeEditable;
- (void)onHideSelectAllView;
- (void)onNoteSecurityCheckFail;
- (void)onNoteSecurityCheckOK;
- (void)onDownloadHtmlExpire;
- (void)onDownloadHtmlFail;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)realShowStopRecordAlertView;
- (void)onClickCellShowStopRecordingAlert;
- (BOOL)needHideKeyboardToShowAlert;
- (void)onShowRecordingAlert;
- (void)onEdited;
- (void)onShowFullToolbar;
- (void)hideToolbarView;
- (void)reloadRightBarBtn;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)onTxtInfoTextLengthExceed;
- (void)onNoneTxtInfoNumExceed;
- (BOOL)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)initSelectView;
- (void)onSelectObjectView:(id)arg1;
- (void)onSelectAllViewToShow;
- (void)onSelectParaTextForEditing:(struct _NSRange)arg1;
- (id)getViewController;
- (BOOL)isCellVisible:(int)arg1;
- (void)hasLoadAllParaInfo;
- (void)reloadAll;
- (void)setBecomeFirstResponse:(int)arg1;
- (void)makeCellSelectionSyleNoneAtIndexPath:(id)arg1;
- (void)unhighlightRowAtIndexPath:(id)arg1;
- (void)highlightRowAtIndexPath:(id)arg1;
- (void)scrollToIndex:(int)arg1 atScrollPosition:(int)arg2 needHighlight:(BOOL)arg3 animation:(BOOL)arg4;
- (void)scrollToIndex:(int)arg1 atScrollPosition:(int)arg2;
- (void)scrollToIndex:(int)arg1;
- (void)deleteRowAtIndex:(int)arg1;
- (void)insertNewRowAtIndex:(int)arg1 withCount:(int)arg2;
- (void)insertNewRowAtIndex:(int)arg1;
- (void)reloadRowsAtIndexArray:(id)arg1;
- (void)reloadRowAtIndex:(int)arg1;
- (void)resizeCellViewAtIndex:(int)arg1;
- (void)onFavTagEditOK;
- (void)onFavTagEditBegin:(int)arg1;
- (id)getFavForawrdViewController;
- (id)getFooterViewImage;
- (id)getTableViewimage;
- (id)getNoteImage;
- (float)getTableViewContentHeight;
- (void)realSaveNoteAsImage;
- (void)saveNoteAsImage;
- (void)setConversionOntop:(BOOL)arg1;
- (void)showRecordingAlert:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onTimeSave;
- (void)stopAutoSaveTimer;
- (void)startAutoSaveTimer;
- (void)onMenuAction:(id)arg1;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (void)onForwardNote2WC;
- (void)forwardNote;
- (id)tryRemoveChatVoiceBeforeForward:(id)arg1;
- (void)saveNote;
- (void)backupNote;
- (void)disMissSelf;
- (void)configNavbar;
- (id)makeDefaultTableHeaderView;
- (void)initTableView;
- (void)initHeaderView;
- (BOOL)shouldShowAddTimeHeader;
- (void)initToolView;
- (void)initUI;
- (BOOL)isEmpty;
- (void)configWithWCDataItem:(id)arg1;
- (void)configWithFavItem:(id)arg1;
- (void)configWithMsg:(id)arg1;
- (void)initData;
- (BOOL)shouldInteractivePop;
- (BOOL)useTransparentNavibar;
- (void)checkShowContext;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (void)setM_uiVcType:(unsigned long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
