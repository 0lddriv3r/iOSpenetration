//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "EditImageWidgetToolDelegate.h"
#import "MosaicToolDelegate.h"

@class CALayer, EditImageCropOverlayView, EditImageDeleteBarView, EditImageScrollView, EditImageWidgetTool, MMTimer, NSArray, NSMutableArray, NSString, UIColor, UIImage, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface EditImageView : UIImageView <MosaicToolDelegate, EditImageWidgetToolDelegate>
{
    struct CGPoint firstTouchPoint;
    struct CGPoint p2Location;
    struct CGPoint p1Location;
    struct CGPoint cLocation;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_blankGesture;
    BOOL _canZoom;
    BOOL _canDraw;
    unsigned int _mosaicStyle;
    MMTimer *_timer;
    MMTimer *_finishDrawingTimer;
    MMTimer *_checkEventTimer;
    BOOL _hasOriginalImage;
    float _originalWaitingTime;
    float colorPointMapWidth;
    float colorPointMapHeight;
    char *colorPointMap;
    CDUnknownBlockType _completion;
    BOOL isCropped;
    unsigned long undoCount;
    unsigned long editEntrance;
    BOOL isRotated;
    UIImageView *imageView;
    NSArray *_viewSeq;
    float _checkEventTimerLimit;
    BOOL _isNeedRedrawMosaicImage;
    BOOL _willSetImageLayer;
    BOOL _didSetImageLayer;
    BOOL __isBeforeMosaicTool;
    BOOL _hasTapForDraw;
    NSMutableArray *_drawLayerArray;
    NSMutableArray *_drawLayerBufferArray;
    EditImageScrollView *_delegate;
    float _lineWidth;
    UIColor *_lineColor;
    int _toolType;
    CALayer *_drawLayer;
    UIImage *_foregroundImage;
    UIImage *_backupImage;
    id <EditImageToolDelegate> _currentTool;
    id _mosaicImage;
    NSMutableArray *_textViewArray;
    NSMutableArray *_drawViewWidgetArray;
    NSMutableArray *_drawViewPenArray;
    NSMutableArray *_drawViewMosaicArray;
    NSMutableArray *_drawViewCropArray;
    NSMutableArray *_drawHierarchyViewArray;
    UIImageView *_imgColorView;
    EditImageCropOverlayView *_overlayView;
    EditImageDeleteBarView *_deleteBar;
    NSMutableArray *_drawRevertArray;
    EditImageWidgetTool *_highlightWidgetTool;
    UIImageView *_penView;
    UIImageView *_mosaicView;
    UIView *_tempMosaicView;
    UIView *_tempPenView;
    NSMutableArray *_undoViewPenArray;
    NSMutableArray *_undoViewMosaicArray;
    struct CGPath *__drawPath;
    UIView *__superView;
    unsigned int _lineStyle;
    struct CGRect _startImageFrame;
    struct CGRect _editViewFrame;
}

@property(nonatomic) unsigned int lineStyle; // @synthesize lineStyle=_lineStyle;
@property(nonatomic) BOOL hasTapForDraw; // @synthesize hasTapForDraw=_hasTapForDraw;
@property(nonatomic) struct CGRect editViewFrame; // @synthesize editViewFrame=_editViewFrame;
@property(nonatomic) __weak UIView *_superView; // @synthesize _superView=__superView;
@property(nonatomic) BOOL _isBeforeMosaicTool; // @synthesize _isBeforeMosaicTool=__isBeforeMosaicTool;
@property(nonatomic) struct CGPath *_drawPath; // @synthesize _drawPath=__drawPath;
@property(retain, nonatomic) NSMutableArray *_undoViewMosaicArray; // @synthesize _undoViewMosaicArray;
@property(retain, nonatomic) NSMutableArray *_undoViewPenArray; // @synthesize _undoViewPenArray;
@property(retain, nonatomic) UIView *_tempPenView; // @synthesize _tempPenView;
@property(retain, nonatomic) UIView *_tempMosaicView; // @synthesize _tempMosaicView;
@property(retain, nonatomic) UIImageView *_mosaicView; // @synthesize _mosaicView;
@property(retain, nonatomic) UIImageView *_penView; // @synthesize _penView;
@property(retain, nonatomic) EditImageWidgetTool *_highlightWidgetTool; // @synthesize _highlightWidgetTool;
@property(retain, nonatomic) NSMutableArray *_drawRevertArray; // @synthesize _drawRevertArray;
@property(retain, nonatomic) EditImageDeleteBarView *_deleteBar; // @synthesize _deleteBar;
@property(retain, nonatomic) EditImageCropOverlayView *_overlayView; // @synthesize _overlayView;
@property(retain, nonatomic) UIImageView *_imgColorView; // @synthesize _imgColorView;
@property(retain, nonatomic) NSMutableArray *_drawHierarchyViewArray; // @synthesize _drawHierarchyViewArray;
@property(retain, nonatomic) NSMutableArray *_drawViewCropArray; // @synthesize _drawViewCropArray;
@property(retain, nonatomic) NSMutableArray *_drawViewMosaicArray; // @synthesize _drawViewMosaicArray;
@property(retain, nonatomic) NSMutableArray *_drawViewPenArray; // @synthesize _drawViewPenArray;
@property(retain, nonatomic) NSMutableArray *_drawViewWidgetArray; // @synthesize _drawViewWidgetArray;
@property(retain, nonatomic) NSMutableArray *_textViewArray; // @synthesize _textViewArray;
@property(retain, nonatomic) id _mosaicImage; // @synthesize _mosaicImage;
@property(retain, nonatomic) id <EditImageToolDelegate> _currentTool; // @synthesize _currentTool;
@property(nonatomic) BOOL _didSetImageLayer; // @synthesize _didSetImageLayer;
@property(nonatomic) BOOL _willSetImageLayer; // @synthesize _willSetImageLayer;
@property(retain, nonatomic) UIImage *_backupImage; // @synthesize _backupImage;
@property(retain, nonatomic) UIImage *_foregroundImage; // @synthesize _foregroundImage;
@property(retain, nonatomic) CALayer *_drawLayer; // @synthesize _drawLayer;
@property(nonatomic) BOOL _isNeedRedrawMosaicImage; // @synthesize _isNeedRedrawMosaicImage;
@property(nonatomic) int _toolType; // @synthesize _toolType;
@property(retain, nonatomic) UIColor *_lineColor; // @synthesize _lineColor;
@property(nonatomic) float _lineWidth; // @synthesize _lineWidth;
@property(nonatomic) struct CGRect _startImageFrame; // @synthesize _startImageFrame;
@property(nonatomic) __weak EditImageScrollView *_delegate; // @synthesize _delegate;
@property(retain, nonatomic) NSMutableArray *_drawLayerBufferArray; // @synthesize _drawLayerBufferArray;
@property(retain, nonatomic) NSMutableArray *_drawLayerArray; // @synthesize _drawLayerArray;
- (void).cxx_destruct;
- (id)mosaicImage;
- (id)getCurrentTool;
- (void)setToolType:(int)arg1;
- (id)colorOfPoint:(struct CGPoint)arg1;
- (void)setColorPointMap:(id)arg1;
- (id)transToMosaicImage:(id)arg1 blockLevel:(unsigned int)arg2;
- (BOOL)checkWhetherEdited;
- (void)revertViewToBegining;
- (void)onClickCancelBtn;
- (void)trueClickDoneBtn;
- (void)timerTrigger:(id)arg1;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (void)genEditedImageWithOriginalSize;
- (void)genEditedImageWithCurrentSize;
- (void)genLastEditView;
- (void)renderLayerInContext;
- (void)checkWidgetOutside:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)checkZoomInterruptDraw;
- (void)checkInitialDraw;
- (void)finishDrawingTriggerEvent;
- (void)resetFinishDrawingTimer;
- (void)finishDrawing;
- (void)startDrawing;
- (void)addNewSubview:(id)arg1;
- (BOOL)alreadyHasSubviews;
- (void)setDeleteBarHidden:(BOOL)arg1;
- (void)changeMosaicStyle:(unsigned int)arg1;
- (void)changeLineWidth:(float)arg1;
- (void)changeLineColor:(id)arg1;
- (void)didSelectEmotion:(id)arg1 withEmotionMd5:(id)arg2;
- (void)useImageTool:(int)arg1;
- (int)checkToolType;
- (void)redo;
- (void)undo;
- (void)undoMosaic;
- (void)undoPen;
- (BOOL)canRedo;
- (BOOL)canMosaicUndo;
- (BOOL)canPenUndo;
- (void)scrollViewDidEndZoom;
- (void)scrollViewDidZoom;
- (void)scrollViewDidScroll;
- (BOOL)canZoom;
- (void)loadOriginalImage:(id)arg1 withImageData:(id)arg2;
- (void)loadImage:(id)arg1 withDrawLayerArray:(id)arg2 withEditEntrance:(unsigned long)arg3;
- (void)reloadImage:(BOOL)arg1;
- (void)reloadViews:(BOOL)arg1;
- (void)addNewWidget:(id)arg1;
- (void)removeSubview:(id)arg1;
- (float)scrollViewZoomScale;
- (void)reloadAllWidgetFrame;
- (void)widgetToolBecomeFirstResponder:(id)arg1;
- (void)updateViewIndex;
- (void)bringWidgetviewBack:(id)arg1;
- (void)bringWidgetviewToFront:(id)arg1;
- (void)endGesture:(id)arg1;
- (void)startGesture;
- (void)triggerTimer;
- (void)cancelTimer;
- (void)startTimer;
- (BOOL)findGestureWidget:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)genCacheImage;
- (void)initDrawViewArrayAndHierarchyArray:(id)arg1;
- (void)dealloc;
- (void)reloadDeleteBar;
- (void)initDeleteBar;
- (id)initWithEditViewFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

