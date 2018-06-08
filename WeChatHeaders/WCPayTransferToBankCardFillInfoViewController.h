//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCActionSheetDelegate.h"
#import "WCBaseInfoItemDelegate.h"
#import "WCPayNoticeBannerDelegate.h"
#import "WCPaySelectArriveTimeItemDelegate.h"
#import "WCPaySelectBankItemDelegate.h"
#import "WCPayTransferToBankCardCandidateViewDelegate.h"

@class NSDictionary, NSString, UIButton, WCBaseKeyboardToolBar, WCBizInfoGroup, WCPayBankCardNumberItem, WCPayNoticeBanner, WCPaySelectArriveTimeItem, WCPaySelectBankItem, WCPaySelectNameItem, WCPayTransferToBankCardCandidateView;

@interface WCPayTransferToBankCardFillInfoViewController : WCPayBaseViewController <WCBaseInfoItemDelegate, WCPaySelectBankItemDelegate, WCPaySelectArriveTimeItemDelegate, WCPayTransferToBankCardCandidateViewDelegate, WCActionSheetDelegate, WCPayNoticeBannerDelegate>
{
    WCBaseKeyboardToolBar *m_keyboardBar;
    id <WCPayTransferToBankCardFillInfoViewControllerDelegate> m_delegate;
    WCBizInfoGroup *m_infoGroup;
    BOOL _m_bHasSelectReceiver;
    BOOL _m_bBankCardNumChange;
    BOOL _m_bBankCardAutoFilling;
    UIButton *m_footerButton;
    WCPayTransferToBankCardCandidateView *_m_receiverCandidateView;
    WCPaySelectNameItem *_m_selectNameItem;
    WCPayBankCardNumberItem *_m_cardNumberItem;
    WCPaySelectBankItem *_m_selectBankItem;
    WCPaySelectArriveTimeItem *_m_selectArriveTimeItem;
    float _m_minItemLeft;
    UIButton *_m_selectNameButton;
    WCPayNoticeBanner *_m_noticeBanner;
    NSDictionary *_m_dictBanners;
}

@property(retain, nonatomic) NSDictionary *m_dictBanners; // @synthesize m_dictBanners=_m_dictBanners;
@property(retain, nonatomic) WCPayNoticeBanner *m_noticeBanner; // @synthesize m_noticeBanner=_m_noticeBanner;
@property(nonatomic) BOOL m_bBankCardAutoFilling; // @synthesize m_bBankCardAutoFilling=_m_bBankCardAutoFilling;
@property(nonatomic) BOOL m_bBankCardNumChange; // @synthesize m_bBankCardNumChange=_m_bBankCardNumChange;
@property(nonatomic) BOOL m_bHasSelectReceiver; // @synthesize m_bHasSelectReceiver=_m_bHasSelectReceiver;
@property(retain, nonatomic) UIButton *m_selectNameButton; // @synthesize m_selectNameButton=_m_selectNameButton;
@property(nonatomic) float m_minItemLeft; // @synthesize m_minItemLeft=_m_minItemLeft;
@property(retain, nonatomic) WCPaySelectArriveTimeItem *m_selectArriveTimeItem; // @synthesize m_selectArriveTimeItem=_m_selectArriveTimeItem;
@property(retain, nonatomic) WCPaySelectBankItem *m_selectBankItem; // @synthesize m_selectBankItem=_m_selectBankItem;
@property(retain, nonatomic) WCPayBankCardNumberItem *m_cardNumberItem; // @synthesize m_cardNumberItem=_m_cardNumberItem;
@property(retain, nonatomic) WCPaySelectNameItem *m_selectNameItem; // @synthesize m_selectNameItem=_m_selectNameItem;
@property(retain, nonatomic) WCPayTransferToBankCardCandidateView *m_receiverCandidateView; // @synthesize m_receiverCandidateView=_m_receiverCandidateView;
@property(retain, nonatomic) UIButton *m_footerButton; // @synthesize m_footerButton;
- (void).cxx_destruct;
- (void)scrollViewDidScroll;
- (void)OnWCPaySelectArriveTimeItemDidSelectArriveTime:(unsigned int)arg1;
- (void)OnWCPaySelectBankItemDidChoseBank:(id)arg1;
- (void)OnClickWCPayTransferToBankCardCandidate:(id)arg1;
- (void)onNext;
- (void)showReceiverCandidateView:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)setAutoFillBankDone;
- (void)autoFillBankItem;
- (void)selectTransToBankReceiver;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)initCandidateView;
- (void)updateTableView;
- (void)updateNoticeView;
- (void)refreshViewWithData:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onRightBarButtonClick;
- (void)onBack;
- (void)initView;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)getBannerView;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (void)clearBankElem;
- (void)setHasSelectReceiver:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

