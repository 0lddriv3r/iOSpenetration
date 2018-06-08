//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EditImageInitialViewDelegate.h"
#import "EditVideoLogicItemDelegate.h"
#import "MMImageCropperDelegate.h"
#import "MonoServiceLogicExt.h"
#import "SightFiltersExt.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class EditImageAttr, EditImageIntialView, EditVideoAttr, EditVideoLogicItem, MMCircularProgressView, MMImageCropperViewController, MMLoadingView, MMSightRecordView, NSMutableArray, NSString, ShortVideoToolbarPreviewView, SightCameraTopToolView, UIButton, UIImage, UIImageView, UILabel, UIView, UIView<SightPreviewView>;

@interface ShortVideoToolbar : MMUIView <UIAlertViewDelegate, MonoServiceLogicExt, EditVideoLogicItemDelegate, SightFiltersExt, MMImageCropperDelegate, UITextFieldDelegate, EditImageInitialViewDelegate>
{
    BOOL m_isActive;
    float m_topPositon;
    float m_dragDeltaFix;
    int m_cameraState;
    BOOL m_dragZoomTrigger;
    BOOL m_inCombolMode;
    NSMutableArray *m_recordIDAry;
    UIButton *m_captureBtn;
    MMSightRecordView *m_recordButtonView;
    UILabel *m_tipsLabel;
    UIImageView *m_tipsLabelBG;
    UILabel *m_zoomTipsLabel;
    unsigned int m_cameraMode;
    UIView *m_topBar;
    UIView *m_topBarIcon;
    UIView *m_topBarIconActive;
    double startTime;
    BOOL m_requestAuthAccess;
    UIView *m_motionTipsView;
    BOOL m_motionDetected;
    UIButton *m_toolbarCancelButton;
    BOOL m_lightBoostStat;
    BOOL m_lightBoostOpenStat;
    unsigned long m_validReshowLightBoostCmd;
    unsigned long m_lightDetectorCounter;
    UIButton *m_lightBoostButton;
    UILabel *m_lightBoostHintView;
    int m_currentOrientation;
    BOOL m_hasRealStartedForPreStartRecording;
    float m_zoomScaleAtLastPanGesture;
    BOOL m_isPinching;
    BOOL _draggable;
    BOOL _isShowingPreview;
    BOOL _m_writerTimeout;
    BOOL _m_cameraOpened;
    BOOL _m_shouldContinueRecording;
    BOOL _m_isTakingPicture;
    unsigned int _toolItems;
    id <ShortVideoBarDelegate> _delegate;
    int _recordState;
    int _btnState;
    unsigned int _camSwitchTiming;
    unsigned long _m_currWriterID;
    UIView<SightPreviewView> *_m_cameraPreviewView;
    UIView *_m_tipsView;
    UIView *_m_cancelTips;
    MMCircularProgressView *_m_circleProgress;
    unsigned long _m_tipsCounter;
    UIView *_m_maskWindow;
    ShortVideoToolbarPreviewView *_m_resultPreviewView;
    UIButton *_m_hideBarBtn;
    float _m_lastZoomScale;
    SightCameraTopToolView *_m_sightCameraTopToolView;
    UIView *_m_toolBar;
    UIImageView *_m_senterAnimView;
    UIView *_m_contentView;
    UIImage *_m_originalImage;
    UIImage *_m_waitingSendImage;
    EditImageAttr *_m_editImageAttr;
    EditImageIntialView *_m_editImageInitialView;
    MMLoadingView *_m_loadingView;
    unsigned int _m_scene;
    NSString *_m_statChatUserName;
    EditVideoLogicItem *_m_editVideoLogicItem;
    NSString *_m_videoPath;
    NSString *_m_waitingSendVideoPath;
    UIImage *_m_thumbImage;
    MMImageCropperViewController *_m_cropperVC;
    EditVideoAttr *_editVideoAttr;
}

@property(retain, nonatomic) EditVideoAttr *editVideoAttr; // @synthesize editVideoAttr=_editVideoAttr;
@property(retain, nonatomic) MMImageCropperViewController *m_cropperVC; // @synthesize m_cropperVC=_m_cropperVC;
@property(retain, nonatomic) UIImage *m_thumbImage; // @synthesize m_thumbImage=_m_thumbImage;
@property(retain, nonatomic) NSString *m_waitingSendVideoPath; // @synthesize m_waitingSendVideoPath=_m_waitingSendVideoPath;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath=_m_videoPath;
@property(retain, nonatomic) EditVideoLogicItem *m_editVideoLogicItem; // @synthesize m_editVideoLogicItem=_m_editVideoLogicItem;
@property(retain, nonatomic) NSString *m_statChatUserName; // @synthesize m_statChatUserName=_m_statChatUserName;
@property(nonatomic) unsigned int m_scene; // @synthesize m_scene=_m_scene;
@property(retain, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView=_m_loadingView;
@property(retain, nonatomic) EditImageIntialView *m_editImageInitialView; // @synthesize m_editImageInitialView=_m_editImageInitialView;
@property(retain, nonatomic) EditImageAttr *m_editImageAttr; // @synthesize m_editImageAttr=_m_editImageAttr;
@property(retain, nonatomic) UIImage *m_waitingSendImage; // @synthesize m_waitingSendImage=_m_waitingSendImage;
@property(retain, nonatomic) UIImage *m_originalImage; // @synthesize m_originalImage=_m_originalImage;
@property(nonatomic) BOOL m_isTakingPicture; // @synthesize m_isTakingPicture=_m_isTakingPicture;
@property(retain, nonatomic) UIView *m_contentView; // @synthesize m_contentView=_m_contentView;
@property(retain, nonatomic) UIImageView *m_senterAnimView; // @synthesize m_senterAnimView=_m_senterAnimView;
@property(nonatomic) BOOL m_shouldContinueRecording; // @synthesize m_shouldContinueRecording=_m_shouldContinueRecording;
@property(retain, nonatomic) UIView *m_toolBar; // @synthesize m_toolBar=_m_toolBar;
@property(retain, nonatomic) SightCameraTopToolView *m_sightCameraTopToolView; // @synthesize m_sightCameraTopToolView=_m_sightCameraTopToolView;
@property(nonatomic) float m_lastZoomScale; // @synthesize m_lastZoomScale=_m_lastZoomScale;
@property(retain, nonatomic) UIButton *m_hideBarBtn; // @synthesize m_hideBarBtn=_m_hideBarBtn;
@property(retain, nonatomic) ShortVideoToolbarPreviewView *m_resultPreviewView; // @synthesize m_resultPreviewView=_m_resultPreviewView;
@property(retain, nonatomic) UIView *m_maskWindow; // @synthesize m_maskWindow=_m_maskWindow;
@property(nonatomic) unsigned long m_tipsCounter; // @synthesize m_tipsCounter=_m_tipsCounter;
@property(retain, nonatomic) MMCircularProgressView *m_circleProgress; // @synthesize m_circleProgress=_m_circleProgress;
@property(retain, nonatomic) UIView *m_cancelTips; // @synthesize m_cancelTips=_m_cancelTips;
@property(retain, nonatomic) UIView *m_tipsView; // @synthesize m_tipsView=_m_tipsView;
@property(nonatomic) BOOL m_cameraOpened; // @synthesize m_cameraOpened=_m_cameraOpened;
@property(retain, nonatomic) UIView<SightPreviewView> *m_cameraPreviewView; // @synthesize m_cameraPreviewView=_m_cameraPreviewView;
@property(nonatomic) BOOL m_writerTimeout; // @synthesize m_writerTimeout=_m_writerTimeout;
@property(nonatomic) unsigned long m_currWriterID; // @synthesize m_currWriterID=_m_currWriterID;
@property(nonatomic) unsigned int camSwitchTiming; // @synthesize camSwitchTiming=_camSwitchTiming;
@property(nonatomic) int btnState; // @synthesize btnState=_btnState;
@property(nonatomic) int recordState; // @synthesize recordState=_recordState;
@property(nonatomic) __weak id <ShortVideoBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int toolItems; // @synthesize toolItems=_toolItems;
@property(nonatomic) BOOL isShowingPreview; // @synthesize isShowingPreview=_isShowingPreview;
@property(nonatomic) BOOL draggable; // @synthesize draggable=_draggable;
@property(nonatomic) float topPosition; // @synthesize topPosition=m_topPositon;
@property(nonatomic) BOOL active; // @synthesize active=m_isActive;
@property(nonatomic) int cameraState; // @synthesize cameraState=m_cameraState;
- (void).cxx_destruct;
- (void)onClickEditVideoDoneBarButton;
- (void)onClickEditVideoBackBarButton;
- (id)currentViewController;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)onPreviewImageClickCancel;
- (void)showPreviewViewWithImage:(id)arg1 imageData:(id)arg2;
- (void)showPreviewViewWithSightPath:(id)arg1 thumbImg:(id)arg2 sentImmediately:(BOOL)arg3;
- (void)didTapRetakeButton;
- (id)cameraSwitchTimingLogString;
- (id)cameraModeLogStringWithIsVideo:(BOOL)arg1;
- (BOOL)isChatRoomUserName:(id)arg1;
- (void)showTopBar;
- (void)hideTopBar;
- (void)showMaskWindow;
- (void)startDeactiveAnimation;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)startActiveAnimation:(BOOL)arg1;
- (void)setActive:(BOOL)arg1 fromShake:(BOOL)arg2;
- (void)protectHide;
- (void)deActiveWithoutAnimation;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanPreview:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleFocusTap:(id)arg1 inView:(id)arg2;
- (void)focusCenter;
- (void)startLightBoostAnimation;
- (void)turnOffLightBoost;
- (void)turnOnLightBoost;
- (void)lightNormal;
- (void)lightTooLow;
- (void)showLightBoostHint;
- (void)showLightBoostButton:(BOOL)arg1 withAnim:(BOOL)arg2;
- (void)showLightBoostButton:(BOOL)arg1;
- (void)reshowLightBoostButton:(BOOL)arg1;
- (void)styleLightBoostButton:(BOOL)arg1;
- (void)onShaky;
- (void)resetMotionTipsView;
- (void)setupMotionDetector;
- (void)onEnterProximityState;
- (void)onDragEnd:(float)arg1;
- (void)onDrag:(struct CGPoint)arg1;
- (void)onBtnClick:(id)arg1;
- (void)onCaptureFrameAfterMovieSent:(id)arg1;
- (void)onMovieCompressFinished:(id)arg1;
- (void)onWriterResign;
- (void)onWriterFailed:(id)arg1;
- (id)getSubImage:(struct CGRect)arg1 inImage:(id)arg2;
- (void)onTakenPicture:(id)arg1 imageData:(id)arg2;
- (void)btnRelease;
- (void)btnDragging:(id)arg1;
- (void)btnDragInside;
- (void)btnDragOutSide;
- (void)btnPress;
- (void)tryCancelPreStartRecording;
- (void)cancelWriterWithoutReprepare;
- (void)cancelWriter;
- (void)finishWriter;
- (void)startWriter;
- (id)getShineAnim;
- (void)turnBarNormalize;
- (void)turnBarCanceling;
- (void)turnBarRecording:(BOOL)arg1;
- (void)turnBarRecording;
- (void)turnBarRecordingLongAnim;
- (void)logicCheckState:(int)arg1;
- (void)takePicture;
- (void)hideCancelTips;
- (void)showCancelTips;
- (void)hideTips;
- (void)fadeInTips;
- (void)showTips:(id)arg1 ofColor:(id)arg2 animType:(unsigned long)arg3 fontSize:(float)arg4;
- (void)showTips:(id)arg1 ofColor:(id)arg2 animType:(unsigned long)arg3;
- (void)hideRightZoomTips;
- (void)showRightZoomTips;
- (id)blurryImage:(id)arg1 withBlurLevel:(float)arg2;
- (void)pauseCamera;
- (void)resumeCamera;
- (void)onCameraStop:(id)arg1;
- (void)onCameraAudioOK:(id)arg1;
- (void)onCameraPreviewOK:(id)arg1;
- (void)switchCamera;
- (void)toggleLightBoost;
- (float)sightCaptureMaxDuration;
- (void)releasePreview;
- (void)tryCreatePreview;
- (void)dealloc;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)initTipsLabel;
- (void)setupToolBar;
- (void)setupPreView;
- (void)setupTopBar;
- (void)updateBlurImage;
- (id)makeBGMaskView;
- (void)setupBackgroundView;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1 toolItems:(unsigned int)arg2 cameraMode:(unsigned int)arg3 scene:(unsigned int)arg4;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)dismissForVOIPEvents;
- (void)rotateToOrientation:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

