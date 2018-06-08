//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITextViewDelegate.h"

@class NSString, UITextView, UIView;

@interface MailContentView : MMUIView <UITextViewDelegate>
{
    UITextView *m_textView;
    UIView *m_labelView;
    id <MailContentViewDelegate> m_delegate;
    unsigned long m_uiLines;
    NSString *m_nsText;
    BOOL m_bPaste;
}

@property(retain, nonatomic) NSString *m_nsText; // @synthesize m_nsText;
@property(nonatomic) __weak id <MailContentViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1 showTips:(BOOL)arg2;
- (void)initView;
- (void)showReplyTips;
- (float)getContentHeight;
- (BOOL)isTextViewFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (float)getSelectedRangeY;
- (void)updateHeight;
- (float)measureHeight;
- (void)setTextViewText;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setContent:(id)arg1;
- (id)getContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
