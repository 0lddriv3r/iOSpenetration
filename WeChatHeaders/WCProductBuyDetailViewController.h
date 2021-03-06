//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "IWCAddressControlLogic.h"
#import "IWCAddressGetAddressControlLogicExt.h"
#import "IWCPayControlLogicExt.h"
#import "IWCProductExt.h"
#import "MMWebViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCProudctReceiptEditDelegate.h"

@class MMTableViewInfo, NSString, UIButton, WCBizLoadingView, WCProductDiscountInfo, WCProductExpressItem, WCProductOrderInfo;

@interface WCProductBuyDetailViewController : WCBizBaseViewController <IWCProductExt, WCProudctReceiptEditDelegate, IWCAddressGetAddressControlLogicExt, IWCPayControlLogicExt, MMWebViewDelegate, UIAlertViewDelegate, IWCAddressControlLogic>
{
    struct map<int, WCProductBuyDetailViewSectionType, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, WCProductBuyDetailViewSectionType>>> _sectionIndexToType;
    WCProductOrderInfo *_orderInfo;
    MMTableViewInfo *_mainTableViewInfo;
    WCProductExpressItem *_selectExpressItem;
    NSString *_receiptStr;
    WCBizLoadingView *_loadingView;
    unsigned long _payLogictag;
    BOOL _isAddressInfoEmpty;
    BOOL _isUnSupportExpress;
    BOOL _isGetLastestExpressFail;
    UIButton *_buyButton;
    WCProductDiscountInfo *_currentSelectedDiscountInfo;
    unsigned long scene;
    id <WCProductBuyDetailViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WCProductBuyDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *receiptStr; // @synthesize receiptStr=_receiptStr;
@property(retain, nonatomic) WCProductOrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(nonatomic) unsigned long scene; // @synthesize scene;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSubmitMallFreeOrderSuccess:(id)arg1 retCode:(int)arg2;
- (void)onSubmitMallFreeOrderFail:(id)arg1;
- (void)onSubmitMallOrdFail:(id)arg1 skuID:(id)arg2;
- (void)popToSourceViewController;
- (void)OnFinishedWCPayInnerPayLogic:(id)arg1 CompleteStatus:(int)arg2 ExtraInfo:(id)arg3;
- (void)onSubmitMallOrdSuccess:(id)arg1 skuID:(id)arg2 prepardID:(id)arg3 retCode:(int)arg4 retMsg:(id)arg5;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showAlertView:(id)arg1 tag:(unsigned long)arg2;
- (void)dealloc;
- (void)buyProduct;
- (void)initFooterView;
- (void)makeProductInfo:(id)arg1;
- (id)getExpressTimeDesc;
- (id)getExpressDesc:(id)arg1;
- (void)updatePrice;
- (void)onModifyExpress:(id)arg1;
- (void)onSaveWCProductReceiptEdit:(id)arg1;
- (void)onGotProuductDiscountInfoSuccess:(id)arg1 discountInfo:(id)arg2;
- (void)onGotProuductDiscountInfoFail:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onClickDiscountInfo:(id)arg1;
- (void)makeDiscountInfoCell:(id)arg1;
- (void)onClickReceipt;
- (void)onClickExpressCell;
- (void)makeExpressCell:(id)arg1;
- (void)onClickDeliveryCell;
- (void)onGotLastestExpressInfoFail:(id)arg1 lockID:(id)arg2;
- (void)onGotLastestExpressInfoSuccess:(id)arg1 lockID:(id)arg2 expressAry:(id)arg3 retCode:(int)arg4;
- (void)OnPreFinishedWCAddressLogic:(id)arg1 waitUntilDone:(char *)arg2;
- (void)OnWCAddressGetAddressControlLogicEnd:(id)arg1;
- (void)clearExpressInfo;
- (void)makeDeliveryCell:(id)arg1;
- (id)getDiscountInfo:(id)arg1;
- (void)reloadTableData;
- (void)onReturn;
- (void)viewDidLayoutSubviews;
- (void)initMainTableView;
- (void)initChildView;
- (void)initChildData;
- (void)viewDidLoad;
- (id)initWithWCProductInfo:(id)arg1 isUnSupportExpress:(BOOL)arg2;
- (void)stopLoadingView;
- (void)startLoadingView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

