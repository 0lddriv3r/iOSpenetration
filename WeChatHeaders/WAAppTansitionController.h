//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UINavigationController;

@interface WAAppTansitionController : NSObject <UIViewControllerTransitioningDelegate>
{
    BOOL _isSimulatedNativeWeApp;
    BOOL _isInForceDismissAndPresentAnimationOnce;
    UINavigationController *_owerNav;
    id <WAAppTansitionControllerDelegate> _delegate;
}

@property(nonatomic) BOOL isInForceDismissAndPresentAnimationOnce; // @synthesize isInForceDismissAndPresentAnimationOnce=_isInForceDismissAndPresentAnimationOnce;
@property(nonatomic) BOOL isSimulatedNativeWeApp; // @synthesize isSimulatedNativeWeApp=_isSimulatedNativeWeApp;
@property(nonatomic) __weak id <WAAppTansitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UINavigationController *owerNav; // @synthesize owerNav=_owerNav;
- (void).cxx_destruct;
- (void)markForceDissmissAndPresentAnimationOnce;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
