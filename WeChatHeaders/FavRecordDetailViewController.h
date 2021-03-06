//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "BaseScanLogicDelegate.h"
#import "FavFileDetailDelegate.h"
#import "FavForwardLogicDelegate.h"
#import "FavRecordNodeViewDelegate.h"
#import "FavSightViewDelegate.h"
#import "FavVideoDetailDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "ViewLocationDelegate.h"
#import "WCActionSheetDelegate.h"
#import "scrollViewDelegate.h"

@class FavForwardLogicController, FavSightView, FavoritesItemDataField, ForwardMessageLogicController, NSArray, NSString, ScanQRCodeLogicController, UIView, WCActionSheet;

@interface FavRecordDetailViewController : FavBaseDetailViewController <ForwardMessageLogicDelegate, BaseScanLogicDelegate, WCActionSheetDelegate, scrollViewDelegate, FavSightViewDelegate, FavRecordNodeViewDelegate, ViewLocationDelegate, FavFileDetailDelegate, FavVideoDetailDelegate, FavForwardLogicDelegate>
{
    FavForwardLogicController *m_favForwardController;
    FavSightView *m_sightView;
    unsigned long m_uiLongPressedIndex;
    BOOL m_hasIllegalData;
    NSString *m_chatDate;
    NSString *m_chatDatePrefix;
    UIView *m_headerView;
    UIView *m_headerContainView;
    UIView *m_headerSepLine;
    UIView *m_statusBarBkgView;
    float lastContentOffset;
    BOOL isDragging;
    ForwardMessageLogicController *m_forwardLogic;
    NSArray *m_dataList;
    BOOL m_isFavHomePage;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheet *favImgLongPressAction;
    FavoritesItemDataField *_scrollToData;
}

+ (id)genHeaderViewWithTitle:(id)arg1;
@property(retain, nonatomic) FavoritesItemDataField *scrollToData; // @synthesize scrollToData=_scrollToData;
- (void).cxx_destruct;
- (void)onScanEnds;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onExitFullScreen;
- (id)getFavForawrdViewController;
- (void)OpenVideoFavDataWrap:(id)arg1;
- (void)OpenVideoFileByFavDataWrap:(id)arg1;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnDownloadFavoritesItemFail:(id)arg1 LocalDataId:(id)arg2;
- (void)OnDownloadFavoritesItemOK:(id)arg1 LocalDataId:(id)arg2;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (id)getCurrentViewController;
- (void)onClickOnNode:(id)arg1;
- (void)onFavViewSizeDidChange:(id)arg1 withFavData:(id)arg2;
- (void)onLongPressImgNode:(id)arg1;
- (void)onWillLongPressImgNode:(id)arg1;
- (void)onClickOnImgNode:(id)arg1 DataIndex:(unsigned long)arg2;
- (void)didFinishedLoading:(id)arg1;
- (void)checkScrollToBottom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)showTopBar;
- (void)resetHeader:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onSaveFavDataImg;
- (void)onForwardFavDataWrap2WC;
- (void)onForwardFavDataWrap2Msg;
- (void)onAction:(id)arg1;
- (BOOL)canShowConvertToNoteActionSheet;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (void)genTimeCell:(id)arg1;
- (float)getHeightForRowAtIndexPath:(id)arg1;
- (int)getRowsInContentSection;
- (id)baseBackgroundColor;
- (void)adjustViewAndNavBarRect;
- (void)pulseAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)makeCellSelectionSyleNoneAtIndexPath:(id)arg1;
- (void)unhighlightRowAtIndexPath:(id)arg1;
- (void)highlightRowAtIndexPath:(id)arg1;
- (void)scrollToIndex:(int)arg1 atScrollPosition:(int)arg2 needHighlight:(BOOL)arg3 animation:(BOOL)arg4;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)reloadFooterView;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)initNavigationBar;
- (void)dealloc;
- (id)initWithDataWrap:(id)arg1;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

