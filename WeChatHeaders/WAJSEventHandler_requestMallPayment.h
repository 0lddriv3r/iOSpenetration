//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCPayMallRequestPaymentControlLogicDelegate.h"

@class NSString, WCPayMallRequestPaymentControlLogic;

@interface WAJSEventHandler_requestMallPayment : WAJSEventHandler_BaseEvent <WCPayMallRequestPaymentControlLogicDelegate>
{
    WCPayMallRequestPaymentControlLogic *_mallRequestPaymentControlLogic;
}

@property(retain, nonatomic) WCPayMallRequestPaymentControlLogic *mallRequestPaymentControlLogic; // @synthesize mallRequestPaymentControlLogic=_mallRequestPaymentControlLogic;
- (void).cxx_destruct;
- (void)mallPaymentLogicDidFailWithResult:(id)arg1;
- (void)mallPaymentLogicDidPaySucc;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
