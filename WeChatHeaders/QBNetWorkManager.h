//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QBReachability;

@interface QBNetWorkManager : NSObject
{
    QBReachability *_internetReach;
    int _oldAPN;
    BOOL _systemProxySet;
    int _mccCode;
    int _mncCode;
    int _apnSubtype;
    NSString *_mccmncStr;
    int _curAPN;
}

+ (id)sharedInstance;
@property BOOL systemProxySet; // @synthesize systemProxySet=_systemProxySet;
@property(readonly, nonatomic) int curAPN; // @synthesize curAPN=_curAPN;
@property(retain, nonatomic) NSString *mccmncStr; // @synthesize mccmncStr=_mccmncStr;
@property(nonatomic) int apnSubtype; // @synthesize apnSubtype=_apnSubtype;
@property(nonatomic) int mncCode; // @synthesize mncCode=_mncCode;
@property(nonatomic) int mccCode; // @synthesize mccCode=_mccCode;
- (void).cxx_destruct;
- (void)checkAPNType;
- (void)stopListenNetworkChange;
- (void)startListenNetworkChange;
- (int)networkStatus;
- (void)mttNetworkReachabilityChanged:(id)arg1;
- (void)getApnSubtype:(id)arg1;
- (void)notifyOtherModules;
- (void)updateAPN:(int)arg1;
- (void)checkNetworkStatus;
@property(readonly, nonatomic) BOOL isAPNChanged;
@property(readonly, nonatomic) NSString *apnString;
- (id)internetReach;
- (id)init;

@end
