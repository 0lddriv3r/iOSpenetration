//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "MidasCurrencyReqHandlerDelegate.h"
#import "MidasIAPPayDelegate.h"
#import "MidasIAPRuntimeDelegate.h"
#import "MidasProductInfoReqHandlerDelegate.h"
#import "PBMessageObserverDelegate.h"

@class MidasBaseReqParams, MidasIAPPayRequest, NSMutableArray, NSMutableSet, NSString;

@interface MidasIAPMgr : MMService <MidasIAPPayDelegate, MidasIAPRuntimeDelegate, MidasProductInfoReqHandlerDelegate, PBMessageObserverDelegate, MidasCurrencyReqHandlerDelegate, MMService>
{
    BOOL _isPaying;
    int _initState;
    MidasBaseReqParams *_baseReqParams;
    MidasIAPPayRequest *_curPayReq;
    NSMutableSet *_reqHandlerSet;
    CDUnknownBlockType _initCompletion;
    CDUnknownBlockType _updateOpenKeyCompletion;
    NSMutableArray *_currencyReqCompletionArr;
    NSString *_usableProductId;
}

@property(retain, nonatomic) NSString *usableProductId; // @synthesize usableProductId=_usableProductId;
@property(retain, nonatomic) NSMutableArray *currencyReqCompletionArr; // @synthesize currencyReqCompletionArr=_currencyReqCompletionArr;
@property(copy, nonatomic) CDUnknownBlockType updateOpenKeyCompletion; // @synthesize updateOpenKeyCompletion=_updateOpenKeyCompletion;
@property(copy, nonatomic) CDUnknownBlockType initCompletion; // @synthesize initCompletion=_initCompletion;
@property(retain, nonatomic) NSMutableSet *reqHandlerSet; // @synthesize reqHandlerSet=_reqHandlerSet;
@property(retain, nonatomic) MidasIAPPayRequest *curPayReq; // @synthesize curPayReq=_curPayReq;
@property(retain, nonatomic) MidasBaseReqParams *baseReqParams; // @synthesize baseReqParams=_baseReqParams;
@property(nonatomic) BOOL isPaying; // @synthesize isPaying=_isPaying;
@property(nonatomic) int initState; // @synthesize initState=_initState;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)hasClassBeenHooked:(id)arg1 selector:(id)arg2;
- (id)localizedStringOfStringId:(id)arg1;
- (void)onLogOutput:(id)arg1;
- (BOOL)isProductIdShouldIgnoredByMidas:(id)arg1;
- (void)onReprovidingAfterInitialize;
- (void)onResp:(id)arg1;
- (void)needLogin;
- (void)onPayReqObjGetResp:(id)arg1 req:(id)arg2 reqId:(unsigned long)arg3 obj:(id)arg4 isOpenKeyExpire:(BOOL)arg5;
- (void)onCurrencyInfoObjGetResp:(id)arg1 req:(id)arg2 obj:(id)arg3 isOpenKeyExpire:(BOOL)arg4;
- (void)onProductInfoObjGetResp:(id)arg1 req:(id)arg2 obj:(id)arg3 isOpenKeyExpire:(BOOL)arg4;
- (id)convertMidasErrFromResp:(id)arg1;
- (void)resetPayState;
- (void)resetServiceState;
- (void)onCallPayExtResult:(BOOL)arg1 req:(id)arg2 errInfo:(id)arg3;
- (void)handleInitReissueResp:(id)arg1;
- (void)handleIAPPayResp:(id)arg1 req:(id)arg2 isOpenKeyExpire:(BOOL)arg3;
- (void)handleCurrencyInfoResp:(id)arg1 req:(id)arg2 isOpenKeyExpire:(BOOL)arg3;
- (void)handleProductInfoResp:(id)arg1 req:(id)arg2 completion:(CDUnknownBlockType)arg3 isOpenKeyExpire:(BOOL)arg4;
- (void)configBaseParamsBaseReq:(id)arg1;
- (void)realLaunchPayProduct:(id)arg1;
- (BOOL)internalInitMidasIAP:(id)arg1;
- (void)handleUpdateOpenKeyResp:(id)arg1;
- (void)handleGetInitDataResp:(id)arg1;
- (void)requestInitData:(BOOL)arg1;
- (void)internalUpdateOpenKey:(CDUnknownBlockType)arg1;
- (void)launchIAPPay:(id)arg1;
- (void)requestProductInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestCurrencySymbol:(CDUnknownBlockType)arg1;
- (BOOL)isIAPOpen;
- (void)updateOpenKey:(id)arg1;
- (void)initMidasSDK:(CDUnknownBlockType)arg1;
- (int)getSDKInitState;
- (void)dealloc;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

