//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIButton;

@interface H5GameScrollActionSheet : UIView <UIScrollViewDelegate>
{
    unsigned int _columnOrRowCount;
    NSArray *_dataAry;
    UIView *_containerView;
    UIButton *_transparentBgBtn;
    int _lastOrientation;
    BOOL _isLandScape;
    BOOL _bOrientationLocked;
    id <H5GameScrollActionSheetDelegate> _delegate;
}

@property(nonatomic) __weak id <H5GameScrollActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didRotate:(id)arg1;
- (void)onEmptyPlaceTap:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void)showInView:(id)arg1;
- (void)setupTransparentView;
- (void)onMenuButtonClicked:(id)arg1;
- (id)getMenuButton:(id)arg1;
- (void)setupScrollViewPortrait;
- (void)setupScrollViewLanscape;
- (void)setupScrollViews;
- (void)setupContainerView;
- (void)setupColorfulBar;
- (BOOL)isSupportVisualEffect;
- (void)dealloc;
- (id)initWithItems:(id)arg1 OrientatioinLocked:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
