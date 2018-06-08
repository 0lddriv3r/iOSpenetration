//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMWebViewDelegate.h"
#import "WCPayLogicMgrExt.h"
#import "WCPayOrderAndProductDetailHistoryInfoViewControllerDelegate.h"
#import "WCPayOrderDetailHistoryViewControllerDelegate.h"
#import "WCPayOrderHistoryProductListViewControllerDelegate.h"
#import "WCPayOrderHistoryViewControllerDelegate.h"

@class NSString;

@interface WCPayOrderHistoryLogic : WCPayControlLogic <WCPayLogicMgrExt, WCPayOrderHistoryViewControllerDelegate, WCPayOrderDetailHistoryViewControllerDelegate, WCPayOrderAndProductDetailHistoryInfoViewControllerDelegate, WCPayOrderHistoryProductListViewControllerDelegate, MMWebViewDelegate>
{
    unsigned long offset;
    BOOL hasMoreOrder;
}

- (void)webViewReturn:(id)arg1;
- (void)OnStatusChangedOrderListCountChanged:(unsigned long)arg1;
- (void)OnDelOrder:(id)arg1 Error:(id)arg2;
- (void)OnDelAllOrder:(id)arg1;
- (void)OnSetEvaluateOrder:(id)arg1;
- (void)OnGetHistoryIapOrderDetailInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetHistoryOrderDetailInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetOrderList:(id)arg1 TotalCount:(unsigned long)arg2 Error:(id)arg3;
- (void)OnClickedBrandAppUserName:(id)arg1 NickName:(id)arg2;
- (void)OnHistoryOrderDetailRightActionBack:(BOOL)arg1;
- (void)OnHistoryOrderDetailBack:(BOOL)arg1;
- (void)WCPayOrderHistoryProductListViewControllerDelegateDidSelectProduct:(id)arg1;
- (void)WCPayOrderHistoryProductListViewControllerDelegateBack;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerClickPannelButtonInfo:(id)arg1;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerClickNormalCellInfo:(id)arg1;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerEvaluateOrder:(unsigned long)arg1;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerContactBrandTel;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerContactBrandSeller;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerShowTranscationCell;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerShowProductView;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerBack;
- (void)OnSelectedNotifyMessage:(id)arg1;
- (void)OnSelectedOrderDetail:(id)arg1;
- (void)OnOrderListRightActionBack;
- (void)OnOrderListBack;
- (BOOL)HasMoreOrderList;
- (void)OnLoadMoreOrderList;
- (void)OnDelAllOrder;
- (void)OnDelNotifyMsg:(id)arg1;
- (void)OnDelOrder:(id)arg1;
- (id)ParseMessageStructToOrderDetail:(id)arg1;
- (void)WCPayJumpURLHandle:(id)arg1;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

