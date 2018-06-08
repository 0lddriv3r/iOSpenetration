//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "TransitioningAnimationDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "WCDragToCloseDelegate.h"

@class NSString, UIView;

@interface WCDragToCloseViewController : MMUIViewController <WCDragToCloseDelegate, UIViewControllerAnimatedTransitioning, TransitioningAnimationDelegate>
{
    int _orientationWhenInit;
    BOOL _enableDragToClose;
    BOOL _allowRotate;
    UIView *_snapShotImgView;
}

@property(nonatomic) BOOL allowRotate; // @synthesize allowRotate=_allowRotate;
@property(retain, nonatomic) UIView *snapShotImgView; // @synthesize snapShotImgView=_snapShotImgView;
@property(nonatomic) BOOL enableDragToClose; // @synthesize enableDragToClose=_enableDragToClose;
- (void).cxx_destruct;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (unsigned int)supportedInterfaceOrientationsInDragScene;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(float)arg1;
- (void)setM_snapShotImgView:(id)arg1;
- (BOOL)isOrientationChanged;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

