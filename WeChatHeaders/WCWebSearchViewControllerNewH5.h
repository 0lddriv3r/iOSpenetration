//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IRecordPermissionCheckExt.h"
#import "IStreamVoiceInputExt.h"
#import "MMWebSearchViewDelegate.h"
#import "SGTopEntryViewDelegate.h"
#import "SearchVoiceInputViewControllerDelegate.h"
#import "UITextFieldDelegate.h"
#import "WSTagSearchDelegate.h"

@class MMTagTextField, MMUILabel, MMWebSearchController, NSDictionary, NSString, SGTopEntryView, SearchVoiceInputViewController, UIButton, UIImageView, UIView, UIView<YYWebViewInterface>, WCFullScreenTitleView, WCStatTimerHelper, WSTagSearchLogic;

@interface WCWebSearchViewControllerNewH5 : MMUIViewController <UITextFieldDelegate, SGTopEntryViewDelegate, MMWebSearchViewDelegate, WSTagSearchDelegate, SearchVoiceInputViewControllerDelegate, IStreamVoiceInputExt, IRecordPermissionCheckExt>
{
    NSString *_lastFormatQueryFromMultiStageForFixingWKSearchBug;
    UIView *_navBarBkg;
    UIView *_navBarShadowView;
    unsigned long long _currentSwitchBusinessType;
    WCFullScreenTitleView *_titleView;
    UIView *_navContentView;
    UIView *_navContentRightDivideView;
    MMTagTextField *_navSearchTextField;
    UIImageView *_navSearchLeftView;
    MMUILabel *_navTitleLabel;
    UIButton *_navVoiceInputButton;
    UIView *_cornerWrapView;
    UIView *_cornerClipView;
    UIView *_contentSearchTextFieldWrapView;
    MMTagTextField *_contentSearchTextField;
    UIImageView *_contentSearchLeftView;
    UIButton *_contentSearchHitBtn;
    UIButton *_contentVoiceInputButton;
    UIView *_dynamicContentWrapView;
    SGTopEntryView *_guideEntryView;
    MMWebSearchController *_webSearchController;
    WSTagSearchLogic *_tagSearchLogic;
    BOOL _isAnimatingToWebSearch;
    int _sugOpStat;
    BOOL _isFirstPage;
    UIView<YYWebViewInterface> *_firstPageWebView;
    BOOL _isSencondPageFromVerticalEntrance;
    BOOL _bTextFieldShouldReturn;
    BOOL _hasFirstWebviewJsbridgeReady;
    int _initScene;
    BOOL _needSendOnFocusEventAfterJsbridgeReady;
    BOOL _needSendSwitchTabAfterJsbridgeReady;
    WCStatTimerHelper *_pageTimeHelper;
    BOOL _hasInitContainerView;
    unsigned long long _beginPreloadTime;
    BOOL _hasSendOnUiInitEvent;
    NSDictionary *_initedUrlParams;
    int _VCType;
    id <WCWebSearchViewControllerDelegate> _delegate;
    NSString *_fromUrlString;
    SearchVoiceInputViewController *_searchVoiceInputViewController;
    unsigned long long _enterTime;
}

@property(retain, nonatomic) SearchVoiceInputViewController *searchVoiceInputViewController; // @synthesize searchVoiceInputViewController=_searchVoiceInputViewController;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSString *fromUrlString; // @synthesize fromUrlString=_fromUrlString;
@property(nonatomic) __weak id <WCWebSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int VCType; // @synthesize VCType=_VCType;
@property(retain, nonatomic) NSDictionary *initedUrlParams; // @synthesize initedUrlParams=_initedUrlParams;
- (void).cxx_destruct;
- (void)onTagSearchBarInfoChangedToNotify:(id)arg1;
- (BOOL)hasFirstWebviewJsbridgeReady;
- (void)onJsbridgeReady:(id)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(id)arg1;
- (void)didFinishLoadWebView:(id)arg1;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)onSearchBackToPreviousView;
- (void)onViewTypeChanged;
- (void)onSearchLaunchNextViewWithBizType:(unsigned long long)arg1;
- (void)onSearchReset;
- (void)webviewScrollViewWillBeginDragging:(id)arg1;
- (id)getNativeHeight;
- (id)getInputHeight;
- (id)getInputMarginLeftRight;
- (id)getInputMarginTop;
- (void)onSearchHotWord:(id)arg1;
- (void)onStartVerticalSearch:(unsigned long long)arg1;
- (void)onSearchInputSetPlaceHolder:(id)arg1;
- (void)onSearchInputSetText:(id)arg1 tagInfo:(id)arg2;
- (float)webSearchViewPosY;
- (void)startCommonSearch:(id)arg1 withSugId:(id)arg2;
- (void)startVerticalWebSearch:(unsigned long long)arg1;
- (void)onSwitchSearchContext:(int)arg1 andType:(unsigned long long)arg2 andQuery:(id)arg3;
- (void)onClickWithData:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)onTextViewAttributeTextChange:(id)arg1;
- (void)streamVoiceInputBoardWillHideWithText:(id)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)onVoiceInputEndWithText:(id)arg1;
- (void)animateShowVoiceInputController;
- (void)contentSearchBtnClicked:(id)arg1 isVoiceInputBtnClick:(BOOL)arg2;
- (void)onContentSearchHitBtnClick:(id)arg1;
- (void)onClickVoiceInput:(id)arg1;
- (BOOL)isDetailSearch;
- (BOOL)isVertSearh;
- (BOOL)isMixSearch;
- (id)getSearchMarkImageForBusinesstype:(unsigned long long)arg1;
- (id)getPlaceHolderForBusinessType:(unsigned long long)arg1;
- (id)getMixSearchPlaceHolder;
- (void)setContentSearchUIForType:(unsigned long long)arg1;
- (void)resetContentSearch;
- (void)resetFromWebSearch;
- (void)registerTagSearchLogic;
- (void)endWebSearchAnimation;
- (void)beginWebSearchAnimation;
- (void)didEndWebSearch;
- (void)willEndWebSearch;
- (void)tryInitNavVoiceButton;
- (void)didBeginWebSearch;
- (void)willBeginWebSearch;
- (void)setPlaceImage:(id)arg1;
- (void)adjustContentTopMargin:(float)arg1;
- (void)setNavLeftBarItemHidden:(BOOL)arg1;
- (void)forceSetSwitchButtonHidden:(BOOL)arg1;
- (void)layoutSwitchButton;
- (void)layoutNavContentWithBizType:(unsigned long long)arg1;
- (void)layoutNavContentForNormalStatus;
- (void)layoutNavContentForEditStatus;
- (void)layoutContent;
- (void)onNavigationCancelItemClick:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)updateNavBarShadow;
- (BOOL)isRightBarButtonItemHidden;
- (void)layoutNavContent;
- (void)setNavCancelButtonHidden:(BOOL)arg1;
- (void)setFakeNavBarHidden:(BOOL)arg1 slideAnimated:(BOOL)arg2;
- (void)resetNavSearch;
- (void)tryShowStreamVoiceInputViewController;
- (void)initNavigationBar;
- (void)reportGuideEntryViewExposure;
- (void)initView;
- (void)initWebSearchControllerWithScene:(int)arg1;
- (id)initWithScene:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)willDisappear;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)preInitContainerView;
- (void)tryInitContainerView;
- (void)viewDidLoad;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

