//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "CNetworkStatusExt.h"
#import "IChatMigrationServerExt.h"
#import "UIAlertViewDelegate.h"

@class MMUILabel, NSString, UIActivityIndicatorView, UIButton, UIImageView, UIView, WXGDotDotDotLabel;

@interface WXGMigrationServerEntryViewController : MMWindowViewController <IChatMigrationServerExt, UIAlertViewDelegate, CNetworkStatusExt>
{
    UIView *m_backgroundView;
    UIView *m_barLine;
    UIButton *m_leftTopCornerButton;
    UIImageView *m_iconImageView;
    UIActivityIndicatorView *m_QRCLoadingView;
    MMUILabel *m_tipsLabel;
    MMUILabel *m_smallTipsLabel;
    MMUILabel *m_titleInGBPLable;
    UIButton *m_greenButton;
    unsigned int m_notifyCode;
    unsigned int m_childNotifyCode;
    WXGDotDotDotLabel *m_dotDotDotLabel;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_speedString;
    int m_retryGetQRCodeTimes;
    id <WXGMigrationServerEntryViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WXGMigrationServerEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_refreshQRCode;
- (void)ReachabilityChange:(unsigned long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onAlertCancelQuickMigrationAndTimeSelect;
- (void)onAlertCancelQuickMigration;
- (void)onAlertCancelTimeSelect;
- (void)onCloseViewAndShowAlert;
- (void)onCloseView;
- (void)onMinimizeView;
- (void)onGetQRCodeImg:(id)arg1;
- (void)onMigrationServerTransferSpeed:(float)arg1;
- (void)onMigrationCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onMigrationServerAlertCode:(unsigned int)arg1;
- (void)onMigrationServerNotifyCode:(unsigned int)arg1;
- (void)p_addGreenButton;
- (void)p_addSmallTipsLabel;
- (void)p_addTipsLabel;
- (void)p_resetIconImageViewWithImage:(id)arg1;
- (void)p_addIconImageView;
- (void)p_makeFakeQRCodeView;
- (void)p_addLeftCornerButton;
- (void)p_addLine;
- (void)p_addBlurEffectForView;
- (void)p_setupView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

