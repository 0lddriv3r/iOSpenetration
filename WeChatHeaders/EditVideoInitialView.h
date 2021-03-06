//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EditImageEmotionToolAttrDelegate.h"
#import "EditImageOperationDelegate.h"
#import "EditImagePenToolAttrDelegate.h"
#import "EditVideoCropViewDelegate.h"
#import "EditVideoLogicItemExt.h"
#import "IMMAssetICloudExt.h"
#import "IUiUtilExt.h"

@class AVAsset, EVVideoPreviewBrowserView, EditImageEmotionToolAttrView, EditImagePenToolAttrView, EditImageScrollView, EditVideoCropView, MMUIButton, MMUIImageView, NSString;

@interface EditVideoInitialView : MMUIView <EditImageEmotionToolAttrDelegate, EditVideoCropViewDelegate, EditVideoLogicItemExt, EditImageOperationDelegate, EditImagePenToolAttrDelegate, IUiUtilExt, IMMAssetICloudExt>
{
    EVVideoPreviewBrowserView *_videoPreview;
    EditImageScrollView *_eIScrollView;
    MMUIView *_topBarView;
    MMUIImageView *_topBackgroundView;
    MMUIButton *_cancelBtn;
    MMUIButton *_doneBtn;
    MMUIView *_bottomBarView;
    MMUIImageView *_bottomBackgroundView;
    MMUIButton *_penBtn;
    EditImagePenToolAttrView *_penAttrBar;
    MMUIButton *_emotionBtn;
    EditImageEmotionToolAttrView *_emotionAttrView;
    MMUIButton *_textBtn;
    MMUIButton *_cropBtn;
    EditVideoCropView *_cropAttrView;
    int _lastToolType;
    BOOL _isToolBarOccupy;
    float _lastScale;
    float _lastMinScale;
    float _lastMaxScale;
    struct CGSize _lastContentSize;
    struct CGPoint _lastContentOffset;
    float _previewLastScale;
    float _previewLastMinScale;
    float _previewLastMaxScale;
    struct CGSize _previewLastContentSize;
    struct CGPoint _previewLastContentOffset;
    BOOL _bCropping;
    BOOL _bIsCroped;
    AVAsset *avAsset;
    id <EditVideoInitialViewDelegate> delegate;
    unsigned int _entranceType;
}

@property(nonatomic) unsigned int entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) __weak id <EditVideoInitialViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset;
- (void).cxx_destruct;
- (void)onRestartVideoPlayAt:(double)arg1;
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)seekToTime:(double)arg1;
- (void)onEditSuccess:(BOOL)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (BOOL)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (BOOL)scrollViewDidZoom:(id)arg1;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (void)didSelectEmotion:(id)arg1 withMd5:(id)arg2;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)setSelectedLineStyle:(unsigned int)arg1;
- (void)undoPenEditImage;
- (void)setSelectedColorFromGradientBar:(id)arg1;
- (void)clearEmotionToolOperation;
- (void)onEmotionToolBarDoneBtnClicked:(BOOL)arg1;
- (void)startEmotionTool;
- (void)selectLastToolType;
- (void)updateToolBtns;
- (void)updateBtns;
- (void)onClickCropEdit:(id)arg1;
- (void)onClickTextEdit:(id)arg1;
- (void)onClickEmotionEdit:(id)arg1;
- (void)onClickPenEdit:(id)arg1;
- (void)onClickDone;
- (void)onClickCancel;
- (void)firstShowCrop;
- (void)layoutScrollView:(float)arg1;
- (void)showCropVideo:(BOOL)arg1;
- (void)easeInOutTopAndBottomBar:(BOOL)arg1;
- (void)setEmotionToolAttrViewHidden:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandler:(BOOL)arg1;
- (void)reloadBottomEditVideoBar;
- (void)reloadTopEditVideoBar;
- (void)reloadCropToolAttrBar;
- (void)reloadEmotionToolAttrBar;
- (void)reloadPenToolAttrBar;
- (void)initEditImageView;
- (void)initVideoPreview;
- (void)initCropToolAttrBar;
- (void)initCropBtn;
- (void)initTextToolAttrBar;
- (void)initEmotionToolAttrBar;
- (void)initEmotionBtn;
- (void)initPenToolAttrBar;
- (void)initBottomBar;
- (void)initTopBar;
- (void)initView;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (void)onEditVideo;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

