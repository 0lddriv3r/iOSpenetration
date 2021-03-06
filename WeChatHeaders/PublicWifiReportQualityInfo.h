//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PublicWifiReportQualityInfo : NSObject
{
    NSString *ssid;
    NSString *bssid;
    NSString *clientMac;
    NSString *apKey;
    unsigned long qrtype;
    NSString *mpShopId;
    NSString *mpAppId;
    NSString *sessionKey;
    unsigned long protoType;
    unsigned long stageCode;
    NSString *stageName;
    unsigned long result;
    unsigned long channel;
    NSString *mpUserName;
    unsigned long timeCost;
    NSString *resultMsg;
    unsigned long long currentTimeMillis;
}

@property(nonatomic) unsigned long long currentTimeMillis; // @synthesize currentTimeMillis;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg;
@property(nonatomic) unsigned long timeCost; // @synthesize timeCost;
@property(retain, nonatomic) NSString *mpUserName; // @synthesize mpUserName;
@property(nonatomic) unsigned long result; // @synthesize result;
@property(retain, nonatomic) NSString *stageName; // @synthesize stageName;
@property(nonatomic) unsigned long stageCode; // @synthesize stageCode;
@property(nonatomic) unsigned long channel; // @synthesize channel;
@property(nonatomic) unsigned long protoType; // @synthesize protoType;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey;
@property(retain, nonatomic) NSString *mpAppId; // @synthesize mpAppId;
@property(retain, nonatomic) NSString *mpShopId; // @synthesize mpShopId;
@property(nonatomic) unsigned long qrtype; // @synthesize qrtype;
@property(retain, nonatomic) NSString *apKey; // @synthesize apKey;
@property(retain, nonatomic) NSString *clientMac; // @synthesize clientMac;
@property(retain, nonatomic) NSString *bssid; // @synthesize bssid;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid;
- (void).cxx_destruct;
- (id)description;

@end

