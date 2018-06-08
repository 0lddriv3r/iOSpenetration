//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "LocationRetrieveDelegate.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class CLLocation, LocationRetriever, NSString;

@interface BrandServiceSearchMgr : MMService <LocationRetrieveDelegate, PBMessageObserverDelegate, MMService>
{
    LocationRetriever *_locationRetriver;
    CLLocation *_location;
}

@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) LocationRetriever *locationRetriver; // @synthesize locationRetriver=_locationRetriver;
- (void).cxx_destruct;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (unsigned long)sendDetailPageDataQuickRequest:(unsigned long long)arg1 Keyword:(id)arg2;
- (unsigned long)sendDetailPageDataRequest:(unsigned long long)arg1 RequestSource:(unsigned long)arg2 Keyword:(id)arg3 Offset:(unsigned long)arg4 SearchId:(id)arg5;
- (void)stopRetriveLocation;
- (void)startRetriveLocation;
- (void)clearLocationInfo;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

