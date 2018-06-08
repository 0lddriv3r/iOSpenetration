//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IWAJSContextBlueToothProtocol.h"

@class NSString;

@interface WAJSEventHandler_notifyBLECharacteristicValueChanged : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>
{
    NSString *m_deviceId;
    NSString *m_serviceId;
    NSString *m_charId;
}

- (void).cxx_destruct;
- (id)bleInstance;
- (void)dealloc;
- (void)onBluetoothCharacteristicsDidSetNotify:(id)arg1 service:(id)arg2 device:(id)arg3 errorCode:(int)arg4 errMsg:(id)arg5 appid:(id)arg6;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

