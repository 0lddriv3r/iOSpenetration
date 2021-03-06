//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IUiUtilExt.h"
#import "MMUIViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class MMDelegateProxy<UIGestureRecognizerDelegate>, MMLoadingView, MMTitleView, MMUINavigationBar, NSMutableArray, NSMutableDictionary, NSString, UIBarButtonItem, UIColor, UILabel, UINavigationController, UIView, WCEventTrackingSystemConfig;

@interface MMUIViewController : UIViewController <IUiUtilExt, MMUIViewControllerDelegate, UIGestureRecognizerDelegate>
{
    BOOL m_isPopByClickingURL;
    MMLoadingView *m_loadingViewX;
    unsigned long m_uiVcType;
    UILabel *m_newsTitleRecordLabel;
    NSMutableArray *m_fullScreenViews;
    BOOL m_bAnimated;
    BOOL m_bIsBeingPoped;
    BOOL m_bInteractivePopEnabled;
    BOOL m_bDisableAdjustInsetAndOffset;
    float lastScreenWidth;
    UINavigationController *m_navigationController;
    MMTitleView *m_baseTitleView;
    NSMutableDictionary *m_dicDeepLink;
    NSMutableDictionary *m_dicContentInsetAutolayout;
    NSMutableArray *m_arrEndUserOpInfo;
    MMDelegateProxy<UIGestureRecognizerDelegate> *m_interactivePopGestureRecognizerDelegate;
    UIBarButtonItem *m_leftBarBtnItem;
    UIBarButtonItem *m_rightBarBtnItem;
    UIColor *m_titleColor;
    MMUINavigationBar *fakeNaviView;
    UIView *m_navHeaderView;
    BOOL m_hasAppear;
    BOOL _m_bAnimating;
    BOOL _m_bStopPopWhenDeleteContact;
    UIView *bottomView;
    UIViewController *_presentingModalViewController;
    UIViewController *_presentedModalViewController;
    WCEventTrackingSystemConfig *_trackingSystemConfig;
}

@property(retain, nonatomic) WCEventTrackingSystemConfig *trackingSystemConfig; // @synthesize trackingSystemConfig=_trackingSystemConfig;
@property(nonatomic) BOOL m_bStopPopWhenDeleteContact; // @synthesize m_bStopPopWhenDeleteContact=_m_bStopPopWhenDeleteContact;
@property(nonatomic) BOOL m_bAnimating; // @synthesize m_bAnimating=_m_bAnimating;
@property(nonatomic) __weak UIViewController *presentedModalViewController; // @synthesize presentedModalViewController=_presentedModalViewController;
@property(nonatomic) __weak UIViewController *presentingModalViewController; // @synthesize presentingModalViewController=_presentingModalViewController;
@property(retain, nonatomic) NSMutableArray *m_arrEndUserOpInfo; // @synthesize m_arrEndUserOpInfo;
@property(nonatomic) BOOL m_bDisableAdjustInsetAndOffset; // @synthesize m_bDisableAdjustInsetAndOffset;
@property(nonatomic) BOOL m_bInteractivePopEnabled; // @synthesize m_bInteractivePopEnabled;
@property(nonatomic) BOOL m_bIsBeingPoped; // @synthesize m_bIsBeingPoped;
@property(nonatomic) BOOL m_bAnimated; // @synthesize m_bAnimated;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView;
@property(retain, nonatomic) UILabel *m_newsTitleRecordLabel; // @synthesize m_newsTitleRecordLabel;
@property(nonatomic) unsigned long m_uiVcType; // @synthesize m_uiVcType;
@property(retain, nonatomic) MMLoadingView *loadingViewX; // @synthesize loadingViewX=m_loadingViewX;
- (void).cxx_destruct;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)reportEndOpInfo;
- (void)appendEndOpInfo:(id)arg1;
- (void)parseDeepLink:(id)arg1 animation:(BOOL)arg2;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)setDeepLinkParam:(id)arg1;
- (void)initDeepLinkConfig;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)shouldInteractivePop;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didBeginEditing:(id)arg1;
- (BOOL)isSubviewResponder:(id)arg1;
- (void)resignSubviewResponder:(id)arg1;
- (void)viewWillDismiss:(BOOL)arg1;
- (void)viewDidPresent:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)removeFakeNaviView;
- (void)internalAddFakeNaviView:(id)arg1;
- (void)addFakeNaviView;
- (BOOL)isSeachActive;
- (BOOL)useCustomNavibar;
- (id)navigationBarBackgroundColor;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setBackBarButton;
- (void)removeDuplicateBarButton;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)isPresentedIn;
- (BOOL)isPushedIn;
- (id)tagForCurrentPage;
- (id)tagForActivePage;
- (id)getViewController;
- (void)resetViewStatus;
- (void)startForcedRotationToPortrait;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)isSvrErrorTipForbidden;
- (int)preferredInterfaceOrientationForPresentation;
- (void)protectStatusBarFromBeingFuckedByForeGround:(SEL)arg1;
- (int)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)setStatusBarFontBlack;
- (void)setStatusBarFontWhite;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimation:(int)arg2;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setTopBarsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)changeTopBarsHiddenAnimated:(BOOL)arg1;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)setTitleOnly:(id)arg1;
- (void)willDismissAndShow;
- (void)setTitleInterfaceOritation:(int)arg1;
- (float)getRightBarButtonWidth;
- (float)getLeftBarButtonWidth;
- (void)setTitleView:(id)arg1;
- (id)getTitleColor;
- (void)setTitleColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)willShow;
- (void)willDisshow;
- (void)didDisshow;
- (void)didAppear;
- (void)willDisappear;
- (void)adjustView;
- (void)willAppear;
- (void)setIsPopByClickingURL;
- (void)restoreNavigationBarBkg;
- (void)removeNavigationBarBkg;
- (void)onMainWindowFrameChanged;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)setAutolayoutTopOffset:(float)arg1 forView:(id)arg2;
- (void)setAutolayoutContentInset:(struct UIEdgeInsets)arg1 forScrollView:(id)arg2;
- (float)getVisibleHeightOri:(int)arg1;
- (float)getVisibleHeight;
- (float)getContentViewHeight;
- (float)getContentViewYforTranslucentNaviBar;
- (float)getContentViewY;
- (float)getSafeTopInset;
- (float)getSafeBottomInset;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (BOOL)accessibilityPerformEscape;
- (void)disMissSelf;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)adjustViewAndNavBarRect;
- (void)adjustSubviewRects;
- (void)adjustTableViewInset:(id)arg1;
- (void)adjustTableViewRect;
- (void)stopLoading;
- (void)startLoadingWithText:(id)arg1 delayAnimation:(double)arg2 block:(BOOL)arg3;
- (void)startLoadingWithText:(id)arg1 block:(BOOL)arg2;
- (void)startLoadingNonBlock;
- (void)startLoadingBlocked;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)startCommonLoadingBlocked;
- (void)startCommonLoading;
- (void)startCommonLoading:(BOOL)arg1;
- (void)stopBizLoading;
- (void)startBizLoading;
- (void)setWCBizAuthTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

