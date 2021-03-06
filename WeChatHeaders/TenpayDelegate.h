//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextFieldDelegate.h"

@class NSCharacterSet, NSMutableString, NSString;

@interface TenpayDelegate : NSObject <UITextFieldDelegate>
{
    NSMutableString *_inputText;
    NSString *_salt;
    NSString *_appendText;
    int _keyIndex;
    int _maxLen;
    id _returnTarget;
    SEL _returnCallback;
    id _changeTarget;
    SEL _changeCallback;
    BOOL bFormatBankCard;
    NSCharacterSet *_filterCharsSet;
}

@property(retain, nonatomic) NSCharacterSet *filterCharsSet; // @synthesize filterCharsSet=_filterCharsSet;
@property(nonatomic) BOOL bFormatBankCard; // @synthesize bFormatBankCard;
- (void)setDefaultValue:(id)arg1;
- (id)GetUnEncryptCode;
- (id)GetEncryptCode;
- (id)GetAsteriskString:(id)arg1;
- (BOOL)isAreaIDCardNum:(int)arg1;
- (BOOL)isUserIDNum;
- (BOOL)isBankCardNum;
- (BOOL)isPhoneNum;
- (id)Get3DesEncryptData;
- (id)Get2048EncryptDataWithHash:(BOOL)arg1;
- (id)GetEncryptDataWithHash:(BOOL)arg1;
- (void)ClearInput;
- (void)SelectRsaKey:(int)arg1;
- (void)SetSalt:(id)arg1;
- (long)GetInputInfo;
- (id)GetVersion;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChanged:(id)arg1;
- (void)ResetInputText:(id)arg1;
- (id)EncodeCard:(id)arg1;
- (id)DecodeCardWithAppend:(id)arg1;
- (id)DecodeCard:(id)arg1;
- (void)AppendString:(id)arg1;
- (void)SetMaxInputLen:(int)arg1;
- (void)SetChange:(id)arg1 callback:(SEL)arg2;
- (void)SetReturn:(id)arg1 callback:(SEL)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

