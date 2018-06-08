//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AccountBaseViewController.h"

#import "IUpdateProfileMgrExt.h"
#import "MessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "settingModifyEmailDelegate.h"

@class MMTableViewInfo, NSString, UITextField;

@interface SettingModifyEmailViewController : AccountBaseViewController <IUpdateProfileMgrExt, MessageObserverDelegate, settingModifyEmailDelegate, UIAlertViewDelegate, UITextFieldDelegate>
{
    UITextField *m_textField;
    NSString *m_nsLastEmail;
    MMTableViewInfo *m_tableViewInfo;
    BOOL m_bEdit;
    BOOL m_bHasPwd;
    BOOL m_bSaveAndReturn;
    id <settingModifyEmailDelegate> m_delegate;
    BOOL m_bChanged;
    BOOL _m_bFromJSApi;
}

@property(nonatomic) BOOL m_bFromJSApi; // @synthesize m_bFromJSApi=_m_bFromJSApi;
@property(nonatomic) BOOL m_bSaveAndReturn; // @synthesize m_bSaveAndReturn;
@property(nonatomic) BOOL m_bHasPwd; // @synthesize m_bHasPwd;
@property(nonatomic) BOOL m_bEdit; // @synthesize m_bEdit;
@property(nonatomic) __weak id <settingModifyEmailDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsLastEmail; // @synthesize m_nsLastEmail;
@property(retain, nonatomic) UITextField *m_textField; // @synthesize m_textField;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)OnUnBindAccountOKConfirm;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onProfileChange;
- (void)CgiFail:(id)arg1;
- (void)BindOk;
- (void)saveNewEmail;
- (void)sendValidateEmail;
- (void)onUnBindAccount;
- (void)makeEmailCell:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldTextDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)updateTableCell;
- (void)updateFooterView;
- (void)updateBarItem;
- (void)stopLoading;
- (void)startLoading;
- (void)onSave;
- (void)onEdit;
- (void)onDone;
- (void)onReturn;
- (void)onUnBind;
- (void)onUnBindConfirm;
- (BOOL)isExistEmail;
- (BOOL)isVerify;
- (BOOL)isEdit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
