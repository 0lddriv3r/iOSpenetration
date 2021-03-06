//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMAssetPickerControllerExt.h"
#import "UIAlertViewDelegate.h"
#import "WCForceTouchPreviewProtocol.h"

@class MMAssetInfo, MMAssetPickerController, MMAssetSelectCheckButton, NSString, UIImageView, UILabel, UIView;

@interface MMAssetView : MMUIView <MMAssetPickerControllerExt, UIAlertViewDelegate, WCForceTouchPreviewProtocol>
{
    BOOL m_isSelected;
    BOOL m_isPreviewStyle;
    UIView *m_disabledMaskView;
    UIView *m_tagBackgroundView;
    UILabel *m_lengthLabel;
    UIView *m_videoLogoView;
    UILabel *m_gifLogoView;
    UIView *m_editImageView;
    MMAssetSelectCheckButton *m_selectCheckButton;
    BOOL _enabled;
    MMAssetInfo *_assetInfo;
    id <MMImagePickerControlCenter> _controlCenter;
    MMAssetPickerController *_parent;
    UIImageView *_m_assetImageView;
}

@property(retain, nonatomic) UIImageView *m_assetImageView; // @synthesize m_assetImageView=_m_assetImageView;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak MMAssetPickerController *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
- (void).cxx_destruct;
- (void)onAssetPickerControllerFinishEditAssetInfo:(id)arg1;
- (void)onAssetPickerControllerChangeSelectInfosOrder;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(int)arg2;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (BOOL)canPeek;
- (id)timeStringBySeconds:(double)arg1;
- (BOOL)checkThumbImage;
- (void)doSelect;
- (void)doSelectWithStateInfo:(id)arg1;
- (void)tryToSelectGifWithImage:(id)arg1 imageData:(id)arg2;
- (void)tryToSelectVideoWithAvAsset:(id)arg1 videoUrl:(id)arg2;
- (void)tryToSelectAsset;
- (void)tagAseetToPreview;
- (void)toggleSelection;
- (void)showedSelectedMarkWithIndex:(int)arg1 animated:(BOOL)arg2;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)accessibilityPerformMagicTap;
- (void)updateEnabledState;
- (void)showEditedLogoView;
- (void)showGifLogoView;
- (void)showVideoLogoViewWithTime:(id)arg1;
- (void)showTagBGView;
- (float)tagLogoLBMargin;
- (void)changeToSmallPreviewStyle;
- (void)updateAssetInfo;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

