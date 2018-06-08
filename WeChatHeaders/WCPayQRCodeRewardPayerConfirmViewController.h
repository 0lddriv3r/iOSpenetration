//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITextViewDelegate.h"

@class MMTextView, NSString;

@interface WCPayQRCodeRewardPayerConfirmViewController : WCPayBaseViewController <UITextViewDelegate>
{
    id <WCPayQRCodeRewardPayerConfirmViewControllerDelegate> _delegate;
    MMTextView *_payerCommentTextView;
}

@property(retain, nonatomic) MMTextView *payerCommentTextView; // @synthesize payerCommentTextView=_payerCommentTextView;
@property(nonatomic) __weak id <WCPayQRCodeRewardPayerConfirmViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)confirmBtnClick;
- (void)leftBarButtonClick;
- (void)setupContentView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)useTransparentNavibar;
- (void)viewDidBePoped:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

