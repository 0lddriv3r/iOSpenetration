//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "WCPayIBGCheckJSAPICgiDelegate.h"

@class NSString, WCPayIBGCheckJSAPICgi;

@interface WebviewJSEventHandler_handleWCPayWalletBuffer : WebviewJSEventHandlerBase <WCPayIBGCheckJSAPICgiDelegate>
{
    NSString *_action;
    int _region;
    NSString *_buffer;
    NSString *_currentBuffer;
    WCPayIBGCheckJSAPICgi *_cgi;
}

@property(retain, nonatomic) WCPayIBGCheckJSAPICgi *cgi; // @synthesize cgi=_cgi;
@property(retain, nonatomic) NSString *currentBuffer; // @synthesize currentBuffer=_currentBuffer;
@property(retain, nonatomic) NSString *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) int region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)handleFetchBuffer;
- (void)handleSaveBuffer;
- (void)callFail;
- (id)mmkvBufferKeyWithRegion:(int)arg1;
- (void)ibgCheckJSAPICgi:(id)arg1 didFailWithError:(id)arg2;
- (void)ibgCheckJSAPICgi:(id)arg1 didGetResponse:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

