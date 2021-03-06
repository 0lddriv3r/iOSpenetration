//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "JSEventExt.h"
#import "MMService.h"
#import "WCMallNetworkHelperDelegate.h"

@class NSDictionary, NSString, WCMallNetworkHelper;

@interface WCMallLogicMgr : MMService <MMService, WCMallNetworkHelperDelegate, IMsgExt, JSEventExt>
{
    WCMallNetworkHelper *m_oWCMallNetworkHelper;
    NSDictionary *m_oBufferFunctionList;
    BOOL m_bGetFunctionList;
}

- (void).cxx_destruct;
- (void)jsJumpWCMall:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)HandleWCMallActivityUpdate:(id)arg1;
- (void)handleActivityType:(id)arg1 ShowedType:(id)arg2 FunctionId:(id)arg3 ActivityId:(id)arg4 Ticket:(id)arg5;
- (void)setNeedShowRedCodeInMoreView:(BOOL)arg1;
- (void)setNeedShowNewInMoreView:(BOOL)arg1;
- (BOOL)isNeedShowRedCodeInMoreView;
- (void)setRedDotOrNewLastUpdateTime;
- (void)clearAllNewOrRedDot;
- (BOOL)checkIsRedDotOrNewOverTime;
- (BOOL)isNeedShowNewInMoreView;
- (void)setShowProductBannerActivity:(id)arg1 ActivityID:(id)arg2 Showed:(BOOL)arg3;
- (BOOL)isNeedShowProductBannerActivity:(id)arg1 ActivityID:(id)arg2;
- (void)setShowProductActivity:(id)arg1 ActivityID:(id)arg2 Showed:(BOOL)arg3;
- (BOOL)isNeedShowProductActivity:(id)arg1 ActivityID:(id)arg2;
- (id)getAllTicket;
- (void)saveAllTicket:(id)arg1;
- (void)setLatestActivityIDShowedTips:(unsigned long)arg1;
- (unsigned long)getLatestActivityIDShowedTips;
- (void)ClearWCMallOldTelephone;
- (void)SetWCMallOldTelephone:(id)arg1 UserName:(id)arg2;
- (id)GetWCMallOldTelehoneArray;
- (void)SetUsedWCMallPayTelephone;
- (BOOL)IsUsedWCMallPayTelephone;
- (void)sendDeleteChargeHistoryRequest:(id)arg1;
- (void)GetWCMallPayFunctionListRequest:(id)arg1;
- (void)GetWCMallPayChargeProxyRequest:(id)arg1 CMDID:(unsigned long)arg2;
- (void)GetWCMallFunctionProductLatestInfo:(id)arg1;
- (void)GetWCMallFunctionProductsList:(unsigned long)arg1;
- (void)GetWCMallFunctionList:(id)arg1;
- (void)GetWCMallFunctionList;
- (id)_productInfoFromDictionary:(id)arg1;
- (void)OnCallPayChargeProxy:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnCallBackGetWCMallLatestPayProductInfo:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnCallBackGetWCMallFunctionProductList:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnCallBackGetWCMallFunctionList:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnHandlerFunctionListComeBack:(id)arg1 Request:(id)arg2 FromCache:(BOOL)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

