//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString, SKBuiltinBuffer_t;

@interface GetPOIListMgr : MMService <PBMessageObserverDelegate, MMService>
{
    SKBuiltinBuffer_t *_nearBuff;
    SKBuiltinBuffer_t *_searchBuff;
    struct CLLocationCoordinate2D _lastCoordinate;
}

@property(retain, nonatomic) SKBuiltinBuffer_t *searchBuff; // @synthesize searchBuff=_searchBuff;
@property(retain, nonatomic) SKBuiltinBuffer_t *nearBuff; // @synthesize nearBuff=_nearBuff;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)getSearchPOIList:(struct CLLocationCoordinate2D)arg1 KeyWord:(id)arg2 StartFromFirst:(BOOL)arg3 Scene:(unsigned int)arg4 UserActuallyLocation:(id)arg5;
- (BOOL)autoSearchPOIList:(struct CLLocationCoordinate2D)arg1 Keyword:(id)arg2 Scene:(unsigned int)arg3 UserActuallyLocation:(id)arg4 StartFromFirst:(BOOL)arg5;
- (BOOL)getNearPOIList:(struct CLLocationCoordinate2D)arg1 StartFromFirst:(BOOL)arg2 Scene:(unsigned int)arg3 UserActuallyLocation:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
