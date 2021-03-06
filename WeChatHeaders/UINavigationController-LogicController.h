//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface UINavigationController (LogicController)
- (BOOL)isNavStackLocked;
- (void)unlockNavStack;
- (void)lockNavStack;
- (BOOL)isUseNavStackLock;
- (float)abtestDelayTime;
- (void)clearPopNavStack;
- (void)PopNavStackIfNeed;
- (BOOL)PushToNavStackIfNeed:(id)arg1 operationType:(int)arg2 bAnimated:(BOOL)arg3;
- (BOOL)isCurrentViewController;
- (void)pushUniqueClassViewController:(id)arg1 animated:(BOOL)arg2;
- (void)PopViewControllerCount:(unsigned long)arg1 animated:(BOOL)arg2;
- (id)PopViewControllerAnimated:(BOOL)arg1;
- (id)DispatchPopViewControllerAnimated:(BOOL)arg1;
- (id)PopToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)PopToRootViewControllerAnimated:(BOOL)arg1;
- (void)PushViewController:(id)arg1 animated:(BOOL)arg2 isForceFullScreen:(BOOL)arg3;
- (void)PushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)PopViewControllerAndPush:(id)arg1 animated:(BOOL)arg2;
- (void)PopToViewController:(id)arg1 AndPush:(id)arg2 animated:(BOOL)arg3;
- (id)getNextTopViewController;
- (id)getTopViewController;
- (void)onBackButtonClicked:(id)arg1;
- (id)getViewControllerImage:(id)arg1;
- (void)pushLogicController:(id)arg1 animated:(BOOL)arg2;
- (id)FindViewControllerBefore:(id)arg1;
@property(nonatomic) BOOL m_bAnimated;
- (id)interactivePopGestureRecognizer_internal;
@end

