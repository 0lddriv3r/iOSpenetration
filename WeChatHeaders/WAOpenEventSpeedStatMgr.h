//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface WAOpenEventSpeedStatMgr : MMService <MMService>
{
    NSMutableDictionary *m_timeStampCache;
    unsigned long long m_beginTime;
    NSString *m_appid;
    int m_version;
    unsigned int m_appState;
    unsigned int m_scene;
    BOOL m_isTriggerDownload;
    BOOL m_isSyncUpdateContact;
    BOOL m_isSyncLaunchCgi;
    unsigned long m_syncUpdateReason;
    unsigned long long m_preloadPageFrameBeginTime;
    unsigned long long m_preloadPageFrameJSBeginTime;
}

- (void).cxx_destruct;
- (void)markEventEnd:(unsigned int)arg1 appType:(unsigned long)arg2;
- (void)markEventBegin:(unsigned int)arg1;
- (void)markEventSyncLaunchCgi:(id)arg1;
- (void)markEventSyncUpdateContact:(id)arg1 reason:(unsigned long)arg2;
- (void)markEventTriggerDownload:(id)arg1;
- (void)registerOpenWeAppInfo:(id)arg1 appVersion:(int)arg2 appState:(unsigned int)arg3 scene:(unsigned int)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

