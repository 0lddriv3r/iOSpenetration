//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseScanLogicDelegate.h"
#import "EditImageForwardAndEditLogicDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "IDownloadImageExt.h"
#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "MMToastViewControllerDelegate.h"
#import "MsgImgDataLogicDelegate.h"
#import "MsgImgFullScreenContainerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WXVideoPlayerViewDelegate.h"
#import "WXVideoPlayerViewTouchDelegate.h"

@class CMessageWrap, EditImageForwardAndEditLogicController, ForwardMessageLogicController, ImageScrollView, MMProgressViewEx, MMTimer, MMToastViewController, MsgImgDataLogic, MsgImgFullScreenContainer, MsgImgPreviewData, NSArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, ScanQRCodeLogicController, ShareDataToOpenSDKController, UIActivityIndicatorView, UIButton, UIView, WCActionSheet;

@interface MsgImgFullScreenViewController : MMUIViewController <BaseScanLogicDelegate, WXVideoPlayerViewDelegate, WXVideoPlayerViewTouchDelegate, MsgImgDataLogicDelegate, UIViewControllerAnimatedTransitioning, MMToastViewControllerDelegate, ForwardMessageLogicDelegate, EditImageForwardAndEditLogicDelegate, UIViewControllerTransitioningDelegate, WCActionSheetDelegate, UIAlertViewDelegate, MsgImgFullScreenContainerDelegate, IDownloadImageExt, IMsgExt, IMsgRevokeExt>
{
    NSMutableDictionary *m_dicMsgStatus;
    NSMutableDictionary *m_dicTryshowTime;
    NSMutableDictionary *_dicImageDownloadedPercent;
    UIView *_backgroundView;
    MsgImgFullScreenContainer *pagingScrollView;
    NSString *m_nsChatName;
    UIButton *_hdImgBtn;
    UIButton *_hdImgStatusButton;
    UIButton *_btnForImgFastBrowse;
    UIButton *_btnForDownloadImage;
    UIView *_bottomBar;
    float _fastBrowseOffset;
    int m_uiInterfaceOrientation;
    WCActionSheet *m_actionSheet;
    id <MsgImgFullScreenViewControllerDelegate> m_delegate;
    CMessageWrap *_nextHDImgMsg;
    BOOL _isHDImgLoading;
    NSOperationQueue *_loadHDImgOperationQueue;
    MMProgressViewEx *_progressView;
    BOOL _allowRotate;
    BOOL _isFromMsgContentView;
    BOOL _isRotating;
    BOOL _bNeedEditAtStart;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    UIActivityIndicatorView *m_preLoadingView;
    UIActivityIndicatorView *m_nextLoadingView;
    ImageScrollView *m_currentScrollView;
    unsigned long m_scrollViewMsgId;
    MsgImgDataLogic *m_dataLogic;
    NSMutableSet *m_revokedMsgIDSet;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    struct CGRect m_originFrame;
    MsgImgPreviewData *m_msgImgPreviewData;
    BOOL m_bShow;
    BOOL m_bCloseForViewDetail;
    CMessageWrap *m_oForwardMessageWrap;
    unsigned long m_videoOperateStatus;
    BOOL m_bShouldAutoPlayVideo;
    BOOL m_bSoundable;
    BOOL m_bAnimateShowing;
    UIView *m_snapShotImgView;
    unsigned long _startTime;
    MMToastViewController *m_toastView;
    EditImageForwardAndEditLogicController *m_editImageLogicController;
    unsigned long _needEditImageIndex;
    NSString *m_fromUsr;
    BOOL _lockRotate;
    int _orientationWhenInit;
    BOOL m_hasPreviewVideo;
    NSMutableDictionary *m_videoViewDic;
    NSArray *_scanCodePrefixBlackList;
    unsigned int _m_eScene;
    MMTimer *_sliderUpdateTimer;
    ForwardMessageLogicController *_m_forwardLogicController;
}

@property(retain, nonatomic) ForwardMessageLogicController *m_forwardLogicController; // @synthesize m_forwardLogicController=_m_forwardLogicController;
@property(retain, nonatomic) MMTimer *sliderUpdateTimer; // @synthesize sliderUpdateTimer=_sliderUpdateTimer;
@property(nonatomic) unsigned int m_eScene; // @synthesize m_eScene=_m_eScene;
@property(retain, nonatomic) NSArray *scanCodePrefixBlackList; // @synthesize scanCodePrefixBlackList=_scanCodePrefixBlackList;
@property(nonatomic) BOOL m_hasPreviewVideo; // @synthesize m_hasPreviewVideo;
@property(retain, nonatomic) NSMutableDictionary *m_videoViewDic; // @synthesize m_videoViewDic;
@property(nonatomic) BOOL isFromMsgContentView; // @synthesize isFromMsgContentView=_isFromMsgContentView;
@property(nonatomic) BOOL allowRotate; // @synthesize allowRotate=_allowRotate;
@property(nonatomic) __weak id <MsgImgFullScreenViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
- (void).cxx_destruct;
- (unsigned int)preferredScreenEdgesDeferringSystemGestures;
- (void)onDismissEditView;
- (void)onShowingEditView;
- (id)getCurrentViewController;
- (void)startEditImage:(BOOL)arg1;
- (void)forwardMessage:(id)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemChangeAlpha:(float)arg1;
- (id)getCurrentWXVideoPlayView:(id)arg1;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)onCurrentPageMsgReMoved:(id)arg1;
- (void)hideWithoutAnimate;
- (void)animateHideWithFadeout;
- (void)animateHide;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (BOOL)onMsgImgDataMatch:(id)arg1;
- (BOOL)needShowLocateBtn;
- (void)stopPlayVideo;
- (void)startPlayVideo;
- (void)onWXVideoPlayerViewLongPress:(id)arg1;
- (void)statLevelFullScreenSight;
- (void)onWXVideoPlayerViewSingleTap:(id)arg1;
- (void)onWXVideoPlayerProgressBarHiddenChangeTo:(BOOL)arg1;
- (void)onWXVideoPlayerClickDetail:(id)arg1;
- (void)isWXVideoPlayerPlayAttachVideo:(id)arg1;
- (BOOL)isWXVideoPlayerDisplay:(id)arg1;
- (void)onScanEnds;
- (void)onStopLoading;
- (void)onPushViewContoller:(id)arg1 animated:(BOOL)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgBeRemoved:(id)arg1 n64MsgId:(long long)arg2 FromRevoked:(BOOL)arg3;
- (void)OnMsgBeRemoved:(id)arg1 msg:(id)arg2 index:(unsigned long)arg3;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewDidTransitionToNewSize;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)tryShowProgressJpegForIndex:(unsigned long)arg1;
- (id)viewAtPage:(unsigned long)arg1 frame:(struct CGRect)arg2;
- (id)getVideoViewFor:(id)arg1 frame:(struct CGRect)arg2;
- (id)errorViewForDownloadFailedWithFrame:(struct CGRect)arg1 imageStatus:(unsigned long)arg2;
- (void)delayStartDownloadImg:(id)arg1;
- (void)animateHideRightButton;
- (void)delayHideRightButton;
- (void)multiImageScrollViewDidEndScrolling;
- (void)ImageScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)multiImageScrollViewWillBeginDragging;
- (void)onChangePage;
- (void)clearVideoMemoryOnChangePage;
- (id)imagePathAtPage:(unsigned long)arg1;
- (id)imageAtPage:(unsigned long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)saveVideoToAlbum:(id)arg1;
- (id)imageForScanQRCodeAtPage:(unsigned long)arg1 isClipImage:(char *)arg2;
- (void)PreScanQRCode;
- (void)onClickSavedPhotosAlbumButton;
- (void)onImgFastBrowse:(id)arg1;
- (void)onImgMsgLocate;
- (void)onViewHDImage:(id)arg1;
- (void)startDownloadImg:(BOOL)arg1 forIndex:(unsigned long)arg2;
- (void)startDownloadImageForSaveAlbum;
- (void)showEnd;
- (void)showSaveResultTip:(id)arg1 andText:(id)arg2;
- (void)OnDownloadForSaveAlbumFail:(id)arg1 Expired:(BOOL)arg2;
- (void)OnImageSaveAlbumError:(id)arg1;
- (void)OnImageSaveAlbumSuccess:(id)arg1;
- (void)OnDownloadImagePartNew:(id)arg1 PartLen:(unsigned long)arg2 TotalLen:(unsigned long)arg3 TryShow:(BOOL)arg4;
- (void)OnDownloadImagePart:(id)arg1 PartLen:(unsigned long)arg2 TotalLen:(unsigned long)arg3;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (id)getProgressJpeg:(id)arg1;
- (id)getThumbImageFor:(id)arg1;
- (void)doLoadHDImage:(id)arg1;
- (void)asyncLoadHDImage:(id)arg1;
- (id)getImageFor:(id)arg1;
- (BOOL)isMiddleImgDownload:(id)arg1;
- (unsigned long)getIndexFor:(id)arg1;
- (id)getMsgFor:(unsigned long)arg1;
- (void)setStatusFor:(id)arg1 status:(unsigned long)arg2;
- (unsigned long)getStatusFor:(id)arg1;
- (BOOL)isHDImageDownloaded:(id)arg1;
- (void)dealloc;
- (void)adjustSubviewRects;
- (void)viewDidLoad;
- (void)uninitLogic;
- (void)initLogic:(id)arg1;
- (void)preLoad:(id)arg1;
- (void)updateMsgArray:(id)arg1;
- (void)updateLoadingView;
- (void)initScrollView;
- (void)onCancelCurrentDownload;
- (void)updateSliderAlpha;
- (void)viewDidLayoutSubviews;
- (id)btnForDownloadImage;
- (void)updateBottomBarViews;
- (void)initBottomBar;
- (void)checkVideoSteamDownloadStatus;
- (id)getImgInfoTime:(id)arg1;
- (id)getImgInfoName:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)forwardOrSaveWhilePlaying:(unsigned long)arg1 messageWrap:(id)arg2;
- (void)onLongPressBegin:(id)arg1;
- (void)onLongPress:(id)arg1;
- (BOOL)canShowMsgForwwardToDevices;
- (BOOL)canShowMsgForwardTo3rdApp;
- (void)onSingleTap;
- (void)onFullScreenItemDragToClose;
- (void)onSingleTap:(id)arg1;
- (void)adjustViewAndNavBarRect;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillDismiss:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)updateToolbar;
- (void)animateHideFastBrowseButton;
- (void)animateShowFastBrowseButton;
- (void)animateHideImageSaveAblumButton;
- (void)animateShowImageSaveAblumButton;
- (void)animateHideHDButton;
- (void)animateShowHDButton;
- (void)animateShowButton;
- (void)hideDownloadStatusButton:(BOOL)arg1;
- (void)updateHDDownloadingStatus:(float)arg1;
- (void)updateCurrentImageDownloadStatus;
- (void)animateHideHDDownloadStatusOnComplete:(float)arg1;
- (void)animateHideHDDownloadStatus;
- (void)animateShowHDDownloadStatus;
- (void)animateHideDownloadingView;
- (void)tryShowDownloadingView;
- (void)hideImageFastBrowseButton;
- (void)stopImageDownload;
- (void)animateHideWithOrientation:(int)arg1 PreviewData:(id)arg2;
- (BOOL)isCurrentPageError;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (BOOL)isImgMsg:(id)arg1;
- (id)getCurrentScrollView:(unsigned long)arg1;
- (id)getCurrentMsgWrap;
- (id)initWithMsgWrap:(id)arg1 originFrame:(struct CGRect)arg2 soundable:(BOOL)arg3 snapshotView:(id)arg4 needEdit:(BOOL)arg5;
- (id)initWithMsgWrap:(id)arg1 originFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
