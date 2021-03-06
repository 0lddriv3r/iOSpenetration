//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AMRAudioRecorderDelegate.h"
#import "MMService.h"
#import "SPXAudioRecorderDelegate.h"
#import "SilkAudioRecorderDelegate.h"
#import "UploadVoiceDelegate.h"

@class AMRAudioRecorder, CMainControll, MMNewUploadVoiceMgr, NSString, SPXAudioRecorder, SilkAudioRecorder;

@interface AudioSender : MMService <AMRAudioRecorderDelegate, SPXAudioRecorderDelegate, SilkAudioRecorderDelegate, UploadVoiceDelegate, MMService>
{
    SPXAudioRecorder *m_spxrecorder;
    SilkAudioRecorder *m_silkRecorder;
    CMainControll *m_mainController;
    MMNewUploadVoiceMgr *m_upload;
    AMRAudioRecorder *m_amrrecorder;
}

- (void).cxx_destruct;
- (void)ResendVoiceMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)IsNeedRecordPrepareStatus;
- (BOOL)isRecording;
- (BOOL)StopRecord;
- (void)stop;
- (BOOL)CancelRecord;
- (BOOL)RemoveTmpAudio:(unsigned long)arg1;
- (id)GetTmpAudio:(unsigned long)arg1;
- (unsigned long)StartRecord;
- (BOOL)CanStartRecord;
- (unsigned long)startRecordForFormat:(unsigned long)arg1;
- (BOOL)canStartRecordForFormat:(unsigned long)arg1;
- (BOOL)StartRecordFrom:(id)arg1 ToUser:(id)arg2 UserInfo:(id)arg3;
- (BOOL)CanStartRecordFrom:(id)arg1 ToUser:(id)arg2;
- (BOOL)isNeedRecordBySilkForQQOfflineMsg;
- (BOOL)isNeedRecordBySilkForDyncfg;
- (BOOL)isNeedRecordBySilkByUsername:(id)arg1;
- (BOOL)isNeedSpeexAudioByUsrName:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;
- (BOOL)initFacade:(id)arg1;
- (id)init;
- (BOOL)prepareSend:(id)arg1;
- (void)MainThreadAddMsg:(id)arg1;
- (BOOL)deleteMessageFromDB:(id)arg1;
- (BOOL)updateMessageStatus:(id)arg1;
- (BOOL)updateMessageToDB:(id)arg1;
- (BOOL)addMessageToDB:(id)arg1;
- (id)getTmpAudioFileName:(unsigned long)arg1;
- (id)getAudioFileName:(id)arg1 LocalID:(unsigned long)arg2;
- (id)getChatName:(id)arg1;
- (void)OnAMRPart:(id)arg1 Offset:(unsigned long)arg2 Len:(unsigned long)arg3 EndFlag:(unsigned long)arg4 ForceDelete:(BOOL)arg5;
- (void)OnAMREndRecording:(id)arg1;
- (void)OnAMRBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnAMRLevelMeter:(id)arg1 Peak:(float)arg2;
- (BOOL)OnPrepareSendAMR:(id)arg1;
- (BOOL)CheckIfButtonPressing:(id)arg1;
- (void)OnSPXPart:(id)arg1 Offset:(unsigned long)arg2 Len:(unsigned long)arg3 EndFlag:(unsigned long)arg4 ForceDelete:(BOOL)arg5;
- (void)OnSPXEndRecording:(id)arg1;
- (void)OnSPXBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnSPXLevelMeter:(id)arg1 Peak:(float)arg2;
- (BOOL)OnPrepareSendSPX:(id)arg1;
- (void)onSilkPart:(id)arg1 Offset:(unsigned long)arg2 Len:(unsigned long)arg3 EndFlag:(unsigned long)arg4 ForceDelete:(BOOL)arg5 Duration:(unsigned long)arg6;
- (void)onSilkEndRecording:(id)arg1;
- (void)onSilkBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)onSilkLevelMeter:(id)arg1 Peak:(float)arg2;
- (BOOL)onPrepareSendSilk:(id)arg1;
- (BOOL)silkCheckIfButtonPressing:(id)arg1;
- (void)OnPartSent:(id)arg1 ErrNo:(unsigned long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

