//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WXGChatLogNetworkUtility : NSObject
{
}

+ (id)currentHotSpotOrWifiSSID;
+ (BOOL)isOnWifiOrHostSpotMode;
+ (id)_getCorrectMaskWithIP:(id)arg1;
+ (BOOL)isSameNetGateWay:(id)arg1;
+ (BOOL)isSameWifi:(id)arg1 selfWifiName:(id *)arg2;
+ (BOOL)isHotspotActivity;
+ (BOOL)isBatteryChargeAndLevel:(float *)arg1;

@end
