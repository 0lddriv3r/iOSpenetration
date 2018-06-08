//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "ILinkEventExt.h"
#import "TakeOrSelectHeadImageLogicDelegate.h"

@class CTRichTextView, MMTimer, NSMutableArray, NSMutableDictionary, NSString, TakeOrSelectHeadImageLogic, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, WCAccountTextFieldItem, WCBaseKeyboardToolBar;

@interface WCAccountRegisterViewController : WCAccountBaseViewController <ILinkEventExt, TakeOrSelectHeadImageLogicDelegate>
{
    WCAccountTextFieldItem *m_textFieldNameItem;
    WCAccountTextFieldItem *m_textFieldIDItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    UIButton *m_btnHeadimage;
    UIImageView *m_idTipImageView;
    UILabel *m_footerTip;
    UIImageView *m_nameOKImageView;
    UIImageView *m_idOKImageView;
    UIActivityIndicatorView *m_idLoadingView;
    TakeOrSelectHeadImageLogic *m_photoLogic;
    id <WCAccountRegisterViewControllerDelegate> m_delegate;
    UIImage *m_headImage;
    UIButton *m_btnNext;
    NSMutableArray *m_arrMenuItems;
    NSMutableDictionary *m_dicAction;
    MMTimer *m_aliasTimer;
    NSString *m_nsLastWechatID;
    BOOL m_bFirstSuggestAlias;
    NSString *m_nsWechatIDTip;
    CTRichTextView *m_agreementView;
}

- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showRegFooter;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)resetSuggestAlias;
- (void)getSuggestAlias;
- (BOOL)isLastWeChatIDChanged;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)MenuControllerWillHide:(id)arg1;
- (void)refreshViewWithUserName:(id)arg1;
- (void)updateMenu:(id)arg1;
- (void)forwarder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)getAliasDone;
- (void)setAliasOK;
- (void)setError:(id)arg1;
- (void)viewDidLoad;
- (BOOL)isShowWeChatID;
- (BOOL)isShowHead;
- (void)showHeadImageOption;
- (void)onGetHeadImage:(id)arg1;
- (void)onNext;
- (void)initNavigationBar;
- (void)onRegNickNameBack;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

