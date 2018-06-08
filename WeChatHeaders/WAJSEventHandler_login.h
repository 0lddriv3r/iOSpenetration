//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "JSApiScopeConfirmWindowDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "WAJSContextPlugin_userAccountProtocol.h"

@class JSApiScopeConfirmWindow, NSArray, NSDictionary, NSString;

@interface WAJSEventHandler_login : WAJSEventHandler_BaseEvent <PBMessageObserverDelegate, JSApiScopeConfirmWindowDelegate, WAJSContextPlugin_userAccountProtocol>
{
    NSString *_appID;
    NSArray *_arrConfirmScope;
    JSApiScopeConfirmWindow *_confirmWindow;
    NSDictionary *_dicInputParam;
}

@property(retain) NSDictionary *dicInputParam; // @synthesize dicInputParam=_dicInputParam;
- (void).cxx_destruct;
- (void)onScopeWindowCancel:(id)arg1;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)onConfirmViewCancel;
- (void)onConfirmViewOKWithScope:(id)arg1;
- (void)closeConfirmWindow;
- (void)showConfirmViewWithAppName:(id)arg1 iconURL:(id)arg2 scopeInfoList:(id)arg3;
- (void)continueShowConfirmViewWithAppName:(id)arg1 iconURL:(id)arg2 scopeInfoList:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onConfirmResponse:(id)arg1;
- (void)confirmRequestWithAppID:(id)arg1 scope:(id)arg2;
- (void)onLoginResponse:(id)arg1;
- (void)loginRequestWithAppID:(id)arg1 scope:(id)arg2;
- (void)endCancel;
- (void)endOKWithData:(id)arg1;
- (void)endErrorWithMessage:(id)arg1 code:(long)arg2;
- (void)endErrorWithMessage:(id)arg1;
- (void)endWithResult:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)onUserAccountJSEventEnd;
- (void)mainThread_runUserAccountJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

