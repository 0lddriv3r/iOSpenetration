//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseEmoticonViewDelegate.h"
#import "ILinkEventExt.h"
#import "IMsgExt.h"
#import "IStrangerContactMgrExt.h"
#import "ITranslateSnsMgrExt.h"
#import "InputControllerDelegate.h"
#import "MMGrowTextViewDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCAdvertiseActionFloatForABTestDelegate.h"
#import "WCAdvertiseActionFloatViewDelegate.h"
#import "WCCanvasPageViewControllerDelegate.h"
#import "WCCommentViewDelegate.h"
#import "WCFacadeExt.h"
#import "WCImageFullScreeViewMgrExt.h"
#import "WCSightViewExt.h"
#import "tableViewDelegate.h"

@class EmoticonBoardView, MMAdaptiveLabel, MMGrowTextView, MMHeadImageView, MMTableView, MMUILabel, MMURLHandler, NSMutableArray, NSMutableDictionary, NSObject<WCCommentDetailViewControllerFBDelegate>, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, UrlLabel, WCADPageWrap, WCAdvertiseActionFloatForABTest, WCAdvertiseActionFloatView, WCCommentItem, WCCommentView, WCContentItem, WCContentItemBaseView, WCDataItem, WCHeaderGridView, WCHighLightButton, WCInputController, WCOperateFloatView, WCSnsCommentDetailRewardView, WCUserComment;

@interface WCCommentDetailViewControllerFB : MMUIViewController <InputControllerDelegate, BaseEmoticonViewDelegate, WCAdvertiseActionFloatViewDelegate, RichTextLayoutDelegate, WCCanvasPageViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, WCFacadeExt, IMsgExt, MMGrowTextViewDelegate, tableViewDelegate, WCActionSheetDelegate, ILinkEventExt, WCCommentViewDelegate, UIAlertViewDelegate, WCImageFullScreeViewMgrExt, IStrangerContactMgrExt, ITranslateSnsMgrExt, WCAdvertiseActionFloatForABTestDelegate, WCSightViewExt>
{
    MMTableView *_tableView;
    NSMutableArray *_contentViews;
    UIView *_likeListView;
    WCHeaderGridView *_headerGridView;
    UIImageView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_expressionButton;
    MMUILabel *_remainWordCountLabel;
    MMGrowTextView *_growTextView;
    WCOperateFloatView *_floatOperateView;
    WCAdvertiseActionFloatView *_advertiseActionFloatView;
    WCAdvertiseActionFloatForABTest *_advertiseFloadForABTest;
    WCInputController *_inputController;
    WCDataItem *_dataItem;
    WCContentItem *_contentItem;
    NSMutableArray *_arrMediaList;
    NSMutableArray *_arrCommentList;
    NSMutableArray *_arrLikeList;
    BOOL _bStranger;
    NSString *_nsStrangerUsrName;
    BOOL _bForbideComment;
    MMURLHandler *_urlHandler;
    BOOL _bIsShow;
    WCUserComment *_refComment;
    WCUserComment *_defaultRefComment;
    float _defaultRefCommentContentOffset;
    BOOL _hasFoundDefaultRefComment;
    BOOL _hasJumpDefaultRefCommentOnce;
    NSObject<WCCommentDetailViewControllerFBDelegate> *m_delegate;
    NSString *_copyedText;
    RichTextView *_contentDescView;
    RichTextView *m_translateView;
    UIButton *m_translateStatusView;
    UIImageView *m_translateLineView;
    int eTranslateStatus;
    float fTranslateViewHeight;
    WCUserComment *curLongPressedComment;
    WCUserComment *curTranslateComment;
    UIButton *_resendBtn;
    MMHeadImageView *_headImageView;
    UrlLabel *_nickLabel;
    WCContentItemBaseView *_mediaCellView;
    MMAdaptiveLabel *_withLabel;
    UILabel *_locationLabel;
    UIButton *_privacyBtn;
    UILabel *_timeLabel;
    UIButton *_operateBtn;
    UIButton *_deleteBtn;
    UIButton *_advertiseLogo;
    UIButton *_adDetailBtn;
    WCCommentView *_commentViewForDelete;
    WCADPageWrap *_floatViewPageWrap;
    WCADPageWrap *_abTestPageWrap;
    int m_commentWordLimit;
    BOOL m_bHasClickFloat;
    BOOL m_bHaveActionSheet;
    UILabel *_rewardTipLabel;
    WCSnsCommentDetailRewardView *_rewardDetailView;
    WCHeaderGridView *_headImageRewardView;
    UILabel *_adPOILabel;
    UILabel *_adChainStrengthenLabel;
    UILabel *_adAtAdvertiserLabel;
    BOOL _isActionAtAd;
    UIView *_adCardBgView;
    UIButton *_adCardTouchButton;
    UILabel *_adCardTitleLabel;
    WCHighLightButton *_leftAdCanvasBtn;
    WCHighLightButton *_rightAdCanvasBtn;
    UIView *_adCardWeappTipView;
    NSMutableDictionary *m_dicUserCommentsUICache;
    BOOL _bJustShowContent;
    BOOL _bMusicSearchScene;
    NSString *_nsUsrName;
    int _uiSource;
    WCCommentItem *_failedComment;
    unsigned int _tipType;
}

+ (id)makeDataWrapForWCTranslate:(id)arg1;
@property(nonatomic) unsigned int tipType; // @synthesize tipType=_tipType;
@property(retain, nonatomic) WCCommentItem *failedComment; // @synthesize failedComment=_failedComment;
@property(nonatomic) BOOL bMusicSearchScene; // @synthesize bMusicSearchScene=_bMusicSearchScene;
@property(nonatomic) BOOL bJustShowContent; // @synthesize bJustShowContent=_bJustShowContent;
@property(retain, nonatomic) WCUserComment *defaultRefComment; // @synthesize defaultRefComment=_defaultRefComment;
@property(retain, nonatomic) WCUserComment *refComment; // @synthesize refComment=_refComment;
@property(nonatomic) __weak NSObject<WCCommentDetailViewControllerFBDelegate> *m_delegate; // @synthesize m_delegate;
@property(nonatomic) BOOL bForbideComment; // @synthesize bForbideComment=_bForbideComment;
@property(nonatomic) BOOL bStranger; // @synthesize bStranger=_bStranger;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) int uiSource; // @synthesize uiSource=_uiSource;
@property(retain, nonatomic) NSString *nsUsrName; // @synthesize nsUsrName=_nsUsrName;
@property(retain, nonatomic) NSString *nsStrangerUsrName; // @synthesize nsStrangerUsrName=_nsStrangerUsrName;
- (void).cxx_destruct;
- (void)abTestViewHiddenWrap;
- (void)floatViewHiddenWrap;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (float)initTranslateStatusButton:(BOOL)arg1 withTitle:(id)arg2 andReferView:(id)arg3;
- (void)makeTranslateShowAnimation;
- (float)initContentTranslateView:(id)arg1 andSuperView:(id)arg2;
- (void)onTranslateComment:(id)arg1;
- (void)onTranslateAction:(id)arg1;
- (id)GetMyTranslateSnsKeyID;
- (void)onNetworkActivityStatusChanged;
- (void)willDisshow;
- (void)willDisappear;
- (void)willShow;
- (void)willAppear;
- (void)adjustTableViewRect;
- (void)updateNetworkStatus;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onResendBtnClicked:(id)arg1;
- (void)onViewAnimationWillHide;
- (void)onCommentPhoto:(id)arg1;
- (void)onClickLikeBtnOnFloatView;
- (void)onClickCommentBtnOnFloatView;
- (void)onClickContent:(id)arg1 confirmDelete:(BOOL)arg2;
- (void)onShowGroup;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onDeletePhoto:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onHeadImageClicked:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)showBarButton:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateHeaderGridView;
- (id)FormCommentTipsView:(id)arg1;
- (id)getCommentsUICacheKey:(id)arg1;
- (void)onClickWithBtn;
- (void)initTableView;
- (void)initTableFooterView;
- (int)getInputViewHeight;
- (float)layoutHeadInnerView;
- (float)getOperateBtnRightMargin;
- (float)getCommentViewLeftMargin;
- (float)getHeadImageViewLeftMargin;
- (id)getContactDisplayName;
- (void)onResumeScrollToTop;
- (void)onForbidScrollToTop;
- (void)rewardDetailViewTapped;
- (void)initRewardDetailView:(id)arg1;
- (BOOL)shouldShowRewardDetailView;
- (BOOL)shouldShowRewardTip;
- (void)onFavoriteAddAdCard:(id)arg1;
- (void)showFavoriteAddAdCardMenuitem;
- (void)longPressOnAdCardButton:(id)arg1;
- (void)delayClearTouchButtonColor;
- (void)delayClickAdCardTouchButton;
- (void)onClickRightCanvasButton:(id)arg1 forEvent:(id)arg2;
- (void)onClickLeftCanvasButton:(id)arg1 forEvent:(id)arg2;
- (void)onClickAdCardTouchButton:(id)arg1 forEvent:(id)arg2;
- (void)initAdCardWeappTipView;
- (void)initTableHeaderView;
- (void)updateTimeLabelText;
- (void)onActionAdChainStrengthen:(id)arg1;
- (void)onActionAtAd:(id)arg1;
- (void)onActionAdPOI:(id)arg1;
- (void)onActionLocation:(id)arg1;
- (void)initData;
- (void)dealloc;
- (void)hideFloatView;
- (id)init;
- (id)getReplyNickNameFromComment:(id)arg1;
- (void)onWCSightViewWillExitFullScreen:(id)arg1;
- (void)onWCSightViewWillEnterFullScreen:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onDontLikeWithChoose:(id)arg1;
- (void)onDontLikeWithOtherReason:(id)arg1 QuestionExp:(id)arg2;
- (void)onClickTipBtn:(id)arg1;
- (void)onHideAdvertise:(id)arg1;
- (void)onActionFloatView:(id)arg1 didSelectFeedbackItem:(id)arg2;
- (void)onActionFloatView:(id)arg1 didSelectReason:(id)arg2;
- (void)onRemoveAd;
- (void)onAdActoin:(id)arg1;
- (void)onAdvertiseAction:(id)arg1;
- (void)onAdvertiseDetail;
- (BOOL)shouldInteractivePop;
- (void)onCommentItemDeleteFinished:(int)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)updateRewardTip;
- (void)updateRewardView;
- (void)reloadExpressionButtonImage:(int)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)delayReloadTableView;
- (void)onReloadCommentCellView:(id)arg1;
- (BOOL)isTouchEnableOnCommentView;
- (void)onCommentViewLongPressed:(id)arg1 withText:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onCommentViewClicked:(id)arg1;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)showMenuItemForComment:(id)arg1 withRect:(struct CGRect)arg2 withComment:(id)arg3 isMySelf:(BOOL)arg4 isSending:(BOOL)arg5;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2 isWord:(BOOL)arg3 andView:(id)arg4;
- (void)onFavAddForTranslated:(id)arg1;
- (void)onFavAdd:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onCopy:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onMenuControllerDidHide:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)keyboardWillShow;
- (void)keyboardWillHide;
- (void)onInputModeChangeTo:(int)arg1 Animated:(BOOL)arg2;
- (void)updateTableLayout;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)updateTableViewHeight;
- (float)getTableViewVisibleHeight;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (void)updateWordCnt:(int)arg1;
- (void)reloadData:(id)arg1;
- (void)updateInputView;
- (void)keyboardDidHide;
- (void)updateContentOffset;
- (void)initInputController;
- (void)initEmoticonView;
- (void)initInputToolView;
- (void)onSingleTapOnInputView;
- (void)didFinishedLoading:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)resignInput;
- (void)becomeInputWithAtAdvertise;
- (void)becomeInput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

