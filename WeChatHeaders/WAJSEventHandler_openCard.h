//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCBatchViewCardHelpDelegate.h"

@class NSString, WCBatchViewCardHelper;

@interface WAJSEventHandler_openCard : WAJSEventHandler_BaseEvent <WCBatchViewCardHelpDelegate>
{
    WCBatchViewCardHelper *_viewCardHelp;
}

@property(retain, nonatomic) WCBatchViewCardHelper *viewCardHelp; // @synthesize viewCardHelp=_viewCardHelp;
- (void).cxx_destruct;
- (void)onBatchViewCardReturn;
- (id)getDelegateViewController;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
