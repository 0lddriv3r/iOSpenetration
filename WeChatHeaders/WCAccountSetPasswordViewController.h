//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "ILinkEventExt.h"
#import "PasswordLogicDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCAccountBindPhoneControlLogicDelegate.h"

@class CTRichTextView, NSString, PasswordLogic, UIButton, WCAccountBindPhoneControlLogic, WCAccountTextFieldItem, WCBaseKeyboardToolBar;

@interface WCAccountSetPasswordViewController : WCAccountBaseViewController <ILinkEventExt, WCAccountBindPhoneControlLogicDelegate, PasswordLogicDelegate, UIAlertViewDelegate>
{
    id <WCAccountSetPasswordViewControllerDelegate> m_delegate;
    PasswordLogic *m_setPasswdLogic;
    PasswordLogic *m_verifyPasswdLogic;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCAccountTextFieldItem *m_textFieldVerifyPwdItem;
    WCAccountTextFieldItem *m_textFieldFirstPwdItem;
    WCAccountTextFieldItem *m_textFieldSecondPwdItem;
    CTRichTextView *m_bottomView;
    UIButton *m_doneBtn;
    UIButton *m_showBtn;
    NSString *m_nsHeaderTitle;
    NSString *m_nsHeaderTip;
    NSString *m_nsTicket;
    unsigned long m_uiTicketType;
    BOOL m_bShowTip;
    BOOL m_bShow;
    unsigned int m_scene;
    WCAccountBindPhoneControlLogic *m_bindLogic;
}

- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onFindPwdBindPhone;
- (void)onFindPwdChangePhone;
- (void)onFindPwdSend;
- (void)stopLoading;
- (void)startLoading;
- (void)doChangePassword;
- (void)doVerifyPassword;
- (void)unknownFail:(id)arg1;
- (void)setPasswordFail:(id)arg1;
- (void)setPasswordOK:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)textFieldTextDidChange:(id)arg1;
- (void)checkEnable;
- (void)dealloc;
- (void)onShowBtnClick;
- (void)updateView;
- (void)viewDidLoad;
- (id)init;
- (void)onSecondNext;
- (void)setDelegate:(id)arg1;
- (void)setScene:(unsigned int)arg1;
- (void)setShowTip:(BOOL)arg1;
- (void)setTicketType:(unsigned long)arg1;
- (void)setTicket:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (BOOL)WCBaseInfoItemShouldBeginEditing:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (BOOL)isSetScene;
- (BOOL)isChangeScene;
- (BOOL)isVerifyScene;
- (BOOL)isFromServerControl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

