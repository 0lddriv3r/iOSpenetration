//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMFullScreenViewController.h"

#import "BaseScanLogicDelegate.h"
#import "IHttpCacheExt.h"
#import "MultiImageScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMUIWindow, MultiImageScrollView, NSArray, NSMutableArray, NSString, ScanQRCodeLogicController, UIPageControl;

@interface GameCenterPhotoViewController : MMFullScreenViewController <WCActionSheetDelegate, BaseScanLogicDelegate, MultiImageScrollViewDelegate, IHttpCacheExt>
{
    MultiImageScrollView *pagingScrollView;
    NSMutableArray *m_arrayImageDatas;
    BOOL m_bAnimating;
    BOOL m_isFromWebview;
    MMUIWindow *m_bgWindow;
    NSArray *m_originalFrameInScreen;
    BOOL _oldNavigationBarAlpha;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    UIPageControl *m_pageCtrl;
    id <GameCenterPhotoViewControllerDelegate> delegate;
    float m_animationTime;
    unsigned long m_httpType;
}

@property(nonatomic) unsigned long m_httpType; // @synthesize m_httpType;
@property(nonatomic) float m_animationTime; // @synthesize m_animationTime;
@property(nonatomic) __weak id <GameCenterPhotoViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)PreScanQRCode;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)addToFavorites;
- (void)forwardMessage;
- (void)onOperate;
- (void)onSavedPhotosAlbum;
- (void)onAnimationDidStop;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (unsigned int)getIndexArrayImageUrlCacheKey:(id)arg1;
- (id)tryGetResource:(id)arg1;
- (id)genKeyForUrl:(id)arg1;
- (void)initImageViewerWithItems:(id)arg1 current:(id)arg2;
- (unsigned int)getIndexArrayImageUrl:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)updatePhotoatIndex:(unsigned long)arg1;
- (void)setPage:(unsigned long)arg1 atIndex:(unsigned long)arg2;
- (id)viewAtPage:(unsigned long)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned long)arg1;
- (void)onChangePage;
- (void)onMainWindowFrameChanged;
- (void)dealloc;
- (void)viewDidLoad;
- (void)hideSelf;
- (void)showSelf;
- (void)showAnimationWithUrl:(id)arg1;
- (void)showAnimationWithIndex:(unsigned long)arg1;
- (void)initWindow;
- (id)init;
- (BOOL)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)initScrollView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

