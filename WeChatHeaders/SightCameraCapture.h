//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "MMQRCodeScannerDelegate.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, MMQRCodeScanner, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SightCameraCapture : MMObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, MMQRCodeScannerDelegate>
{
    BOOL m_isActive;
    BOOL m_isAudioActive;
    BOOL m_isFileOutputActive;
    AVCaptureSession *m_captureSession;
    AVCaptureDevice *m_inputCamera;
    NSString *m_videoPreset;
    AVCaptureDeviceInput *m_videoInput;
    AVCaptureDeviceInput *m_audioInput;
    AVCaptureStillImageOutput *m_imageOutput;
    AVCaptureVideoDataOutput *m_videoOutput;
    AVCaptureAudioDataOutput *m_audioOutput;
    AVCaptureMovieFileOutput *m_fileOutput;
    AVCaptureVideoPreviewLayer *m_previewLayer;
    struct CGSize m_targetVideoSize;
    float m_targetBitRate;
    int m_captureFrameRate;
    NSMutableArray *m_movieWriters;
    NSMutableArray *m_moviePreviewers;
    MMQRCodeScanner *m_QRCodeScanner;
    unsigned long m_scannerSkip;
    NSObject<OS_dispatch_queue> *m_callbackQueue;
    BOOL m_bIsUsingHighExposureISO;
    BOOL m_needCapturePicture;
    CDUnknownBlockType m_captureBlock;
    BOOL _activeQRScan;
    NSString *_preset;
}

@property(nonatomic) NSString *preset; // @synthesize preset=_preset;
@property(nonatomic) BOOL activeQRScan; // @synthesize activeQRScan=_activeQRScan;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=m_previewLayer;
@property(readonly, nonatomic) BOOL isAudioActive; // @synthesize isAudioActive=m_isAudioActive;
@property(nonatomic) BOOL isActive; // @synthesize isActive=m_isActive;
- (void).cxx_destruct;
- (void)resetExposureISO;
- (void)turnOnExposureHighISO;
- (BOOL)isUsingHighExposureISO;
- (void)setTorchMode:(int)arg1;
- (int)torchMode;
- (BOOL)supportTorchMode;
- (void)setFlashlightMode:(int)arg1;
- (int)flashMode;
- (BOOL)supportFlashlightMode;
- (void)initQRCodeScanner;
- (void)onQRCodeScanSuccess:(id)arg1 atPoint:(vector_c080079c)arg2 originSize:(struct CGSize)arg3;
- (void)onNoQRCode;
- (BOOL)switchCameraToPosition:(int)arg1;
- (BOOL)switchCamera;
- (int)cameraPosition;
- (void)setZoomFactor:(float)arg1;
- (float)zoomFactor;
- (float)maxZoomFactor;
- (float)minZoomFactor;
- (BOOL)isSupportZoomWithFactor:(float)arg1;
- (void)zoom;
- (BOOL)canZoom;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)stopCameraCaptureAudioDevice;
- (BOOL)stopCameraCapture;
- (BOOL)startCameraCaptureAudioDevice;
- (void)startCameraCapture;
- (void)onCameraFailed;
- (void)startRunning;
- (BOOL)isRunning;
- (void)capturePreviewImageWithBlock:(CDUnknownBlockType)arg1;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeMoviePreviewer:(id)arg1;
- (void)setMoviePreviwerOutputSizeAndSession:(id)arg1;
- (void)addMoviePreviewer:(id)arg1;
- (void)setPreviewReady;
- (void)removeFileWriter:(id)arg1;
- (void)removeMovieWriter:(id)arg1;
- (void)addMovieWriter:(id)arg1;
- (BOOL)hasMultipleCameras;
- (id)cameraWithPosition:(int)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)switchToFileOutputMode;
- (BOOL)isFileOutputMode;
- (void)setSessionPreset:(id)arg1 forCameraPosition:(int)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
- (void)dealloc;
- (void)setCameraFrameRate;
- (BOOL)initCaptureSession:(id)arg1;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(int)arg2 frameRate:(int)arg3;
- (id)initWithSessionPreset:(id)arg1 frameRate:(int)arg2;
- (id)initWithPreset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
