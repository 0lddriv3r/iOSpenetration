//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "IUiUtilExt.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString, UIColor, UIView;

@interface WCActionSheet : MMUIWindow <UIGestureRecognizerDelegate, IUiUtilExt>
{
    BOOL _shouldHide;
    BOOL _shouldRelease;
    BOOL _hasSeplineButton;
    NSString *_cancelButtonTitle;
    NSMutableArray *_buttonTitleList;
    UIView *_pannelView;
    UIView *_titleView;
    UIView *_backgroundView;
    UIView *_containerView;
    id <WCActionSheetDelegate> _delegateEx;
    NSString *_title;
    int _destructiveButtonIndex;
    int _firstOtherButtonIndex;
    int _cancelButtonIndex;
    int _m_lastOrientation;
    UIColor *_cancelBtnTextColor;
    unsigned int _numberOfButtons;
    UIView *_customView;
}

+ (int)getActionSheetWidth;
@property(nonatomic) BOOL hasSeplineButton; // @synthesize hasSeplineButton=_hasSeplineButton;
@property(nonatomic) BOOL shouldRelease; // @synthesize shouldRelease=_shouldRelease;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) unsigned int numberOfButtons; // @synthesize numberOfButtons=_numberOfButtons;
@property(retain, nonatomic) UIColor *cancelBtnTextColor; // @synthesize cancelBtnTextColor=_cancelBtnTextColor;
@property(nonatomic) BOOL shouldHide; // @synthesize shouldHide=_shouldHide;
@property(nonatomic) int m_lastOrientation; // @synthesize m_lastOrientation=_m_lastOrientation;
@property(nonatomic) int firstOtherButtonIndex; // @synthesize firstOtherButtonIndex=_firstOtherButtonIndex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCActionSheetDelegate> delegateEx; // @synthesize delegateEx=_delegateEx;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *pannelView; // @synthesize pannelView=_pannelView;
@property(retain, nonatomic) NSMutableArray *buttonTitleList; // @synthesize buttonTitleList=_buttonTitleList;
@property(retain, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)OnCancel:(id)arg1;
- (void)OnDefaultButtonTapped:(id)arg1;
- (void)addTapRecognizer;
- (void)tapOut:(id)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)reloadInnerView;
- (id)makeCustomView:(id)arg1;
- (id)makeNormalView:(id)arg1;
- (id)genGrayBarView;
- (id)makePannelViewWithButtonList:(id)arg1 withCancelButtonTitle:(id)arg2;
- (id)makeTitleViewWithTitle:(id)arg1;
- (id)makeItemViewWithItem:(id)arg1;
- (float)heightOfWholeSheet;
- (int)addCustomViewWithTitle:(id)arg1 fontSize:(int)arg2 fontColor:(id)arg3 WithDesc:(id)arg4 descFontSize:(int)arg5 descFontColor:(id)arg6 enable:(BOOL)arg7;
- (void)appendButtonTitle:(id)arg1 atIndex:(int)arg2;
- (void)showInView:(id)arg1;
- (void)setCancelButtonTextColor:(id)arg1;
@property(nonatomic) int destructiveButtonIndex; // @synthesize destructiveButtonIndex=_destructiveButtonIndex;
@property(nonatomic) int cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
- (id)buttonTitleAtIndex:(int)arg1;
- (unsigned int)numberOfButtonsExcludingCancelButton;
- (int)addIconViewWithTitle:(id)arg1 IconImage:(id)arg2;
- (int)addButtonWithItem:(id)arg1 atIndex:(unsigned int)arg2;
- (int)addButtonWithTitle:(id)arg1 atIndex:(unsigned int)arg2;
- (int)addDestructiveButtonWithTitle:(id)arg1;
- (int)addButtonWithTitle:(id)arg1;
@property(nonatomic) __weak id <WCActionSheetDelegate> delegate;
- (BOOL)accessibilityPerformEscape;
- (void)onOpenApiWillBeginShare:(id)arg1;
- (void)deviceDidRotate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)shouldHideOnRotate;
- (void)onMainWindowFrameChanged;
- (void)onStatusBarFrameChanged;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)init;
- (void)dealloc;
- (void)setActionSheetName:(id)arg1;
- (id)getActionSheetName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

