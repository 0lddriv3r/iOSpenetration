//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WABaseRecorder.h"

#import "WARecordEncodeDelegate.h"

@class NSMutableData, NSString;

@interface WAAACRecorder : WABaseRecorder <WARecordEncodeDelegate>
{
    struct OpaqueAudioConverter *_encodeCoverter;
    struct OpaqueAudioFileID *_outputFileID;
    unsigned long _recordPacket;
    unsigned long _pcmBufferPacket;
    NSMutableData *_pcmDataBuffer;
    struct AudioStreamBasicDescription _aacFormatDes;
}

@property(retain, nonatomic) NSMutableData *pcmDataBuffer; // @synthesize pcmDataBuffer=_pcmDataBuffer;
@property(nonatomic) unsigned long pcmBufferPacket; // @synthesize pcmBufferPacket=_pcmBufferPacket;
@property(nonatomic) unsigned long recordPacket; // @synthesize recordPacket=_recordPacket;
@property(nonatomic) struct OpaqueAudioFileID *outputFileID; // @synthesize outputFileID=_outputFileID;
@property(nonatomic) struct AudioStreamBasicDescription aacFormatDes; // @synthesize aacFormatDes=_aacFormatDes;
@property(nonatomic) struct OpaqueAudioConverter *encodeCoverter; // @synthesize encodeCoverter=_encodeCoverter;
- (void).cxx_destruct;
- (void)onNotifyStateChangeOnMainThread:(unsigned int)arg1 error:(id)arg2;
- (BOOL)checkErrorAndStopIfError:(long)arg1 withErrorString:(id)arg2;
- (BOOL)checkErrorAndLogIfError:(long)arg1 withErrorString:(id)arg2;
- (BOOL)copyEncoderCookieToFile;
- (BOOL)configureAACConverter;
- (void)encodePCMBufferToOutputFormat:(struct WARecorderData *)arg1 audioQueueRef:(struct OpaqueAudioQueue *)arg2 audioQueueBufferRef:(struct AudioQueueBuffer *)arg3 audioTimeStamp:(const struct AudioTimeStamp *)arg4 numPackets:(unsigned long)arg5 packetDescription:(const struct AudioStreamPacketDescription *)arg6;
- (void)clearRecorderState;
- (void)prepareToRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

