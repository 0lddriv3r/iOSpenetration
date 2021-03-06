//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate.h"
#import "WCAccountLogoutLogicDelegate.h"
#import "WCAccountSwitchLogicDelegate.h"

@class MMTableViewInfo, MMTipsViewController, NSString, WCAccountLogoutLogic, WCAccountSwitchLogic;

@interface NewSettingViewController : MMUIViewController <WCAccountSwitchLogicDelegate, WCAccountLogoutLogicDelegate, MMTipsViewControllerDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    BOOL m_bFromSetting;
    WCAccountSwitchLogic *m_switchLogic;
    WCAccountLogoutLogic *m_logoutLogic;
    MMTipsViewController *m_introView;
}

- (void).cxx_destruct;
- (void)onNotifyToDisposePathTipsByKey:(id)arg1;
- (void)initDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)showFeedbackView;
- (void)showSystemNotice;
- (void)onAccountSwitchLogicCancel;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2 tipTag:(int)arg3;
- (void)showLoginInfo;
- (void)gotoSwitchAccount;
- (void)onAccountLogoutLogicCancel;
- (void)showQuitActionSheet:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)willAppear;
- (void)showIpadClassicChooseView;
- (void)showAccountView;
- (void)reloadTableData;
- (void)showWechatLabView;
- (void)showAboutMMView;
- (void)showEmotionShopView;
- (void)showAuthAppListView;
- (void)showGeneralView;
- (void)showDeviceListView;
- (void)showPrivateConfigViewWithContactVerify:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showPrivateConfigView;
- (void)showNotificationView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

