//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "UIAlertViewDelegate.h"
#import "VoicePrintGetResourceDelegate.h"

@class BaseVoicePrintViewController, NSString, VPGetResourceCgi, VoicePrintMgr;

@interface VoicePrintLogicControllerFactory : MMObject <VoicePrintGetResourceDelegate, UIAlertViewDelegate>
{
    unsigned long _currentScene;
    unsigned long _voiceID;
    unsigned long _resID;
    BOOL _isCompeleteRecord;
    BOOL _isFreeTalkBtnTooFast;
    BOOL _isRecordStartOnTheWay;
    SEL _recordSelector;
    VoicePrintMgr *m_VoicePrintMgr;
    BaseVoicePrintViewController *m_voicePrintVC;
    VPGetResourceCgi *m_getResCgiHandle;
    unsigned long long _start_time;
    unsigned long long _end_time;
    BOOL _bIsNoLoginStatus;
    BOOL _bIsVoicePrintLogin;
    BOOL _bIsGetResWhenViewDidLoad;
    BOOL _bIsCreateSuccess;
    BOOL _bIsVerifySuccess;
    BOOL _bIsRecvFromServer;
    NSString *_nsRandomAuthKey;
    NSString *_nsRegBioTicket;
    NSString *m_nsVerifyTicket;
    id <VoicePrintLogicControllerDelegate> _m_delegate;
    NSString *_m_nsVoiceKey;
    NSString *_tipWordingWhenSuccess;
}

+ (id)factoryMethod;
@property(retain, nonatomic) NSString *tipWordingWhenSuccess; // @synthesize tipWordingWhenSuccess=_tipWordingWhenSuccess;
@property(retain, nonatomic) NSString *m_nsVoiceKey; // @synthesize m_nsVoiceKey=_m_nsVoiceKey;
@property(nonatomic) __weak id <VoicePrintLogicControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(readonly, nonatomic) NSString *m_nsRegBioTicket; // @synthesize m_nsRegBioTicket=_nsRegBioTicket;
@property(readonly, nonatomic) NSString *m_nsRandomAuthKey; // @synthesize m_nsRandomAuthKey=_nsRandomAuthKey;
@property(nonatomic) BOOL m_bIsGetResWhenViewDidLoad; // @synthesize m_bIsGetResWhenViewDidLoad=_bIsGetResWhenViewDidLoad;
@property(nonatomic) BOOL m_bIsVoicePrintLogin; // @synthesize m_bIsVoicePrintLogin=_bIsVoicePrintLogin;
@property(nonatomic) BOOL m_bIsNoLoginStatus; // @synthesize m_bIsNoLoginStatus=_bIsNoLoginStatus;
@property(readonly, nonatomic) BOOL m_bIsVerifySuccess; // @synthesize m_bIsVerifySuccess=_bIsVerifySuccess;
@property(readonly, nonatomic) BOOL m_bIsCreateSuccess; // @synthesize m_bIsCreateSuccess=_bIsCreateSuccess;
@property(readonly, nonatomic) BaseVoicePrintViewController *m_voicePrintVC; // @synthesize m_voicePrintVC;
@property(retain, nonatomic) NSString *m_nsVerifyTicket; // @synthesize m_nsVerifyTicket;
@property(nonatomic) unsigned long resID; // @synthesize resID=_resID;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)OnGetResError:(int)arg1 withScene:(unsigned long)arg2;
- (void)OnGetRemoteResource:(id)arg1 withScene:(unsigned long)arg2;
- (void)getResourceSuccess;
- (BOOL)updateLyrics:(id)arg1;
- (BOOL)isClickTalkButtonTooFast;
- (BOOL)isRecordTimeOver1s;
- (void)SetEndTime;
- (void)SetStartTime;
- (void)callStopUpload;
- (void)callStopRecord;
- (void)callVoicePrintMgrStop;
- (void)callVoicePrintMgrStart;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

