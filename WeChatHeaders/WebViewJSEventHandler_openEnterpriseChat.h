//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IEnterpriseGroupMgrExt.h"

@class NSString;

@interface WebViewJSEventHandler_openEnterpriseChat : WebviewJSEventHandlerBase <IEnterpriseGroupMgrExt>
{
    NSString *_enterpriseChatScene;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)onInitiateBizChat:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

