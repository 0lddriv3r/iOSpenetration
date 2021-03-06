//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseControlMgr.h"

#import "JSEventExt.h"
#import "WCHBOpenApiExt.h"

@class NSString;

@interface WCRedEnvelopesControlMgr : WCBaseControlMgr <JSEventExt, WCHBOpenApiExt>
{
    BOOL m_bRceivingGreeting;
}

@property(nonatomic) BOOL m_bRceivingGreeting; // @synthesize m_bRceivingGreeting;
- (unsigned long)startOpenRedEnvelopesDetail:(id)arg1 sendId:(id)arg2;
- (BOOL)UseBalance;
- (unsigned long)startReceiveGreetingRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (void)OnWCHBOpenApi:(id)arg1 withAppID:(id)arg2 andBundleID:(id)arg3;
- (void)jsGetRecevieBizHongBaoRequest:(id)arg1;
- (unsigned long)startReceiveRedEnvelopesLogicWithJS:(id)arg1 Data:(id)arg2 Scene:(int)arg3 Event:(id)arg4;
- (unsigned long)startSystemMessageControlLogic:(id)arg1 NativeUrl:(id)arg2;
- (unsigned long)startBrandServiceControlLogic:(id)arg1 NativeUrl:(id)arg2;
- (unsigned long)startReceiveRedEnvEnterpriseLogicWithOpenApiInner:(id)arg1 AppId:(id)arg2 BundleId:(id)arg3 HBParam:(id)arg4;
- (unsigned long)startReceiveRedEnvelopesLogicByC2C:(id)arg1 Data:(id)arg2;
- (unsigned long)startSendGeetingRedEnvelopesLogicWithShake:(id)arg1 Data:(id)arg2;
- (unsigned long)startSendGeetingRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (unsigned long)startSendNotReceivedListEnvelopesReceivedListLogic:(id)arg1 Data:(id)arg2;
- (unsigned long)startSendEnvelopesReceivedListLogic:(id)arg1 Data:(id)arg2;
- (unsigned long)startReceivedRedEnvelopesListLogic:(id)arg1 Data:(id)arg2;
- (unsigned long)startReceiveRedEnvelopesLogic:(id)arg1 Data:(id)arg2 Scene:(unsigned long)arg3;
- (unsigned long)startReceiveRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (unsigned long)startSendRedEnvelopesLogic:(id)arg1 Data:(id)arg2 WithSelectContact:(id)arg3 Scene:(unsigned long)arg4 RedEnvelopesType:(int)arg5;
- (unsigned long)startSendRedEnvelopesLogic:(id)arg1 WithSelectContact:(id)arg2 Scene:(unsigned long)arg3 RedEnvelopesType:(int)arg4;
- (unsigned long)startSendRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

