//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EditImageUIView.h"

#import "UIGestureRecognizerDelegate.h"

@class EditImageBorderView, EditImageModView, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;

@interface EditImageWidgetTool : EditImageUIView <UIGestureRecognizerDelegate>
{
    BOOL _activeTouches;
    unsigned long _gestureMonitor;
    BOOL _isPressing;
    float _swipeLength;
    float _viewScale;
    struct CGPoint _startPanGesturePoint;
    BOOL _hasSaveAttr;
    BOOL _isMoveToTop;
    EditImageModView *_saveView;
    BOOL _hasAddView;
    float _viewBorder;
    float _maxFrameScaleWhileSelect;
    BOOL _hasPreClicked;
    BOOL _isSpecialPaning;
    BOOL _isSelected;
    id <EditImageWidgetToolDelegate> _delegate;
    EditImageBorderView *_borderView;
    unsigned long _viewArrayIndex;
    float _screenScale;
    float _viewAngle;
    float _widgetScale;
    float _zoomScale;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotateGesture;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *_longPressGesture; // @synthesize _longPressGesture;
@property(retain, nonatomic) UIRotationGestureRecognizer *_rotateGesture; // @synthesize _rotateGesture;
@property(retain, nonatomic) UIPinchGestureRecognizer *_pinchGesture; // @synthesize _pinchGesture;
@property(retain, nonatomic) UITapGestureRecognizer *_tapGesture; // @synthesize _tapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *_panGesture; // @synthesize _panGesture;
@property(nonatomic) float _zoomScale; // @synthesize _zoomScale;
@property(nonatomic) float _widgetScale; // @synthesize _widgetScale;
@property(nonatomic) float _viewAngle; // @synthesize _viewAngle;
@property(nonatomic) float _screenScale; // @synthesize _screenScale;
@property(nonatomic) unsigned long _viewArrayIndex; // @synthesize _viewArrayIndex;
@property(retain, nonatomic) EditImageBorderView *_borderView; // @synthesize _borderView;
@property(nonatomic) float _viewScale; // @synthesize _viewScale;
@property(nonatomic) BOOL _isSelected; // @synthesize _isSelected;
@property(nonatomic) id <EditImageWidgetToolDelegate> _delegate; // @synthesize _delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setScreenCenter:(struct CGPoint)arg1;
- (BOOL)needHighQuality;
- (void)subclassReloadFrame;
- (void)subclassLargeTouchFrame;
- (float)widgetViewBorder;
- (float)widgetHeight;
- (float)widgetWidth;
- (BOOL)startEditingText;
- (float)maxFrameScaleWhileSelect;
- (float)maxScaleFactor;
- (float)originalScaleFactor;
- (void)judgeFromDeleteBar:(id)arg1;
- (void)reloadFrameWithZoomScale:(float)arg1;
- (void)reloadFrame;
- (void)largeTouchFrame;
- (void)hideBorderView;
- (void)showBorderView;
- (void)sendShowNilTextToolBorderViewToDelegate;
- (void)sendShowSelectedTextToolBorderViewToDelegate;
- (void)sendEndGestureToDelegate;
- (void)sendStartGestureToDelegate;
- (void)saveAttr;
- (void)endGesture;
- (void)startGesture;
- (void)forceCancelGesture;
- (void)handleRotateGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)initBorderView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

