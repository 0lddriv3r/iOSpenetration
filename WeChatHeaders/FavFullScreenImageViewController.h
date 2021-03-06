//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "BaseScanLogicDelegate.h"
#import "EditImageForwardAndEditLogicDelegate.h"
#import "FavImageFullScreenViewContainerDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCommitViewResultDelegate.h"
#import "scrollViewDelegate.h"

@class EditImageForwardAndEditLogicController, ForwardMessageLogicController, MMScrollView, NSMutableArray, NSString, ScanQRCodeLogicController, SimpleImgInfo, UIView, WCActionSheet;

@interface FavFullScreenImageViewController : FullScreenViewController <ForwardMessageLogicDelegate, EditImageForwardAndEditLogicDelegate, UIScrollViewDelegate, scrollViewDelegate, FavImageFullScreenViewContainerDelegate, WCCommitViewResultDelegate, WCActionSheetDelegate, BaseScanLogicDelegate>
{
    UIView *m_fakeScreenView;
    struct CGRect m_originImageRectInScreen;
    BOOL m_isAnimating;
    MMScrollView *m_scrollView;
    UIView *m_blackMask;
    NSMutableArray *m_arrFavData;
    NSMutableArray *m_arrImage;
    unsigned long m_iCurIndex;
    unsigned long m_firstIndex;
    BOOL m_isRotating;
    int m_lastDeviceOrientation;
    BOOL m_isAnimationShowing;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheet *m_actionSheet;
    SimpleImgInfo *m_forwardDataSrc;
    ForwardMessageLogicController *m_forwardMsgLogic;
    SimpleImgInfo *m_editImageInfo;
    EditImageForwardAndEditLogicController *m_editImageLogicController;
    BOOL m_allowRotate;
    BOOL _m_canSelect;
    BOOL _m_needEditImage;
    BOOL _m_canEditImage;
    id <FavFullScreenImageViewControllerDelegate> _m_delegate;
}

+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned long)arg3 needEdit:(BOOL)arg4 canEdit:(BOOL)arg5;
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned long)arg3;
+ (id)animationShowWithRecordData:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned long)arg3;
@property(nonatomic) __weak id <FavFullScreenImageViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) BOOL m_canEditImage; // @synthesize m_canEditImage=_m_canEditImage;
@property(nonatomic) BOOL m_needEditImage; // @synthesize m_needEditImage=_m_needEditImage;
@property(nonatomic) BOOL m_canSelect; // @synthesize m_canSelect=_m_canSelect;
@property(nonatomic) unsigned long m_iCurIndex; // @synthesize m_iCurIndex;
- (void).cxx_destruct;
- (void)onGetA8KeyResultType:(unsigned long)arg1;
- (BOOL)shouldAutorotate;
- (void)onScanCodeFinish;
- (void)onScanEnds;
- (void)onStopLoading;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (unsigned int)preferredScreenEdgesDeferringSystemGestures;
- (void)onEditImageForwardAndEditResult:(id)arg1;
- (void)onDismissEditView;
- (void)onShowingEditView;
- (void)editImage;
- (void)captureScreen;
- (void)onForward2WCRecordData;
- (void)onForward2MsgRecordData;
- (void)dismissMySelfAndShowContext:(id)arg1 dataItem:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)imageForScanQRCodeAtPage:(id)arg1 isClipImage:(char *)arg2;
- (void)onWillLongPress:(id)arg1 onImage:(id)arg2;
- (void)onLongPressEvent:(id)arg1 onImage:(id)arg2;
- (void)onFullScreenItemChangeAlpha:(float)arg1;
- (void)animationHideWithRotate;
- (BOOL)useAlphaAnimation;
- (BOOL)shouldAnimationWhenHide;
- (void)onAnimateFadeOut;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
- (void)animationHideStop;
- (void)onContainerAnimationHideStop;
- (id)getVisibleViewController;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)downloadImage;
- (void)animationShowWithRecordData:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned long)arg3;
- (void)showVCAnimation;
- (void)reloadContainerImgInfo:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned long)arg3;
- (void)setRecordData:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned long)arg3;
- (void)resetScrollView;
- (void)clearStatus;
- (void)viewDidLayoutSubviews;
- (unsigned int)supportedInterfaceOrientations;
- (void)adjustViewAndNavBarRect;
- (void)onMemoryWarning;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

