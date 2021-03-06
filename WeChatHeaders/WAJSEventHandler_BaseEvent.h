//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAWebViewController;

@interface WAJSEventHandler_BaseEvent : NSObject
{
    BOOL _runInMainThread;
    BOOL _isGameApp;
    unsigned long _callbackId;
    id <WAJSEventHandlerContextDelegate> _context;
    WAWebViewController *_webviewController;
    unsigned long _contextId;
    unsigned long _appServiceType;
}

@property(nonatomic) unsigned long appServiceType; // @synthesize appServiceType=_appServiceType;
@property(nonatomic) unsigned long contextId; // @synthesize contextId=_contextId;
@property(nonatomic) BOOL isGameApp; // @synthesize isGameApp=_isGameApp;
@property(nonatomic) BOOL runInMainThread; // @synthesize runInMainThread=_runInMainThread;
@property(nonatomic) __weak WAWebViewController *webviewController; // @synthesize webviewController=_webviewController;
@property(nonatomic) __weak id <WAJSEventHandlerContextDelegate> context; // @synthesize context=_context;
@property(nonatomic) unsigned long callbackId; // @synthesize callbackId=_callbackId;
- (void).cxx_destruct;
- (void)handleJSEvent:(id)arg1;
- (id)getAppID;
- (void)endWithResult:(id)arg1;

@end

