//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt.h"
#import "IPublicWifiManagerExt.h"
#import "PublicWifiCompletePageViewControllerDelegate.h"
#import "PublicWifiConnectedViewControllerDelegate.h"
#import "PublicWifiViewControllerDelegate.h"
#import "WCAccountBindPhoneControlLogicDelegate.h"

@class APBase, MMScrollView, MMWebImageView, NSString, RichTextView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, WCAccountBindPhoneControlLogic, WCBizLoadingView;

@interface PublicWifiFrontInfoViewController : MMUIViewController <IPublicWifiManagerExt, ILinkEventExt, PublicWifiViewControllerDelegate, PublicWifiConnectedViewControllerDelegate, PublicWifiCompletePageViewControllerDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    BOOL _isGuideViewShowed;
    BOOL _isLoading;
    id <PublicWifiFrontInfoViewControllerDelegate> _delegate;
    UIImageView *_logoImageView;
    WCBizLoadingView *_connectingView;
    UIView *_grayView;
    MMScrollView *_scrollView;
    MMWebImageView *_brandImage;
    UILabel *_brandNameLbl;
    UILabel *_ssidLbl;
    RichTextView *_failedLbl;
    UIButton *_confirmBtn;
    UIButton *_connectingBtn;
    UIActivityIndicatorView *_loadingView;
    RichTextView *_helpTextView;
    UILabel *_phoneNumNoticeLbl;
    APBase *_apbase;
    unsigned int _viewState;
    WCAccountBindPhoneControlLogic *_m_bindLogic;
}

@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) WCAccountBindPhoneControlLogic *m_bindLogic; // @synthesize m_bindLogic=_m_bindLogic;
@property(nonatomic) unsigned int viewState; // @synthesize viewState=_viewState;
@property(nonatomic) BOOL isGuideViewShowed; // @synthesize isGuideViewShowed=_isGuideViewShowed;
@property(retain, nonatomic) APBase *apbase; // @synthesize apbase=_apbase;
@property(retain, nonatomic) UILabel *phoneNumNoticeLbl; // @synthesize phoneNumNoticeLbl=_phoneNumNoticeLbl;
@property(retain, nonatomic) RichTextView *helpTextView; // @synthesize helpTextView=_helpTextView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *connectingBtn; // @synthesize connectingBtn=_connectingBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) RichTextView *failedLbl; // @synthesize failedLbl=_failedLbl;
@property(retain, nonatomic) UILabel *ssidLbl; // @synthesize ssidLbl=_ssidLbl;
@property(retain, nonatomic) UILabel *brandNameLbl; // @synthesize brandNameLbl=_brandNameLbl;
@property(retain, nonatomic) MMWebImageView *brandImage; // @synthesize brandImage=_brandImage;
@property(retain, nonatomic) MMScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *grayView; // @synthesize grayView=_grayView;
@property(retain, nonatomic) WCBizLoadingView *connectingView; // @synthesize connectingView=_connectingView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak id <PublicWifiFrontInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)jumpToBrandProfile;
- (void)onBackToMainUI;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)wifiCompletePageViewControlerWillDone:(BOOL)arg1;
- (void)wifiConnenctedViewControlerWillDone:(BOOL)arg1;
- (void)wifiViewControllerWillGoBack;
- (void)showBindPhoneView;
- (void)onCancel;
- (void)onBind;
- (void)onPublicWifiStatusChangedWithApBase:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onConfirmToConnect;
- (void)buttonPressed:(id)arg1;
- (void)autoContinueWithProto3;
- (void)doBack;
- (void)stopLoading;
- (void)startLoading;
- (float)smallSapce;
- (float)largeSapce;
- (void)layout;
- (id)getWelcomMsg;
- (id)genConnecttingButton;
- (id)genPhoneNumNoticeTbl;
- (id)genFailRichTextView;
- (id)genRichTextView;
- (void)initViewForReadyState;
- (void)showConnenctedViewController;
- (void)dealStatusChanged:(id)arg1;
- (void)dealloc;
- (id)initWithApBase:(id)arg1;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

