//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IMyInvoiceLogicMgrExt.h"
#import "IWebviewAskAuthorizationLogicExt.h"
#import "MyInvoiceInfoViewControllerDelegate.h"
#import "MyInvoiceListViewControllerDelegate.h"

@class NSString;

@interface WAJSEventHandler_chooseInvoiceTitle : WAJSEventHandler_BaseEvent <IWebviewAskAuthorizationLogicExt, IMyInvoiceLogicMgrExt, MyInvoiceListViewControllerDelegate, MyInvoiceInfoViewControllerDelegate>
{
}

- (void)OnJsapiAddInvoiceFail;
- (void)OnJsapiAddInvoiceCancel;
- (void)OnJsapiAddInvoiceSuccess:(id)arg1;
- (void)onChooseCancel;
- (void)onChooseSuccess:(id)arg1;
- (void)chooseFailed;
- (void)OnGetInvoiceRet:(BOOL)arg1 andResult:(id)arg2 fromScene:(unsigned int)arg3;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)startInvoice;
- (void)handleJSEvent:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

