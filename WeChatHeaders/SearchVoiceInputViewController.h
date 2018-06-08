//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "INetworkStatusMgrExt.h"
#import "IStreamVoiceInputExt.h"
#import "StreamVoiceInputControlViewDelegate.h"

@class MMGrowTextView, MMTipsViewController, MMUILabel, NSMutableArray, NSMutableDictionary, NSString, StreamVoiceInputControlView, StreamVoiceInputLogic, StreamVoiceInputPrepareView, UIButton, UIImageView, UILabel, UIView;

@interface SearchVoiceInputViewController : MMUIViewController <IStreamVoiceInputExt, StreamVoiceInputControlViewDelegate, INetworkStatusMgrExt>
{
    NSMutableArray *_displayDataArray;
    unsigned long long _longClickTime;
    int _textChangeCount;
    UIView *_recordLeftView;
    UIImageView *_recordWarningView;
    MMUILabel *_tooShortLabel;
    UIImageView *_inputToolView;
    int _recordingWordingIndex;
    NSString *_recordingWording;
    float _currentHalfViewHeight;
    int _hasSetCursorPos;
    UIView *_coverView;
    BOOL _willHide;
    BOOL _bUseBlackStatusbar;
    BOOL _bAlwayShowMaskView;
    BOOL _isNavVoice;
    id <SearchVoiceInputViewControllerDelegate> _delegate;
    int _inputStatus;
    unsigned long _scene;
    NSString *_sessionId;
    NSString *_subSessionId;
    UIView *_containerView;
    MMGrowTextView *_inputResultView;
    UILabel *_inputIntroLabel;
    StreamVoiceInputControlView *_controlView;
    StreamVoiceInputPrepareView *_prepareView;
    MMTipsViewController *_tipsView;
    UIButton *_cancelButton;
    NSMutableDictionary *_inputLogicDic;
    StreamVoiceInputLogic *_curInputLogic;
    NSMutableArray *_voiceIdArray;
}

@property(retain, nonatomic) NSMutableArray *voiceIdArray; // @synthesize voiceIdArray=_voiceIdArray;
@property(retain, nonatomic) StreamVoiceInputLogic *curInputLogic; // @synthesize curInputLogic=_curInputLogic;
@property(retain, nonatomic) NSMutableDictionary *inputLogicDic; // @synthesize inputLogicDic=_inputLogicDic;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMTipsViewController *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) StreamVoiceInputPrepareView *prepareView; // @synthesize prepareView=_prepareView;
@property(retain, nonatomic) StreamVoiceInputControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) UILabel *inputIntroLabel; // @synthesize inputIntroLabel=_inputIntroLabel;
@property(retain, nonatomic) MMGrowTextView *inputResultView; // @synthesize inputResultView=_inputResultView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSString *subSessionId; // @synthesize subSessionId=_subSessionId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) BOOL isNavVoice; // @synthesize isNavVoice=_isNavVoice;
@property(nonatomic) unsigned long scene; // @synthesize scene=_scene;
@property(nonatomic) BOOL bAlwayShowMaskView; // @synthesize bAlwayShowMaskView=_bAlwayShowMaskView;
@property(nonatomic) BOOL bUseBlackStatusbar; // @synthesize bUseBlackStatusbar=_bUseBlackStatusbar;
@property(nonatomic) int inputStatus; // @synthesize inputStatus=_inputStatus;
@property(nonatomic) __weak id <SearchVoiceInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onNetworkStatusChange:(unsigned long)arg1;
- (float)getVisibleHeight;
- (void)textViewTextDidChange;
- (void)onCoverViewSwipeFrom:(id)arg1;
- (void)onTapCoverView;
- (void)userDidCancel;
- (void)delaySetStartStatus;
- (void)userTryToEndRecord:(BOOL)arg1;
- (void)userTryToRecord:(BOOL)arg1;
- (void)userDidHoldEnd;
- (void)userDidHoldBegin;
- (void)onVoiceSilentTooLong:(unsigned int)arg1;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndRecord;
- (void)OnStartRecord;
- (float)getContainerViewY;
- (void)hideStreamVoiceInputView;
- (void)showStreamVoiceInputView;
- (void)setTextViewSelectionRange:(struct _NSRange)arg1;
- (BOOL)resizeContainerViewHeight;
- (BOOL)checkCanDoFurtherAction;
- (id)getRecordingWording;
- (void)changeRecordingWording:(id)arg1;
- (void)stopRecord;
- (unsigned int)startRecord;
- (id)generateAttrTextFrom:(id)arg1 withUncertainLength:(int)arg2 withLastLargeFontLength:(int)arg3 withLastSavedTextCount:(int)arg4;
- (void)displayInitingWording;
- (BOOL)hasVoiceInputResult;
- (void)resetResultTextView;
- (void)displayResultText;
- (int)getUncertainLength;
- (void)forceSetAllInputEnd;
- (void)setAllEnd;
- (BOOL)ifGetResultAllEnd;
- (void)showCancelOrClearButton:(BOOL)arg1;
- (void)hideTooShortTips;
- (void)hideRecordingMaskView;
- (void)showRecordingMaskView;
- (void)showTooShortTips;
- (void)showInputEnd;
- (void)showRecordEndView;
- (void)showRecordEndWaitingView;
- (void)showRecordingViewForHold;
- (void)showRecordingViewForTap;
- (void)showRecorderInitHoldView;
- (void)showRecorderInitTapView;
- (void)showPrepareView;
- (void)handleSwipeFrom:(id)arg1;
- (void)initTooShortTipView;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
