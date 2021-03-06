//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayT2BCQueryDetailCgiDelegate.h"

@class NSString, WCPayT2BCQueryDetailCgi;

@interface WCPayT2BCDetailControlLogic : WCPayControlLogic <WCPayT2BCQueryDetailCgiDelegate>
{
    id <WCPayT2BCDetailControlLogicDelegate> _t2bcDetailLogicDelegate;
    WCPayT2BCQueryDetailCgi *_m_queryDetailCgi;
    unsigned int _m_fromScene;
    unsigned int _m_status;
}

@property(nonatomic) unsigned int m_status; // @synthesize m_status=_m_status;
@property(nonatomic) unsigned int m_fromScene; // @synthesize m_fromScene=_m_fromScene;
@property(retain, nonatomic) WCPayT2BCQueryDetailCgi *m_queryDetailCgi; // @synthesize m_queryDetailCgi=_m_queryDetailCgi;
- (void).cxx_destruct;
- (void)OnWCPayTransferToBankCardPaidSuccessViewControllerBack;
- (void)stopLogic;
- (void)OnWCPayT2BCQueryDetailCgiResponseError:(id)arg1 errorCode:(unsigned long)arg2;
- (void)OnWCPayT2BCQueryDetailCgiResponseOK:(id)arg1;
- (void)getTransferDetailData;
- (void)startLogic;
- (id)initWithTransferBillId:(id)arg1 scene:(unsigned int)arg2 status:(unsigned int)arg3;
- (id)initWithTransferBillId:(id)arg1 scene:(unsigned int)arg2;
- (void)dealloc;
- (void)setT2BCDetialControlLogicDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

