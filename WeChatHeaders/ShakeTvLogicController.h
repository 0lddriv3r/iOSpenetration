//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ITvSearchExt.h"
#import "LocationRetrieveDelegate.h"

@class LocationRetriever, NSString;

@interface ShakeTvLogicController : MMObject <LocationRetrieveDelegate, ITvSearchExt>
{
    id <ShakeLogicProxyDelegate> m_delegate;
    unsigned long m_sessionId;
    LocationRetriever *m_locationRetrieve;
}

- (void).cxx_destruct;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (unsigned long)getSessionId;
- (id)getMsgForState:(unsigned long)arg1;
- (BOOL)isShowBannerView;
- (void)shakeTerminate;
- (void)shakeReset;
- (void)shakeStop;
- (void)shakeReport;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)OnTvError:(int)arg1 andSessionId:(unsigned long)arg2;
- (void)OnGetTvItem:(id)arg1 andSessionId:(unsigned long)arg2;
- (void)OnEndRecord;
- (void)OnStartRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
