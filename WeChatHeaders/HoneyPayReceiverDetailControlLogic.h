//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayHoneyPayBaseControlLogic.h"

#import "HoneyPayReceiverStatusViewControllerDelegate.h"
#import "WCPayGetHoneyPayCardCgiDelegate.h"
#import "WCPayQryHoneyUserDetailCgiDelegate.h"

@class HoneyPayReceiverStatusViewController, NSString, WCPayGetHoneyPayCardCgi, WCPayQryHoneyUserDetailCgi;

@interface HoneyPayReceiverDetailControlLogic : WCPayHoneyPayBaseControlLogic <HoneyPayReceiverStatusViewControllerDelegate, WCPayQryHoneyUserDetailCgiDelegate, WCPayGetHoneyPayCardCgiDelegate>
{
    id <HoneyPayReceiverDetailControlLogicDelegate> _delegate;
    HoneyPayReceiverStatusViewController *_detailVC;
    WCPayQryHoneyUserDetailCgi *_detailCgi;
    WCPayGetHoneyPayCardCgi *_getCardCgi;
}

@property(retain, nonatomic) WCPayGetHoneyPayCardCgi *getCardCgi; // @synthesize getCardCgi=_getCardCgi;
@property(retain, nonatomic) WCPayQryHoneyUserDetailCgi *detailCgi; // @synthesize detailCgi=_detailCgi;
@property(retain, nonatomic) HoneyPayReceiverStatusViewController *detailVC; // @synthesize detailVC=_detailVC;
@property(nonatomic) __weak id <HoneyPayReceiverDetailControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)getHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qryHoneyUserDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryHoneyUserDetailCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)receiverStatusVCDidClickGotoBankCardList:(id)arg1;
- (void)receiverStatusVCDidClickGetCard:(id)arg1;
- (id)cardNo;
- (void)requestDetail;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
