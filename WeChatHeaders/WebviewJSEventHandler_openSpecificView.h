//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "BrandOpenSpecificViewHandlerDelegate.h"
#import "VerifyPhoneDelegate.h"

@class BrandOpenSpecificViewHandler, NSString;

@interface WebviewJSEventHandler_openSpecificView : WebviewJSEventHandlerBase <VerifyPhoneDelegate, BrandOpenSpecificViewHandlerDelegate>
{
    BrandOpenSpecificViewHandler *_openSpecificViewHandler;
    BOOL _isDismissCurrentViewController;
}

- (void).cxx_destruct;
- (id)getCurrentController;
- (BOOL)shouldDismissCurrentViewController;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

