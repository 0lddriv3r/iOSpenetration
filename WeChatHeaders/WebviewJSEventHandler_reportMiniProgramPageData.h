//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IReportMiniProgramDelegate.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_reportMiniProgramPageData : WebviewJSEventHandlerBase <IReportMiniProgramDelegate>
{
    JSEvent *_event;
}

- (void).cxx_destruct;
- (void)onReportFail:(id)arg1;
- (void)onReportSuccess:(int)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

