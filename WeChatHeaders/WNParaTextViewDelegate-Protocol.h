//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextViewDelegate.h"

@protocol WNParaTextViewDelegate <UITextViewDelegate>

@optional
- (void)onWNTextViewAttrTextChanged;
- (BOOL)isTextViewMenuEnable;
- (void)onTextViewTouched:(int)arg1;
- (void)onTextViewMenuPaste;
- (BOOL)shouldHandleSelectAllByself;
- (void)onSelectAll;
- (void)onSelectText:(struct _NSRange)arg1;
@end

