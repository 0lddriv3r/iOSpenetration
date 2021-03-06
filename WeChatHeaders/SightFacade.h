//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "MMovieCompressorDelegate.h"
#import "SightCaptureDelegate.h"
#import "SightMomentDraftTipsViewControllerDelegate.h"

@class CMMotionManager, MMObject<SightCaptureLogic>, MMWindowController, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SightDraftMgr, UIImage;

@interface SightFacade : MMService <SightMomentDraftTipsViewControllerDelegate, MMService, IMsgExt, SightCaptureDelegate, MMovieCompressorDelegate>
{
    BOOL m_preventCamera;
    MMWindowController *m_sightDraftTipsWindow;
    MMWindowController *m_sightTipsWindow;
    MMWindowController *m_sightWindowController;
    MMObject<SightCaptureLogic> *m_logic;
    SightDraftMgr *m_draftMgr;
    unsigned long m_compressorID;
    NSMutableDictionary *m_compressorDic;
    NSMutableArray *m_invalidateCompressor;
    unsigned long m_captureCounter;
    unsigned long m_continousCaptureID;
    CDStruct_1b6d18a9 m_lastCaptureTime;
    UIImage *m_blurImage;
    BOOL m_lightDetector;
    CMMotionManager *m_cmManager;
    BOOL _needShakeDetector;
    float _jsapiMaxVideoDuration;
    NSDictionary *_sightLimitationDictionary;
    NSArray *_allowableSightFPS;
    NSArray *_allowableSightFrameSize;
    float _allowableSightMaxDuration;
}

@property(nonatomic) float allowableSightMaxDuration; // @synthesize allowableSightMaxDuration=_allowableSightMaxDuration;
@property(retain, nonatomic) NSArray *allowableSightFrameSize; // @synthesize allowableSightFrameSize=_allowableSightFrameSize;
@property(retain, nonatomic) NSArray *allowableSightFPS; // @synthesize allowableSightFPS=_allowableSightFPS;
@property(retain, nonatomic) NSDictionary *sightLimitationDictionary; // @synthesize sightLimitationDictionary=_sightLimitationDictionary;
@property(nonatomic) float jsapiMaxVideoDuration; // @synthesize jsapiMaxVideoDuration=_jsapiMaxVideoDuration;
@property(nonatomic) BOOL needShakeDetector; // @synthesize needShakeDetector=_needShakeDetector;
@property(retain, nonatomic) UIImage *blurImage; // @synthesize blurImage=m_blurImage;
@property(readonly, nonatomic) BOOL preventCamera; // @synthesize preventCamera=m_preventCamera;
- (void).cxx_destruct;
- (void)setShouldSaveMediaToLibrary:(BOOL)arg1 withMediaType:(unsigned int)arg2;
- (BOOL)shouldSaveMediaToLibraryWithMediaType:(unsigned int)arg1;
- (void)muteVideoWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)calcVideoMd5WithFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exportVideoWithCompressByAsset:(id)arg1 assetURL:(id)arg2 scene:(unsigned int)arg3 isSlowMotion:(BOOL)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)exportVideoWithAsset:(id)arg1 scene:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)isVideoShouldExportWithoutCompressByAsset:(id)arg1 scene:(unsigned int)arg2;
- (void)resetExposureISO;
- (void)turnOnExposureHighISO;
- (BOOL)isUsingHighExposureISO;
- (void)setTorchMode:(int)arg1;
- (int)torchMode;
- (BOOL)supportTorchMode;
- (void)setFlashlightMode:(int)arg1;
- (int)flashMode;
- (BOOL)supportFlashlightMode;
- (struct CGSize)videoSizeWithAsset:(id)arg1;
- (BOOL)canSendVideoWithoutCompressionWithAsset:(id)arg1;
- (unsigned int)checkIfVideoAllowedToBeSentWithVideoAsset:(id)arg1 videoPath:(id)arg2 pickerScene:(unsigned int)arg3 isSlowmotion:(BOOL)arg4;
- (float)currentMaxSightDurationForKey:(id)arg1;
- (float)sightCaptureMaxDurationWithScene:(unsigned int)arg1;
- (BOOL)isTurnOnLegalityCheckForReceivedSight;
- (unsigned int)legalityTypeOfSight:(id)arg1;
- (id)sightAudioOutputSettings;
- (id)sightVideoOutputSettingsWithVideoSize:(struct CGSize)arg1 bitRate:(float)arg2;
- (void)statDraftUse:(unsigned long)arg1 operation:(unsigned long)arg2;
- (void)statDraftSave:(unsigned long)arg1;
- (void)statPlay:(unsigned long)arg1;
- (void)statOper:(unsigned long)arg1 operation:(unsigned long)arg2 targetCount:(unsigned long)arg3;
- (void)statSent:(unsigned long)arg1 target:(unsigned long)arg2;
- (id)getDraftList;
- (void)removeDraft:(id)arg1;
- (void)addDraft:(id)arg1;
- (void)addSightDraft:(id)arg1;
- (struct CGSize)sightViewSizeWithImgSize:(struct CGSize)arg1;
- (struct CGSize)thumbImageSizeWithMediaItem:(id)arg1;
- (struct CGRect)jumpToMomentTimelineTopAtBackgroundWithMediaItem:(id)arg1;
- (void)resumeMusicPlay;
- (void)moveOutSightWindowWithMomentDraftTips:(BOOL)arg1;
- (void)moveOutSightWindow;
- (void)fadeOutSightWindow;
- (void)closeSightWindowWithMomentDraftTips;
- (void)closeSightWindow;
- (id)getSubImage:(struct CGRect)arg1 inImage:(id)arg2;
- (void)showSightWindowForMomentWithMask:(id)arg1 byViewController:(id)arg2 scene:(int)arg3;
- (void)onSightDraftTipsTouchBegin;
- (void)hideDraftTipsWindow;
- (void)showSightDraftTipsWindow;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned long)arg4;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFailed:(unsigned long)arg2;
- (void)cancelCompress:(unsigned long)arg1;
- (unsigned long)compressSightVideo:(id)arg1 withVideoSize:(struct CGSize)arg2 andBitrate:(int)arg3;
- (void)turnOffLightBoost;
- (void)turnOnLightBoost;
- (BOOL)isLightBoostOn;
- (void)onRecorderFinished:(unsigned long)arg1 moviePath:(id)arg2 withThumb:(id)arg3;
- (void)onRecorderFailed:(unsigned long)arg1;
- (void)onCameraStop;
- (void)onCameraAudioReady;
- (void)onCameraVideoReady;
- (void)onCameraPreviewReady:(id)arg1;
- (void)onCameraPreviewGap:(id)arg1;
- (void)stopShakeDetector;
- (void)startShakeDector;
- (void)realStartRecording;
- (unsigned long)prepareRecording:(struct CGSize)arg1 bitrate:(float)arg2 atCaptureScene:(unsigned int)arg3;
- (void)cancelRecording:(unsigned long)arg1;
- (void)stopRecording:(unsigned long)arg1;
- (unsigned long)startRecording:(struct CGSize)arg1 bitrate:(float)arg2 atCaptureScene:(unsigned int)arg3 orientation:(int)arg4;
- (void)stopCameraCapture;
- (void)savePreviewBlurImage:(id)arg1;
- (void)detactImageLight:(id)arg1;
- (void)processScreenCapture:(id)arg1;
- (void)savePreviewCapture:(unsigned long)arg1;
- (void)stopSnapShotTimer;
- (void)startSnapShotTimer;
- (void)captureImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (void)releasePreviewView:(id)arg1;
- (id)genPreviewView:(struct CGRect)arg1;
- (BOOL)switchCamera;
- (int)cameraPosition;
- (BOOL)isSupportSwitchCamera;
- (void)setZoomFactor:(float)arg1;
- (float)zoomFactor;
- (BOOL)isSupportZoomWithFactor:(float)arg1;
- (float)maxZoomFactor;
- (void)zoomInCamera;
- (void)zoomCamera;
- (BOOL)isSupportZoom;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)startQRCodeScanner;
- (BOOL)pauseCamera;
- (void)startCameraAudio;
- (void)activateAudioSession;
- (void)startCamera:(BOOL)arg1 withAudio:(BOOL)arg2;
- (void)startCamera:(BOOL)arg1;
- (void)startCamera;
- (BOOL)isCameraOn;
- (void)onPictureRetake;
- (void)onBecomeActive;
- (void)onResignActive;
- (float)getCameraHeight;
- (BOOL)isAuthStatusOK;
- (BOOL)checkRequestAuthAccess;
- (BOOL)needCheckRequestAuthAccess;
- (BOOL)isDeviceSupportForSightCamera;
- (BOOL)isSupportSight;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

