//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "ILocationMgrExt.h"
#import "INetworkStatusMgrExt.h"

@class CMMotionManager;

@interface WAJSContextPlugin_coreMotion : WAJSContextPluginBase <ILocationMgrExt, INetworkStatusMgrExt>
{
    CMMotionManager *_motionMgr;
    unsigned long m_headingTag;
    unsigned long m_locationTag;
    BOOL _accelerometerWorking;
    BOOL _accelerometerPauseBySuspend;
    BOOL _compassWorking;
    BOOL _compassPauseBySuspend;
    BOOL _locationWorking;
    BOOL _locationPauseBySuspend;
    id <IJSContextPluginDelegate> _resultDelegate;
}

@property(nonatomic) __weak id <IJSContextPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void).cxx_destruct;
- (void)onNetworkStatusChange:(unsigned long)arg1;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long)arg2;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long)arg2;
- (void)stopLocationUpdateBySuspend:(BOOL)arg1;
- (void)enableLocationUpdate;
- (void)enableLocationUpdate:(BOOL)arg1;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long)arg2;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long)arg2;
- (void)stopCompassBySuspend:(BOOL)arg1;
- (void)enableCompass;
- (void)enableCompass:(BOOL)arg1;
- (void)dealloc;
- (void)stopAccelerometerBySuspend:(BOOL)arg1;
- (void)enableAccelerometer;
- (void)enableAccelerometer:(BOOL)arg1;
- (BOOL)handleEvent:(int)arg1 userInfo:(id)arg2;
- (id)init;

@end

