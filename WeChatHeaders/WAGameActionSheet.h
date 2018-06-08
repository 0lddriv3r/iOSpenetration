//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CContact, NSArray, NSString, UIButton, UIView;

@interface WAGameActionSheet : MMObject
{
    CContact *m_contact;
    unsigned int m_appType;
    NSArray *m_btnTitles;
    NSArray *m_debugTitles;
    NSArray *m_menuItems;
    NSString *m_cancelTitle;
    BOOL m_isLandScape;
    BOOL m_isNewGroup;
    BOOL _isUseWeAppModule;
    BOOL _isDismissForbidAnimation;
    id <WAGameActionSheetDelegate> _delegate;
    int _actionSheetStyle;
    UIView *_maskView;
    UIView *_containerView;
    UIButton *_cancelBtn;
    UIView *_parentView;
}

@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) int actionSheetStyle; // @synthesize actionSheetStyle=_actionSheetStyle;
@property(nonatomic) __weak id <WAGameActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isDismissForbidAnimation; // @synthesize isDismissForbidAnimation=_isDismissForbidAnimation;
@property(nonatomic) BOOL isUseWeAppModule; // @synthesize isUseWeAppModule=_isUseWeAppModule;
- (void).cxx_destruct;
- (struct UIEdgeInsets)realSafeAreaInsets;
- (BOOL)isSmallScreenLandscape;
- (float)getScreenHeight;
- (float)getScreenWidth;
- (float)getActionSheetWidth;
- (void)deviceDidRotate:(id)arg1;
- (void)onCancelButtonClick:(id)arg1;
- (void)onHeaderButtonClicked:(id)arg1;
- (void)onButtonClicked:(id)arg1;
- (void)onMenuButtonClicked:(id)arg1;
- (id)genMenuButton:(id)arg1 withIndex:(int)arg2;
- (id)genHeaderBtnWithContact:(id)arg1 appType:(unsigned int)arg2;
- (id)genNormalBtn:(id)arg1;
- (id)genboundaryLine:(struct CGSize)arg1;
- (id)setupMenuView:(float)arg1;
- (id)setupButtonsView;
- (float)endButtonGroups:(id)arg1 originY:(float)arg2;
- (float)addButtonToView:(id)arg1 button:(id)arg2 originY:(float)arg3;
- (void)setupContainerView;
- (void)setupMaskView;
- (void)setStyle:(int)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setDebugTitles:(id)arg1;
- (BOOL)isVisible;
- (void)dismissWithAnimation;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithUsrName:(id)arg1 orientation:(int)arg2 appType:(unsigned int)arg3 cancelButtonTitle:(id)arg4 buttonTitleArray:(id)arg5 delegate:(id)arg6;

@end

