//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "UIGestureRecognizerDelegate.h"

@class MMWebViewController, MMWebViewHistory, NSString, UIImageView, UIScreenEdgePanGestureRecognizer, UIView;

@interface MMWebViewController_SwipeGestureGoBackHistory : MMObject <UIGestureRecognizerDelegate>
{
    UIImageView *m_lastPageShot;
    UIView *m_lastView;
    UIView *m_coverView;
    UIView *m_shadowView;
    float m_lastViewCenterX;
    float m_lastChangedCenterX;
    double m_lastChangedTime;
    float m_lastChangedCenterX2;
    double m_lastChangedTime2;
    UIScreenEdgePanGestureRecognizer *m_swipeGestureRecognizer;
    UIView *m_invisibleScrollPreventer;
    BOOL m_isSwipeDoneAndWaitingGoBackDone;
    unsigned int m_uiRealGoBackCount;
    MMWebViewHistory *m_history;
    MMWebViewController *_webViewcontroller;
    BOOL m_isSwiping;
}

@property(readonly, nonatomic) MMWebViewHistory *m_history; // @synthesize m_history;
@property(nonatomic) BOOL m_isSwiping; // @synthesize m_isSwiping;
- (void).cxx_destruct;
- (void)goBack;
- (void)checkSwipeGesture;
- (void)setupSnapShotView;
- (void)swipeBack:(id)arg1;
- (void)checkPosition;
- (double)getAnimationTimeWithDirectionRight:(BOOL)arg1;
- (float)getDefaultSpeed;
- (float)getSwipeSpeed;
- (BOOL)isSwipeRight;
- (void)showRealPageAfterSwipeDone;
- (void)showFakePageShotViewAndRemoveWhenWebViewFinishedDraw;
- (void)processSwipeDoneAndWaitingGoBackDone;
- (void)updateSnapshotWithURL:(id)arg1;
- (void)actionWhenShowLoadFailView;
- (void)actionDidRotateFromInterfaceOrientation;
- (void)actionCanNotGoBack;
- (void)actionBeforeGoBack;
- (void)actionBeforeDissmiss;
- (void)actionWhenViewWillBePoped;
- (void)actionWebViewDidFinishLoad;
- (void)actionWebViewShouldStartLoadWithRequest;
- (void)checkHistoryWithNavigationType:(int)arg1;
- (void)removeSwipeBackGesture;
- (void)addSwipeBackGesture;
- (BOOL)isSupportSwipeBackGesture;
- (void)dealloc;
- (id)initWithWebViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
