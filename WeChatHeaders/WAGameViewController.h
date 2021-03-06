//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewController.h"

#import "IVOIPUILogicMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "MultiTalkMgrExt.h"
#import "PBMessageObserverDelegate.h"
#import "WAGameActionSheetDelegate.h"
#import "WAOpenGLViewDelegate.h"
#import "YYWebViewDelegate.h"

@class MMUIButton, MMUIView, NSMutableArray, NSString, NSURLRequest, RCDraggableButton, UILabel, UILongPressGestureRecognizer, UIView, WAGameActionSheet, WAOpenGLView, WAPopOverTaskBarlogic, WAPopOverView, YYWAWebView;

@interface WAGameViewController : WAWebViewController <WAGameActionSheetDelegate, MMTipsViewControllerDelegate, PBMessageObserverDelegate, IVOIPUILogicMgrExt, MultiTalkMgrExt, WAOpenGLViewDelegate, YYWebViewDelegate>
{
    WAOpenGLView *_glView;
    WAGameActionSheet *_gameSheet;
    RCDraggableButton *_debugBtn;
    YYWAWebView *_debugWebView;
    BOOL _vConsoleVisible;
    NSMutableArray *_menuList;
    UIView *_backgroundView;
    UILabel *_performance;
    BOOL _showStatusBar;
    BOOL _useDebug;
    BOOL _vConsoleFnishLoad;
    NSMutableArray *_logs;
    BOOL _reportPerformance;
    int _reportPerformanceInterval;
    UILongPressGestureRecognizer *_moreLongPressRecognizer;
    BOOL _isTrigerMoreLongPress;
    UILongPressGestureRecognizer *_exitlongPressRecognizer;
    WAPopOverTaskBarlogic *_popOverLogic;
    WAPopOverView *_popOverView;
    int _fpsTestNum;
    int _orientation;
    UIView *_inputBackground;
    id <WAGameKeyboardDelegate> _keyboardDelegate;
    id <WAGameContextDelegate> _delegate;
    unsigned int _lockedOrientation;
    MMUIView *_capsuleView;
    MMUIButton *_menuMoreButton;
    MMUIButton *_menuExitButton;
}

+ (void)updateLoadingView:(id)arg1 inView:(id)arg2;
+ (id)createLoadingView:(id)arg1 inView:(id)arg2;
@property(retain, nonatomic) MMUIButton *menuExitButton; // @synthesize menuExitButton=_menuExitButton;
@property(retain, nonatomic) MMUIButton *menuMoreButton; // @synthesize menuMoreButton=_menuMoreButton;
@property(retain, nonatomic) MMUIView *capsuleView; // @synthesize capsuleView=_capsuleView;
@property(nonatomic) unsigned int lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(nonatomic) __weak id <WAGameContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WAGameKeyboardDelegate> keyboardDelegate; // @synthesize keyboardDelegate=_keyboardDelegate;
@property(retain, nonatomic) UIView *inputBackground; // @synthesize inputBackground=_inputBackground;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (void)prepareTypedArray:(struct OpaqueJSContext *)arg1;
- (void)onLongPressExitItem:(id)arg1;
- (void)onLeave:(id)arg1;
- (void)onMenu:(id)arg1;
- (void)onLongPressMoreItem:(id)arg1;
- (void)reportGamePerformanceInfo;
- (id)pluginNavBar;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMinimized;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onBeginMultiTalk;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (id)getMenuButton;
- (void)updatePerf;
- (void)stop;
- (id)getFileData:(id)arg1;
- (BOOL)isFileExist:(id)arg1;
- (void)logError:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)systemLog:(id)arg1;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)unlockOrientation;
- (void)lockOrientation:(int)arg1;
- (BOOL)isOrientationLanscape;
- (void)setDeviceOrientation:(BOOL)arg1;
- (void)resetSubviews;
- (void)handleEvent:(int)arg1 userInfo:(id)arg2;
- (void)DismissMyselfAnimated:(BOOL)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)useTransparentNavibar;
- (BOOL)isIndexDataLoaded;
- (void)injectGameScript:(id)arg1;
- (void)setTitleInterfaceOritation:(int)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)initOpenGLView:(id)arg1;
- (id)getAppLaunchConfig;
- (void)internalInitWithBaseURL:(id)arg1 query:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)printGameFPS;
- (id)initWithBaseURL:(id)arg1 query:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)textInputDidChange:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)onConfirm;
- (void)setFocus:(id)arg1;
- (BOOL)onReturn:(id)arg1;
- (int)getConfirmButton:(id)arg1;
- (BOOL)showKeyboard:(id)arg1 delegate:(id)arg2;
- (void)hideKeyboard;
- (id)pluginReportPageEvent;
- (id)menuDebugButtonTitleArray;
- (id)menubuttonTitleArray;
- (id)pluginNavBar;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2 tipTag:(int)arg3;
- (void)showTipsViewWithTitle:(id)arg1 content:(id)arg2 tipsTag:(int)arg3 delegate:(id)arg4;
- (void)gameActionSheetDidDismiss:(id)arg1;
- (void)gameActionSheetInfoCliked:(id)arg1;
- (void)gameActionSheet:(id)arg1 didDismissWithMenuIndex:(int)arg2;
- (void)gameActionSheet:(id)arg1 clickedButtonTitle:(id)arg2;
- (void)onSwitchVConsole;
- (void)shareGame;
- (void)hideShowVConsole;
- (void)requestGameMenuList;
- (void)onMenuShow;
- (id)getCanvasImage:(unsigned long)arg1;
- (void)insertSubView:(id)arg1;
- (unsigned long)insertChildView:(id)arg1 viewId:(unsigned long)arg2 parentId:(unsigned long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

