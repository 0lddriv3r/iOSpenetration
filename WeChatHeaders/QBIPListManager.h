//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSString, NSTimer;

@interface QBIPListManager : NSObject
{
    BOOL _isDefaultUseProxy;
    BOOL _hadFetchedIplist;
    int _spdy_bProxy;
    NSMutableDictionary *_ssidToIpTypeDicts;
    int _spdyEnableFlag;
    NSTimer *_getIpListTimer;
    NSTimer *_iplistFrequencyControlTimer;
    int _iplistFrequencyControlCount;
    NSString *_spdyStartIp;
    NSDate *_getIpListDate;
    long long _currentSSID;
    long long _gettingIpListSSID;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *getIpListDate; // @synthesize getIpListDate=_getIpListDate;
@property(nonatomic) BOOL hadFetchedIplist; // @synthesize hadFetchedIplist=_hadFetchedIplist;
@property(retain, nonatomic) NSString *spdyStartIp; // @synthesize spdyStartIp=_spdyStartIp;
@property(nonatomic) int iplistFrequencyControlCount; // @synthesize iplistFrequencyControlCount=_iplistFrequencyControlCount;
@property(retain, nonatomic) NSTimer *iplistFrequencyControlTimer; // @synthesize iplistFrequencyControlTimer=_iplistFrequencyControlTimer;
@property(retain, nonatomic) NSTimer *getIpListTimer; // @synthesize getIpListTimer=_getIpListTimer;
@property(nonatomic) long long gettingIpListSSID; // @synthesize gettingIpListSSID=_gettingIpListSSID;
@property(nonatomic) long long currentSSID; // @synthesize currentSSID=_currentSSID;
@property(nonatomic) int spdyEnableFlag; // @synthesize spdyEnableFlag=_spdyEnableFlag;
@property(retain, nonatomic) NSMutableDictionary *ssidToIpTypeDicts; // @synthesize ssidToIpTypeDicts=_ssidToIpTypeDicts;
@property BOOL isDefaultUseProxy; // @synthesize isDefaultUseProxy=_isDefaultUseProxy;
@property int spdy_bProxy; // @synthesize spdy_bProxy=_spdy_bProxy;
- (void).cxx_destruct;
- (void)resetCurrentIpIndexOfType:(int)arg1;
- (BOOL)failCurrentIpOfType:(int)arg1;
- (void)getIpListFrequencyControl;
- (void)clearFrequencyControlTimer;
- (id)getCurrentIpOfType:(int)arg1;
- (void)statSpdyStartIp;
- (void)saveDataToFileAndClear;
- (void)saveIpLists:(id)arg1 apnType:(long long)arg2 ipType:(int)arg3 totalPollNum:(int)arg4 lifePeriod:(int)arg5;
- (void)getIPListWhenAPNChanged:(BOOL)arg1;
- (BOOL)haveToGetIpList;
- (void)getIpListFromServer:(id)arg1;
@property(readonly, nonatomic) BOOL spdyAvailable;
@property(readonly, nonatomic) BOOL cloudAccelerateOn;
- (void)disableSpdy;
- (void)enableSpdy;
- (void)dealloc;
- (id)init;

@end

