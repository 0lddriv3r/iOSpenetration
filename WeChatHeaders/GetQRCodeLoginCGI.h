//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IRsaCertMgrExt.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface GetQRCodeLoginCGI : NSObject <IRsaCertMgrExt>
{
    id <GetQRCodeLoginDelegate> m_delegate;
    NSObject<OS_dispatch_queue> *m_workerThread;
    NSMutableSet *m_setQRCodeEventID;
}

@property(retain, nonatomic) NSMutableSet *m_setQRCodeEventID; // @synthesize m_setQRCodeEventID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_workerThread; // @synthesize m_workerThread;
@property(nonatomic) __weak id <GetQRCodeLoginDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)getCodeLoginSuccess_OnMainThread:(id)arg1;
- (void)getCodeLoginFail_OnMainThread;
- (void)handleResponse:(id)arg1 withRequest:(id)arg2 eventID:(unsigned long)arg3;
- (void)removeRequestEventID:(unsigned long)arg1;
- (BOOL)isLatestRequestEventID:(unsigned long)arg1;
- (void)addRequestEventID:(unsigned long)arg1;
- (void)internalStopRequest;
- (void)StopRequest;
- (BOOL)SendRequest;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

