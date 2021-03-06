//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "InputControllerDelegate.h"
#import "MMTipsViewControllerDelegate.h"

@class MMGrowTextView, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UITapGestureRecognizer, UIView, UIViewController, WCInputController;

@interface MMTipsViewController : MMWindowViewController <MMTipsViewControllerDelegate, InputControllerDelegate>
{
    id <MMTipsViewControllerDelegate> m_delegate;
    unsigned int _tipsType;
    NSString *_tipsTitle;
    NSString *_tipsContent;
    NSString *_tipsImgName;
    NSMutableArray *_btnTitleArray;
    NSMutableArray *_btnArray;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    NSString *_tipsText;
    NSString *_tipsTextPlaceholder;
    unsigned long _tipsTextMaxCount;
    MMGrowTextView *_tipsTextView;
    UIImageView *_inputView;
    UIButton *_expressionButton;
    WCInputController *_inputController;
    UIView *_textBackgroundImage;
    BOOL _hasInputSth;
    UITapGestureRecognizer *_tapGR;
    UIButton *_backgroundBtn;
    UIImageView *_contentBg;
    UIImageView *_tipsImgView;
    UIView *_tipsDesView;
    UIView *_contentView;
    MMUILabel *_tipsTitleLabel;
    MMUILabel *_tipsContentLabel;
    BOOL _isBlurBg;
    UIView *_blurView;
    BOOL bIsForbidCancelBtn;
    BOOL _m_isUseBlackStatusBar;
    BOOL _allButtonVertical;
    BOOL _hideTipsWhenClickedOutOfTips;
    unsigned int m_tipsImageLocation;
    id _m_userData;
    int _tipTag;
    UIViewController *_topViewController;
}

@property(nonatomic) BOOL hideTipsWhenClickedOutOfTips; // @synthesize hideTipsWhenClickedOutOfTips=_hideTipsWhenClickedOutOfTips;
@property(nonatomic) BOOL allButtonVertical; // @synthesize allButtonVertical=_allButtonVertical;
@property(nonatomic) __weak UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(nonatomic) BOOL m_isUseBlackStatusBar; // @synthesize m_isUseBlackStatusBar=_m_isUseBlackStatusBar;
@property(nonatomic) int tipTag; // @synthesize tipTag=_tipTag;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData=_m_userData;
@property(nonatomic) unsigned int m_tipsImageLocation; // @synthesize m_tipsImageLocation;
@property(retain, nonatomic) NSString *m_imageName; // @synthesize m_imageName=_tipsImgName;
@property(nonatomic) BOOL bIsForbidCancelBtn; // @synthesize bIsForbidCancelBtn;
@property(retain, nonatomic) MMUILabel *m_tipsContentLabel; // @synthesize m_tipsContentLabel=_tipsContentLabel;
@property(retain, nonatomic) MMUILabel *m_tipsTitleLabel; // @synthesize m_tipsTitleLabel=_tipsTitleLabel;
@property(nonatomic) __weak id <MMTipsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tapGestureInProcess:(id)arg1;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)keyboardWillShow;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)create6Or6pFirstLoginView;
- (id)bulidNSAttributedStringText:(id)arg1;
- (void)removeAllBtn;
- (void)setButtonsEnable:(BOOL)arg1;
- (void)onClickBtn:(id)arg1;
- (void)updateSubViewsFrame;
- (id)getBtnAtIndex:(unsigned long)arg1;
- (void)resignInput;
- (void)becomeInput;
- (void)initInputController;
- (void)initInputToolView;
- (void)initInputView;
- (void)createContainImgTips;
- (id)getContentImageView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)clickBgEmptyToHideTips;
- (void)hideTips;
- (void)configBlurBgOnView:(id)arg1;
- (id)initWithTitle:(id)arg1 andContent:(id)arg2 andTextFieldPlaceholder:(id)arg3 withMaxCount:(unsigned long)arg4 andCancelText:(id)arg5 andConfirmText:(id)arg6;
- (id)initWithTitle:(id)arg1 andContent:(id)arg2 andButtons:(id)arg3;
- (id)initWithTitle:(id)arg1 andContent:(id)arg2 andBtn:(id)arg3;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4 andConfirmText:(id)arg5;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4;
- (id)initIphone6LoginTipsWithTitle:(id)arg1 andContent:(id)arg2 andCancelText:(id)arg3;
- (CDUnknownBlockType)clickBtnBlock;
- (void)setClickBtnBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)clickEmptyBlock;
- (void)setClickEmptyBlock:(CDUnknownBlockType)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onClickEmptyBackgroundViewToHideTips;
- (void)showWithClickEmpty:(CDUnknownBlockType)arg1 clickBtn:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

