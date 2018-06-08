//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayInputViewDelegate.h"

@class NSString, UILabel, WCPayInputView;

@interface WCPayVerifyCardNumberViewController : WCPayBaseViewController <WCPayInputViewDelegate>
{
    id <WCPayVerifyCardNumberViewControllerDelegate> _delegate;
    WCPayInputView *_payInputView;
    UILabel *_tips;
}

@property(retain, nonatomic) UILabel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) WCPayInputView *payInputView; // @synthesize payInputView=_payInputView;
@property(nonatomic) __weak id <WCPayVerifyCardNumberViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inputView:(id)arg1 didChangeText:(id)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)realodView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

