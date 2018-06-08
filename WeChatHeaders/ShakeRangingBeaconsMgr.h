//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CBCentralManagerDelegate.h"
#import "CLLocationManagerDelegate.h"
#import "MMConfigMgrExt.h"
#import "MMService.h"

@class CBCentralManager, CLLocationManager, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface ShakeRangingBeaconsMgr : MMService <CLLocationManagerDelegate, CBCentralManagerDelegate, MMConfigMgrExt, MMService>
{
    BOOL _isHaveShowed;
    CLLocationManager *_locationManager;
    CBCentralManager *_manager;
    NSMutableDictionary *_beaconsDict;
    NSArray *_uuidsArr;
    double _startRangingTime;
}

@property(nonatomic) double startRangingTime; // @synthesize startRangingTime=_startRangingTime;
@property(retain, nonatomic) NSArray *uuidsArr; // @synthesize uuidsArr=_uuidsArr;
@property(retain) NSMutableDictionary *beaconsDict; // @synthesize beaconsDict=_beaconsDict;
@property(retain, nonatomic) CBCentralManager *manager; // @synthesize manager=_manager;
@property(retain) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property BOOL isHaveShowed; // @synthesize isHaveShowed=_isHaveShowed;
- (void).cxx_destruct;
- (void)onMMConfigUpdated;
- (void)centralManagerDidUpdateState:(id)arg1;
- (BOOL)haveStartRangingRegion:(id)arg1;
- (void)registerRangingRegions;
- (void)detectBluetoothAvailable;
- (id)keyForBeacon:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (BOOL)isDeviceBLEPowerOn;
- (void)stopRanging;
- (void)startRanging;
@property(readonly) NSMutableArray *beacons;
- (void)setupUUIDs;
- (id)init;
- (void)dealloc;
- (id)loadGatedLaunchOptionsFromFile;
- (BOOL)saveGatedLaunchOptions:(id)arg1;
- (id)gatedLaunchOptionFilePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

