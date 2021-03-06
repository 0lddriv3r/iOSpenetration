//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginContactInfoAssist.h"

#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, UIAlertView;

@interface CPushMailContactInfoAssist : PluginContactInfoAssist <PBMessageObserverDelegate, UIAlertViewDelegate>
{
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> m_mapPushMailCellToCellType;
    UIAlertView *m_pwdAlertView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)openPushNoDisturbView;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)handleSwitchPushMailOk:(unsigned long)arg1;
- (id)getPushMailErrorTitle;
- (void)showInputPwdAlert:(BOOL)arg1;
- (void)onSendPushMailPwd:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)doSwitchPushMailByAlertView:(id)arg1;
- (void)showFolderConfigPage;
- (void)reloadInstalledTableViewData;
- (void)onWrite;
- (id)getLoadingText;
- (id)getPluginIntro;
- (void)installPlugin;
- (void)onSwitchViewOff;
- (void)onSwitchViewOn;
- (void)showClosePushMailAlert;
- (void)doSwitchPushMail:(id)arg1;
- (void)reloadPushMailTableView;
- (BOOL)isShowOpenPushMailBtn;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

