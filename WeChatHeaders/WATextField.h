//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "UITextFieldDelegate.h"
#import "WADropListViewDelegate.h"
#import "WATextInputInterface.h"

@class NSString, UIColor, UIFont, WADropListView;

@interface WATextField : UITextField <UITextFieldDelegate, WADropListViewDelegate, WATextInputInterface>
{
    UIColor *_placeColor;
    UIFont *_placeFont;
    WADropListView *_dropView;
    BOOL _bAboveDrop;
    BOOL _disableEditing;
    unsigned short _keyCode;
    BOOL showConfirmButton;
    BOOL multiLine;
    BOOL initKeyBoard;
    BOOL fixed;
    BOOL confirmHold;
    BOOL adjustPosition;
    BOOL _screenWidth;
    id <WATextInputDelegate> keyboardDelegate;
    unsigned long inputId;
    NSString *userData;
    int maxLength;
    NSString *defaultValue;
    float bottomMargin;
    int initCursor;
    int endCursor;
    int selectionBegin;
    int selectionEnd;
    float _marginLeft;
    float _marginRight;
}

@property(nonatomic) float marginRight; // @synthesize marginRight=_marginRight;
@property(nonatomic) float marginLeft; // @synthesize marginLeft=_marginLeft;
@property(nonatomic) BOOL screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) BOOL adjustPosition; // @synthesize adjustPosition;
@property(nonatomic) int selectionEnd; // @synthesize selectionEnd;
@property(nonatomic) int selectionBegin; // @synthesize selectionBegin;
@property(nonatomic) int endCursor; // @synthesize endCursor;
@property(nonatomic) int initCursor; // @synthesize initCursor;
@property(nonatomic) BOOL confirmHold; // @synthesize confirmHold;
@property(nonatomic) BOOL fixed; // @synthesize fixed;
@property(nonatomic) BOOL initKeyBoard; // @synthesize initKeyBoard;
@property(nonatomic) float bottomMargin; // @synthesize bottomMargin;
@property(nonatomic) BOOL multiLine; // @synthesize multiLine;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue;
@property(nonatomic) int maxLength; // @synthesize maxLength;
@property(copy, nonatomic) NSString *userData; // @synthesize userData;
@property(nonatomic) unsigned long inputId; // @synthesize inputId;
@property(nonatomic) __weak id <WATextInputDelegate> keyboardDelegate; // @synthesize keyboardDelegate;
@property(nonatomic) BOOL showConfirmButton; // @synthesize showConfirmButton;
- (void).cxx_destruct;
- (void)updateDropHeight:(BOOL)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onSelect:(id)arg1 value:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showDropList:(id)arg1 above:(BOOL)arg2;
- (void)onKeyboardWillHide;
- (BOOL)isAutoSize;
- (void)setAutoSize:(BOOL)arg1;
- (float)getContentHeight;
- (int)getLineCount;
- (void)setReturnKeyType:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (BOOL)isBold;
- (float)getFontSize;
- (void)setInputFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(float)arg1 bold:(BOOL)arg2;
- (id)getAccessoryButton;
- (struct CGRect)getVisibleRect;
- (void)removeFromParent;
- (void)becomeFirstResponder:(BOOL)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (id)subStringWith:(id)arg1 ToIndex:(int)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setInputPlaceholder:(id)arg1 placeholderStyle:(id)arg2;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (void)setInputValue:(id)arg1 cursorPos:(int)arg2;
- (id)getInputValue;
- (void)setSelectedTextRange:(id)arg1;
- (id)getSelectedTextRange;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)layoutSubviews;
- (void)setPasswordMode:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

