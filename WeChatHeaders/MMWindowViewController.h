//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@interface MMWindowViewController : MMUIViewController
{
    BOOL _isCallDismissSelf;
    BOOL _isRequestKeyWindow;
    BOOL _isNeedNavCtrl;
    int _level;
    int _transitionOptions;
    int _statusBarStyle;
    BOOL _isChangeStatusBar;
}

- (void)dealloc;
- (void)hideWithAnimated:(int)arg1;
- (void)hide;
- (void)DismissMyselfAnimated:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)showWithAnimated:(int)arg1 willCloseAfter:(double)arg2;
- (BOOL)isObjShowing;
- (BOOL)isClassShowing;
- (void)showWithAnimated:(int)arg1;
- (void)show;
- (void)setStatusBarStyle:(int)arg1;
- (void)hideNavBar;
- (void)setWindowLevel:(int)arg1;
- (id)init;

@end

