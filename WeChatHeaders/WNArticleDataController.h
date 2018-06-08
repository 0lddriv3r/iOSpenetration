//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "FavForwardLogicDelegate.h"
#import "IFavoritesExt.h"
#import "IFavoritesRepairSvrDataExt.h"
#import "IMsgExt.h"
#import "IRecordDownloadExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WNArticleToolViewDelegate.h"
#import "WNParaCellViewDelegate.h"

@class CMessageWrap, FavForwardLogicController, FavoritesItem, FavoritesItemDataField, NSMutableArray, NSString, WCDataItem, WNEditingInfo, WNParagraphCellView, WNParagraphMgr;

@interface WNArticleDataController : MMObject <FavForwardLogicDelegate, IFavoritesRepairSvrDataExt, IMsgExt, UITableViewDataSource, UITableViewDelegate, WNParaCellViewDelegate, WNArticleToolViewDelegate, IFavoritesExt, IRecordDownloadExt>
{
    unsigned long _editTime;
    WNParagraphCellView *m_EditReminderCellView;
    WNParagraphMgr *m_wnParaMgr;
    unsigned long maxObjectId;
    int curUIStatus;
    FavForwardLogicController *m_favForwardLogicController;
    WNEditingInfo *wnEditingInfo;
    BOOL _scheduleModified;
    BOOL bEditable;
    BOOL bEdited;
    BOOL bFromPreView;
    BOOL _m_bMemuSelectText;
    id <WNArticleControllerDelegate> m_delegate;
    NSMutableArray *m_paraArray;
    NSMutableArray *m_allParaInfoArray;
    FavoritesItem *m_favItem;
    CMessageWrap *m_recordMsg;
    WCDataItem *m_wcDataItem;
    FavoritesItemDataField *_listeningDeleteData;
}

@property(nonatomic) BOOL m_bMemuSelectText; // @synthesize m_bMemuSelectText=_m_bMemuSelectText;
@property(retain, nonatomic) FavoritesItemDataField *listeningDeleteData; // @synthesize listeningDeleteData=_listeningDeleteData;
@property(retain, nonatomic) WCDataItem *m_wcDataItem; // @synthesize m_wcDataItem;
@property(retain, nonatomic) CMessageWrap *m_recordMsg; // @synthesize m_recordMsg;
@property(retain, nonatomic) FavoritesItem *m_favItem; // @synthesize m_favItem;
@property(nonatomic) BOOL bFromPreView; // @synthesize bFromPreView;
@property(nonatomic) BOOL bEdited; // @synthesize bEdited;
@property(nonatomic) BOOL bEditable; // @synthesize bEditable;
@property(retain, nonatomic) NSMutableArray *m_allParaInfoArray; // @synthesize m_allParaInfoArray;
@property(retain, nonatomic) NSMutableArray *m_paraArray; // @synthesize m_paraArray;
@property(nonatomic) __weak id <WNArticleControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onChatNewMsgSent:(id)arg1;
- (void)onRepairCheckFavItemAvailable:(unsigned long)arg1 occupied:(char *)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnUpdateScheduleItem:(id)arg1 hasHandle:(char *)arg2;
- (void)OnNoteSecurityCheckFail:(unsigned long)arg1;
- (void)OnNoteSecurityCheckOK:(unsigned long)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)OnDownloadFavoritesItemFail:(id)arg1 LocalDataId:(id)arg2;
- (void)OnDownloadFavoritesItemOK:(id)arg1 LocalDataId:(id)arg2;
- (void)scrollViewDidEndScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)genHeaderView;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)updataTableViewHeight:(id)arg1;
- (BOOL)isTodoParagraph;
- (BOOL)isOlLiParagraph;
- (BOOL)isUlLiParagraph;
- (BOOL)isSelectedTextBold;
- (void)onShowBasicToolView;
- (void)onShowFullToolView;
- (unsigned long)objectCount;
- (BOOL)ifHasReachedSizeLimit;
- (void)onToolViewParagraphSetTodo;
- (void)onParagraphSetOl;
- (void)onParagraphSetUl;
- (void)onTextSetBold;
- (BOOL)isInsertingInCurrentView:(id)arg1;
- (void)insertItems:(id)arg1;
- (id)getFavForawrdViewController;
- (BOOL)ifTextLengthExceedLimit:(int)arg1;
- (void)onTextViewPaste;
- (BOOL)shouldLetTextViewHandleSelectAll;
- (void)onSelectObjectView:(id)arg1;
- (void)onSelectAll;
- (void)onSelectionChanged:(struct _NSRange)arg1;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)onCellViewResighFirstResponser;
- (BOOL)canEdit;
- (BOOL)isEditing;
- (void)onCellStopRecordAlertViewWillShow;
- (id)getDataArray;
- (id)getFavItem;
- (id)getViewController;
- (void)OnTodoCheckChange;
- (void)OnListStyleTextKeyboardReturn:(id)arg1 inCellView:(id)arg2 Atlocation:(int)arg3;
- (BOOL)ignoreCmdBecauseOfVoiceActive:(id)arg1;
- (void)OnObjectCellDelTextRight:(id)arg1 inCellView:(id)arg2;
- (void)OnObjectCellKeyboardReturnRight:(id)arg1 inCellView:(id)arg2;
- (void)OnObjectCellKeyboardReturnLeft:(id)arg1 inCellView:(id)arg2;
- (void)OnObjectCellAddTextRight:(id)arg1 inCellView:(id)arg2 newText:(id)arg3;
- (void)OnObjectCellDelTextLeft:(id)arg1 inCellView:(id)arg2;
- (void)OnObjectCellAddTextLeft:(id)arg1 inCellView:(id)arg2 newText:(id)arg3;
- (void)onMainTextKeyboardBack:(id)arg1 inCellView:(id)arg2;
- (void)onCellContentChanged:(id)arg1;
- (void)setPreviousSelectedToDelete;
- (void)onTextTooLongNeedCut:(id)arg1 inRange:(struct _NSRange)arg2 withText:(id)arg3;
- (void)onTextChanged:(id)arg1 newText:(id)arg2;
- (void)updateEditingCellInfo:(id)arg1;
- (void)textCellShouldEndEditing:(id)arg1;
- (void)textCellDidBeginEditing:(id)arg1;
- (void)textCellShouldBeginEditing:(id)arg1;
- (void)selectPaste:(id)arg1;
- (void)selectCut:(id)arg1;
- (void)selectCopy:(id)arg1;
- (void)selectDelete:(id)arg1;
- (id)getCursorPostionString:(id)arg1;
- (void)updateParagraphFlags;
- (void)updateCellViewUIHeight:(int)arg1;
- (void)updateLastTextFlag;
- (void)tryAddToLoadArray:(id)arg1 atArrayIndex:(int)arg2 withEditingIndex:(int)arg3;
- (void)updateAllOlIndexUI;
- (void)cutTextSetListStyle:(int)arg1 InCellView:(id)arg2;
- (void)loadParaInfoToIndex:(unsigned long)arg1;
- (void)getNextPage:(float)arg1;
- (void)geWNNotetNextPage;
- (void)getWNNoteFirstPage;
- (BOOL)canShowMoreBtn;
- (BOOL)isEmpty;
- (void)configParaInfoObjectId:(id)arg1;
- (void)replaceItemAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeItemAtIndex:(unsigned int)arg1;
- (void)insertItem:(id)arg1 AtIndex:(unsigned int)arg2;
- (void)initArrayData;
- (int)getIndexOf:(id)arg1;
- (id)getParaInfo:(int)arg1;
- (float)getBottomEmptyHeight;
- (void)loadAllParaInfoArray;
- (BOOL)ifNonTextParaInfoNumExceedLimit:(int)arg1;
- (BOOL)ifCanInsertItems:(id)arg1;
- (int)getTextLength:(id)arg1;
- (void)notifyScheduleModified;
- (void)notifyEdited;
- (BOOL)saveWNArticle;
- (BOOL)backupArticle;
- (void)tryScrollToVisibleArea:(int)arg1;
- (void)resetEditingKeyboard;
- (void)hideKeyboard;
- (void)realScrollToEditingCell;
- (void)scrollToEditingCell;
- (void)setEditingCellView:(id)arg1;
- (id)getEditingCellView;
- (BOOL)hasEditingCellView;
- (BOOL)hasHtmlChanged;
- (BOOL)hasOriginHtml;
- (int)getCurrentHtmlIdIndex;
- (void)setInitialKeyboard;
- (void)configWCDataItem:(id)arg1;
- (void)configFavItem:(id)arg1;
- (void)configMsg:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

