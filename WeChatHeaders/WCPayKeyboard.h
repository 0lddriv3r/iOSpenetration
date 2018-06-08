//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIButton, UIImageView;

@interface WCPayKeyboard : UIView
{
    UIImageView *_imgDelete;
    UIImageView *_imgDeleteHL;
    BOOL _showConfirm;
    id <UITextInput> _textView;
    int _maxLength;
    id <WACustomKeyboardDelegate> _delegate;
    NSTimer *_timer;
    float _keyboardHeight;
    UIButton *_extraButton;
    int _type;
}

@property(nonatomic) BOOL showConfirm; // @synthesize showConfirm=_showConfirm;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *extraButton; // @synthesize extraButton=_extraButton;
@property(nonatomic) float keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <WACustomKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int maxLength; // @synthesize maxLength=_maxLength;
- (void).cxx_destruct;
- (float)getSafeBottomInset;
- (void)characterPressed:(id)arg1;
- (void)deletePressed:(id)arg1;
- (void)characterDeleted;
- (void)startDelete;
- (void)deleteReleased:(id)arg1;
- (void)dismissPressed:(id)arg1;
- (void)setupFrameAndBackGround;
@property(retain) id <UITextInput> textView; // @synthesize textView=_textView;
- (void)setExtraKey:(id)arg1;
- (void)setup4X4Keyboard:(BOOL)arg1;
- (void)setup3X4Keyboard:(BOOL)arg1;
- (void)setType:(int)arg1 showConfirm:(BOOL)arg2;
- (void)layoutSubviews;
- (BOOL)enableInputClicksWhenVisible;

@end
