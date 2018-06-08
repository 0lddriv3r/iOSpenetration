//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "EditImageOperationDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class EditImageView, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;

@interface EditImageScrollView : MMUIScrollView <UIScrollViewDelegate, EditImageOperationDelegate, UIGestureRecognizerDelegate>
{
    float _naturalTopLength;
    BOOL _isZooming;
    BOOL _isScrolling;
    unsigned long _gestureMonitor;
    float _minimunScaleWhenInit;
    id <EditImageOperationDelegate> m_delegate;
    EditImageView *oEditImageView;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotateGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    unsigned int _rotationOrientationOverall;
    float __lastScale;
    struct CGPoint __lastOffset;
    struct CGRect _imageFrame;
    struct CGRect _cropFrame;
    struct CGRect _initialFrame;
    struct CGRect __lastGridFrame;
    struct CGRect __lastCropFrame;
}

@property(nonatomic) struct CGRect _lastCropFrame; // @synthesize _lastCropFrame=__lastCropFrame;
@property(nonatomic) struct CGPoint _lastOffset; // @synthesize _lastOffset=__lastOffset;
@property(nonatomic) float _lastScale; // @synthesize _lastScale=__lastScale;
@property(nonatomic) struct CGRect _lastGridFrame; // @synthesize _lastGridFrame=__lastGridFrame;
@property(nonatomic) unsigned int _rotationOrientationOverall; // @synthesize _rotationOrientationOverall;
@property(retain, nonatomic) UILongPressGestureRecognizer *_longPressGesture; // @synthesize _longPressGesture;
@property(retain, nonatomic) UIRotationGestureRecognizer *_rotateGesture; // @synthesize _rotateGesture;
@property(retain, nonatomic) UIPinchGestureRecognizer *_pinchGesture; // @synthesize _pinchGesture;
@property(retain, nonatomic) UITapGestureRecognizer *_tapGesture; // @synthesize _tapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *_panGesture; // @synthesize _panGesture;
@property(nonatomic) struct CGRect _initialFrame; // @synthesize _initialFrame;
@property(nonatomic) struct CGRect _cropFrame; // @synthesize _cropFrame;
@property(nonatomic) struct CGRect _imageFrame; // @synthesize _imageFrame;
@property(retain, nonatomic) EditImageView *oEditImageView; // @synthesize oEditImageView;
@property(nonatomic) __weak id <EditImageOperationDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)deactivateCustomGestures;
- (void)activateCustomGestures;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)onClickCancelBtn;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (void)changeLineStyle:(unsigned int)arg1;
- (void)changeLineWidth:(float)arg1;
- (void)changeLineColor:(id)arg1;
- (void)useImageTool:(int)arg1;
- (int)checkToolType;
- (void)redo;
- (void)undoMosaic;
- (void)undoPen;
- (BOOL)canRedo;
- (BOOL)canMosaicUndo;
- (BOOL)canPenUndo;
- (void)cropImage:(struct CGRect)arg1;
- (void)adjustScroolViewToFreeContentInset;
- (void)adjustScrollViewContentInset;
- (void)adjustScrollViewZoomScale;
- (void)onImageRotatedByOrientation:(unsigned int)arg1;
- (void)loadOriginalImage:(id)arg1 withImageData:(id)arg2;
- (void)loadImage:(id)arg1 withDrawLayerArray:(id)arg2 withEditEntrance:(unsigned long)arg3;
- (void)reloadViews:(BOOL)arg1;
- (void)initGestures;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
