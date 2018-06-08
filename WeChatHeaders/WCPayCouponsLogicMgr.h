//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSString, WCPayTradeFavInfo;

@interface WCPayCouponsLogicMgr : MMService <MMService>
{
    BOOL _bIsUserClickConfirmInCouponList;
    WCPayTradeFavInfo *_wcPayTradeFavInfo;
    NSMutableDictionary *_dicFavorItemInComponseInfo;
}

@property(nonatomic) BOOL bIsUserClickConfirmInCouponList; // @synthesize bIsUserClickConfirmInCouponList=_bIsUserClickConfirmInCouponList;
@property(retain, nonatomic) NSMutableDictionary *dicFavorItemInComponseInfo; // @synthesize dicFavorItemInComponseInfo=_dicFavorItemInComponseInfo;
@property(retain, nonatomic) WCPayTradeFavInfo *wcPayTradeFavInfo; // @synthesize wcPayTradeFavInfo=_wcPayTradeFavInfo;
- (void).cxx_destruct;
- (id)getOrderConfirmViewShowBindSerialBankFavDescListWithBindSerial:(id)arg1;
- (void)setBankFavReddotHasShow;
- (BOOL)hasShowBankFavRedDotInOrderConfirmView;
- (BOOL)shouldShowBankFavorRedDotWithCardList:(id)arg1 currentBindSerial:(id)arg2;
- (id)getNewBindCardFavorDescList;
- (id)getBindSerialBankFavorDescListWithBindSerial:(id)arg1;
- (id)getFilterTradeFavListWithBindCardArray:(id)arg1;
- (id)deselectTradeFavItem:(id)arg1;
- (id)selectTradeFavItem:(id)arg1;
- (BOOL)shouldShowMoreFavEnteranceWithBindCardArray:(id)arg1;
- (BOOL)shouldShowFavEnteranceWithBindCardArray:(id)arg1;
- (unsigned long long)getSelectedFavComposeInfoShowFavAmount;
- (unsigned long long)getSelectedFavComposeInfoInvariableFavAmount;
- (void)setCouponsListViewUserHasClickConfirm:(BOOL)arg1;
- (void)calcDefaultComposeInfoForSelectCardIfNeed:(id)arg1;
- (BOOL)isFreePaymentTradeFavInfo;
- (id)getBankFavorItemAndCouponsInfo;
- (id)getWCPayTradeFavInfo;
- (void)clearSelectedBankFavAndReCalculateBankFavorInfo;
- (id)autoAdjustCouponsInfoForSelectedCard:(id)arg1;
- (id)resetComposeInfo:(id)arg1;
- (void)resetTradeFavInfo:(id)arg1;
- (void)autoChangeTradeFavorItemStatusToAdjustConpons;
- (void)onServiceClearData;
- (BOOL)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
