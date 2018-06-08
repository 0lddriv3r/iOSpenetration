//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class HoneyPayPrepareTextField, NSString, UIImageView, UILabel;

@interface HoneyPayPrepareCardView : UIView <UITextFieldDelegate>
{
    id <HoneyPayPrepareCardViewDelegate> _delegate;
    NSString *_title;
    NSString *_cardAmount;
    UIView *_contentView;
    UIImageView *_planet;
    UILabel *_titleLabel;
    HoneyPayPrepareTextField *_textField;
    UIImageView *_background;
}

@property(retain, nonatomic) UIImageView *background; // @synthesize background=_background;
@property(retain, nonatomic) HoneyPayPrepareTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *planet; // @synthesize planet=_planet;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *cardAmount; // @synthesize cardAmount=_cardAmount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <HoneyPayPrepareCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

