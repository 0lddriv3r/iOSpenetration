//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CXProviderDelegate.h"
#import "MMKernelExt.h"
#import "MMService.h"

@class CXCallController, CXProvider, CXProviderConfiguration, MonoServiceMsg, NSMutableDictionary, NSString, NSUUID;

@interface VoipCXMgr : MMService <MMKernelExt, MMService, CXProviderDelegate>
{
    BOOL m_bHaveNotActionedEndCallRequest;
    BOOL m_bHaveAnsweredCall;
    BOOL m_bHaveAProcessingCall;
    BOOL m_bOutgoingCallHaveBeenAccepted;
    CXProvider *provider;
    MonoServiceMsg *m_monoMsg;
    NSUUID *m_uuid;
    NSString *m_user;
    NSMutableDictionary *m_callFromDic;
    NSMutableDictionary *m_callToDic;
    int m_callType;
    CXProviderConfiguration *_configuration;
    CXCallController *_cxController;
}

+ (BOOL)isCallkitAvailable;
+ (BOOL)isDeviceCallkitAvailable;
+ (BOOL)appIsInActiveState;
@property(retain, nonatomic) CXCallController *cxController; // @synthesize cxController=_cxController;
@property(retain, nonatomic) CXProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) int m_callType; // @synthesize m_callType;
@property(retain, nonatomic) NSMutableDictionary *m_callToDic; // @synthesize m_callToDic;
@property(retain, nonatomic) NSMutableDictionary *m_callFromDic; // @synthesize m_callFromDic;
@property(retain, nonatomic) NSString *m_user; // @synthesize m_user;
@property(retain, nonatomic) NSUUID *m_uuid; // @synthesize m_uuid;
@property(retain, nonatomic) MonoServiceMsg *m_monoMsg; // @synthesize m_monoMsg;
@property(retain, nonatomic) CXProvider *provider; // @synthesize provider;
- (void).cxx_destruct;
- (void)onInitOK;
- (void)onAppBecomeActive;
- (void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2;
- (void)provider:(id)arg1 didActivateAudioSession:(id)arg2;
- (void)provider:(id)arg1 timedOutPerformingAction:(id)arg2;
- (void)provider:(id)arg1 performPlayDTMFCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetGroupCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;
- (void)provider:(id)arg1 performStartCallAction:(id)arg2;
- (void)providerDidReset:(id)arg1;
- (void)reportCallUpdated:(id)arg1;
- (void)reportOutgoingCallOfConnectedTo:(id)arg1;
- (void)reportOutgoingCallOfStartConnectingTo:(id)arg1;
- (void)reportCallEndedAtDate:(id)arg1 reason:(int)arg2;
- (void)reportIncomingCallFromUser:(id)arg1 ofType:(int)arg2 withMsg:(id)arg3;
- (void)requestEndCallTrans;
- (void)requestStartCallTransToUser:(id)arg1;
- (BOOL)haveAProcessingCall;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

