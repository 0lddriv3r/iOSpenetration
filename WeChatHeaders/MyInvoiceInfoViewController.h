//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "IMyInvoiceLogicMgrExt.h"
#import "LongPressMenuViewDelegate.h"
#import "LongPressViewDelegate.h"

@class MMUIButton, MyInvoiceData, NSIndexPath, NSMutableArray, NSString, UIButton, UIImageView, UIView, WCBankNumberTextFieldItem, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCClearModeTextViewItem;

@interface MyInvoiceInfoViewController : WCBizBaseViewController <IMyInvoiceLogicMgrExt, LongPressMenuViewDelegate, LongPressViewDelegate>
{
    UIButton *m_footerButton;
    WCClearModeTextViewItem *m_textFieldCompanyTitleItem;
    WCClearModeTextViewItem *m_textFieldPersonTitleItem;
    WCBaseTextFieldItem *m_textFieldTaxNumberItem;
    WCClearModeTextViewItem *m_textFieldAddressItem;
    WCBaseTextFieldItem *m_textFieldPhoneItem;
    WCClearModeTextViewItem *m_textFieldBankItem;
    WCBankNumberTextFieldItem *m_textFieldBankNumberItem;
    WCBaseTextFieldItem *m_textFieldEmail;
    WCBaseKeyboardToolBar *m_keyboardBar;
    NSMutableArray *m_arrayInfo;
    id <MyInvoiceInfoViewControllerDelegate> m_delegate;
    NSIndexPath *m_selectItemIndex;
    MyInvoiceData *m_invoiceData;
    NSString *m_title_type;
    unsigned int m_invoice_mode;
    int m_scene;
    BOOL m_inAnimation;
    struct CGRect m_oldFrame;
    UIView *m_oldSuperView;
    float m_oldBrightness;
    NSString *m_nsItemTitle;
    NSString *m_nsItemContent;
    UIView *m_oLastLongPressView;
    UIButton *m_tipsButton;
    MMUIButton *_companyTypeBtn;
    MMUIButton *_personTypeBtn;
    UIView *_taxNumberCheckView;
    UIImageView *_qrcodeView;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *qrcodeView; // @synthesize qrcodeView=_qrcodeView;
@property(retain, nonatomic) UIView *taxNumberCheckView; // @synthesize taxNumberCheckView=_taxNumberCheckView;
@property(retain, nonatomic) MMUIButton *personTypeBtn; // @synthesize personTypeBtn=_personTypeBtn;
@property(retain, nonatomic) MMUIButton *companyTypeBtn; // @synthesize companyTypeBtn=_companyTypeBtn;
- (void).cxx_destruct;
- (void)MenuControllerWillHide:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnPress:(id)arg1;
- (id)getInvoiceCopiedString:(id)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)setFromScene:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)onTitleTypeChangeTo:(id)arg1;
- (void)onCompanyTypeBtnClick;
- (void)onPersonTypeBtnClick;
- (void)makeInfoModeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (float)getCellHeightWithId:(int)arg1;
- (void)setItemTitleAndContentOfId:(int)arg1;
- (void)makeTitleTypeCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (float)cellHightForContent:(id)arg1 andKey:(id)arg2;
- (float)getTextViewHeightForContent:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)doTaxNumberChecking;
- (BOOL)checkIsTaxNumberRight;
- (BOOL)checkIsEmpty:(id)arg1;
- (BOOL)canDoSave;
- (void)OnDelInvoiceRet:(BOOL)arg1 andGroupId:(int)arg2;
- (void)OnGetInvoiceRet:(BOOL)arg1 andResult:(id)arg2 fromScene:(unsigned int)arg3;
- (void)OnSaveInvoiceRet:(BOOL)arg1 andGroupId:(int)arg2 withInvoiceUrl:(id)arg3;
- (void)onNext;
- (void)onEdit;
- (BOOL)fillDataTo:(id)arg1;
- (void)setMyTitle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)OnReturnClick;
- (void)OnCancelClick;
- (void)OnComfireEnsureAlert;
- (void)reloadInfoModeTableView;
- (void)refreshViewWithInvoiceData:(id)arg1;
- (void)setInvoiceMode:(unsigned int)arg1;
- (void)setupWithInvoiceData:(id)arg1;
- (BOOL)shouldShowInfoItem:(id)arg1;
- (void)addTitleTypeHeader;
- (void)updateBrightness;
- (void)setBrightness:(float)arg1;
- (void)qrcodeTapped:(id)arg1;
- (void)makeEmptyCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeQRCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)resetTextFieldContent;
- (void)initInfoTemplate;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

