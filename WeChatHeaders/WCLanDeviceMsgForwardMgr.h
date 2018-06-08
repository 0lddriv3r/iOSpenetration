//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WCLanDeviceKissLogicDelegate.h"

@class NSMutableArray, NSMutableSet, NSString, WCLanDeviceBaseKissLogic, WCLanDeviceData;

@interface WCLanDeviceMsgForwardMgr : MMService <WCLanDeviceKissLogicDelegate, MMService>
{
    WCLanDeviceData *m_forwardData;
    NSMutableArray *m_currentDeviceList;
    NSMutableSet *m_deviceLanFlagCache;
    NSMutableSet *m_deviceMD5Set;
    NSMutableSet *m_deviceConnectFlagCache;
    WCLanDeviceBaseKissLogic *m_kissLogic;
    BOOL m_hasOperated;
    int m_opScene;
}

- (void).cxx_destruct;
- (void)onKissDeviceProgressUpdate:(float)arg1 device:(id)arg2;
- (void)onKissDeviceWithDevice:(id)arg1 errCode:(int)arg2;
- (void)onDeviceFound:(id)arg1;
- (void)boundDevicesFinalFeedBack;
- (void)clearSelf;
- (void)stopAllLogic;
- (void)stopScan;
- (BOOL)hasConnectTask;
- (BOOL)cancelForwarMessageToLanDevice:(id)arg1;
- (BOOL)forwardToLanDevice:(id)arg1;
- (BOOL)startScan;
- (id)availableDevicesInCache;
- (BOOL)hasAvailableDevice;
- (BOOL)hasAvailableDeviceInTimeLineItem:(id)arg1;
- (BOOL)hasAvailableDeviceInMessageWrap:(id)arg1;
- (void)initializeWithTimeLineItem:(id)arg1 mediaItem:(id)arg2 OpScene:(int)arg3;
- (void)initializeWithMessageWrap:(id)arg1 OpScene:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
