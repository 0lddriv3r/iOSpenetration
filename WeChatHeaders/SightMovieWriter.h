//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMovieCompressorDelegate.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, MMovieCompressor, NSObject<OS_dispatch_queue>, NSString;

@interface SightMovieWriter : NSObject <MMovieCompressorDelegate>
{
    NSObject<OS_dispatch_queue> *m_movieWritingQueue;
    BOOL _forceMPEG4;
    BOOL _m_isRecording;
    BOOL _m_isLowPerformance;
    BOOL _videoEncodingIsFinished;
    BOOL _m_disableWritingToFile;
    BOOL _m_compressAudio;
    id <SightMovieWriterDelegate> _delegate;
    float _maxMovieDuration;
    int _videoOrientation;
    NSString *_m_videoPath;
    NSString *_m_audioPath;
    NSString *_m_moviePath;
    AVAssetWriter *_m_writer;
    AVAssetWriterInput *_m_videoInput;
    AVAssetWriterInputPixelBufferAdaptor *_m_PixelBufferInput;
    MMovieCompressor *_m_audioCompressor;
    float _m_audioBitrate;
    int _m_videoOrientation;
    unsigned long long _m_videoTimeStamp;
    unsigned long long _m_videoFrame;
    struct CGSize _m_videoSize;
    unsigned long long _m_audioTimeStamp;
    CDStruct_1b6d18a9 _m_startTime;
    CDStruct_1b6d18a9 _m_initializeTime;
    CDStruct_1b6d18a9 _m_previousVideoTime;
    struct CGAffineTransform _m_preferredTransform;
}

@property(nonatomic) BOOL m_compressAudio; // @synthesize m_compressAudio=_m_compressAudio;
@property(nonatomic) BOOL m_disableWritingToFile; // @synthesize m_disableWritingToFile=_m_disableWritingToFile;
@property(nonatomic) unsigned long long m_audioTimeStamp; // @synthesize m_audioTimeStamp=_m_audioTimeStamp;
@property(nonatomic) struct CGAffineTransform m_preferredTransform; // @synthesize m_preferredTransform=_m_preferredTransform;
@property(nonatomic) int m_videoOrientation; // @synthesize m_videoOrientation=_m_videoOrientation;
@property(nonatomic) struct CGSize m_videoSize; // @synthesize m_videoSize=_m_videoSize;
@property(nonatomic) float m_audioBitrate; // @synthesize m_audioBitrate=_m_audioBitrate;
@property(retain, nonatomic) MMovieCompressor *m_audioCompressor; // @synthesize m_audioCompressor=_m_audioCompressor;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *m_PixelBufferInput; // @synthesize m_PixelBufferInput=_m_PixelBufferInput;
@property(nonatomic) unsigned long long m_videoFrame; // @synthesize m_videoFrame=_m_videoFrame;
@property(nonatomic) unsigned long long m_videoTimeStamp; // @synthesize m_videoTimeStamp=_m_videoTimeStamp;
@property(nonatomic) CDStruct_1b6d18a9 m_previousVideoTime; // @synthesize m_previousVideoTime=_m_previousVideoTime;
@property(retain, nonatomic) AVAssetWriterInput *m_videoInput; // @synthesize m_videoInput=_m_videoInput;
@property(nonatomic) BOOL videoEncodingIsFinished; // @synthesize videoEncodingIsFinished=_videoEncodingIsFinished;
@property(nonatomic) BOOL m_isLowPerformance; // @synthesize m_isLowPerformance=_m_isLowPerformance;
@property(nonatomic) CDStruct_1b6d18a9 m_initializeTime; // @synthesize m_initializeTime=_m_initializeTime;
@property(nonatomic) CDStruct_1b6d18a9 m_startTime; // @synthesize m_startTime=_m_startTime;
@property(nonatomic) BOOL m_isRecording; // @synthesize m_isRecording=_m_isRecording;
@property(retain, nonatomic) AVAssetWriter *m_writer; // @synthesize m_writer=_m_writer;
@property(retain, nonatomic) NSString *m_moviePath; // @synthesize m_moviePath=_m_moviePath;
@property(retain, nonatomic) NSString *m_audioPath; // @synthesize m_audioPath=_m_audioPath;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath=_m_videoPath;
@property(nonatomic) BOOL forceMPEG4; // @synthesize forceMPEG4=_forceMPEG4;
@property(nonatomic) int videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) float maxMovieDuration; // @synthesize maxMovieDuration=_maxMovieDuration;
@property(nonatomic) __weak id <SightMovieWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writtingQueue; // @synthesize writtingQueue=m_movieWritingQueue;
- (void).cxx_destruct;
- (void)notifyOutput:(id)arg1;
- (void)compressMovieWithExport:(id)arg1;
- (void)tryMergeOutputVideo;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFailed:(unsigned long)arg2;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned long)arg4;
- (void)compressAudio;
- (id)makeNewPath:(id)arg1 withSubfix:(id)arg2;
- (void)cancelAmr;
- (void)stopAmr;
- (void)startAmr;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)cancelWriting;
- (void)finishWriting;
- (void)startWriting;
- (void)realWriting;
- (void)prepareWriting;
- (BOOL)isWriting;
@property(readonly, nonatomic) int outputType;
- (id)getOutput;
- (void)setOutput:(id)arg1;
- (void)dealloc;
- (void)initWriterOutputWithCodecSettings:(id)arg1;
- (id)initWithFilePath:(id)arg1 videoOrientation:(int)arg2 videoSize:(struct CGSize)arg3 compressAudio:(BOOL)arg4 audioBitrate:(float)arg5 codecSettings:(id)arg6;
- (id)initWithFilePath:(id)arg1 videoOrientation:(int)arg2 videoSize:(struct CGSize)arg3 compressAudio:(BOOL)arg4 audioBitrate:(float)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
