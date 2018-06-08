//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

#import "BaseEmoticonViewDelegate.h"
#import "EmoticonBoardViewDelegate.h"
#import "InputControllerDelegate.h"

@class EmoticonBoardView, NSString, UIButton, UIImageView, WCInputController;

@interface MMWebViewPlugin_InputKeyboard : MMWebViewPluginBase <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, InputControllerDelegate>
{
    CDUnknownBlockType _inputTextCallbackBlock;
    unsigned int _maxInputLen;
    WCInputController *_inputController;
    UIImageView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_expressionButton;
    NSString *_finishText;
    BOOL _bIsAlreadySendEvent;
    BOOL _bIsShowJSKeyBoard;
    BOOL _bOnlyShowSmileyPanel;
    double _smileyPanelDuration;
}

@property(nonatomic) BOOL m_bIsShowJSKeyBoard; // @synthesize m_bIsShowJSKeyBoard=_bIsShowJSKeyBoard;
- (void).cxx_destruct;
- (void)sendEmotionTextToJs:(id)arg1;
- (void)hideEmotionBoardAnimate;
- (void)deleteEmoticon;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)OnEmoticonStateDidChanged:(BOOL)arg1;
- (void)onSendButtonClicked;
- (void)keyboardDidHide;
- (void)callBackToJs;
- (void)onHideKeyboard;
- (void)didCommitText:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (float)getVisibleHeight;
- (void)reloadExpressionButtonImage:(int)arg1;
- (void)initEmoticonView;
- (void)initInputToolView;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)ensureInitInputView;
- (void)showEmotionBoardAnimate;
- (void)showInputViewWithPlaceholder:(id)arg1 defaultText:(id)arg2 contentOffsetY:(float)arg3;
- (BOOL)showEmotionBoardOnly:(double)arg1 ToShow:(BOOL)arg2 EmotionBoardHeight:(float *)arg3;
- (void)showKeyBoardWithPlaceholder:(id)arg1 defaultText:(id)arg2 maxTextLen:(unsigned int)arg3 contentOffsetY:(float)arg4 callBackBlock:(CDUnknownBlockType)arg5;
- (void)resignResponder;
- (BOOL)handleEvent:(unsigned int)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

