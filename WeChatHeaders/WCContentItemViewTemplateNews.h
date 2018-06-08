//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "MMWebViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCCanvasPageViewControllerDelegate.h"
#import "WCForceTouchPreviewProtocol.h"
#import "WCImageViewDelegate.h"

@class MMImageGridView, NSString, UIImageView, UILabel;

@interface WCContentItemViewTemplateNews : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, UIAlertViewDelegate, WCImageViewDelegate, MMWebViewDelegate, UIGestureRecognizerDelegate, WCForceTouchPreviewProtocol>
{
    MMImageGridView *_imageGridView;
    UIImageView *_defaultImageView;
    UILabel *_titleLabel;
    UIImageView *_originIconView;
    UIImageView *_coverIconView;
    UILabel *_descLabel;
    float _targetMargin;
    float _targetWidth;
}

+ (float)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
+ (id)getTrimDesc:(id)arg1;
@property(nonatomic) float targetWidth; // @synthesize targetWidth=_targetWidth;
@property(nonatomic) float targetMargin; // @synthesize targetMargin=_targetMargin;
- (void).cxx_destruct;
- (void)reportLinkAdClickWithActionType:(int)arg1;
- (void)onCloseCanvasPageView;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (BOOL)canPeek;
- (void)throwUrlMessage;
- (void)setNonInteractive;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)dealloc;
- (void)onClickWCImage:(id)arg1;
- (void)layoutSubviews;
- (void)cancelNotShowTheUrlAgain;
- (void)confirmNotShowTheUrlAgain;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onTryNotShowTheUrlAgain:(id)arg1;
- (void)onLongTouch;
- (void)onShareToOpenSDK:(id)arg1;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
