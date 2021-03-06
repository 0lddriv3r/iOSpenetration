//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImageCropperDelegate.h"
#import "MMImagePreviewBrowserControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMAlbum, MMAssetPickerControllerProxyObject, MMAssetPickerControllerProxyObjectForAllAsset, MMAssetPickerSendButton, MMAssetSelectedCollectionView, MMTableView, NSMutableArray, NSString, UIButton, UIImageView;

@interface MMAssetPickerController : MMUIViewController <UIViewControllerPreviewingDelegate, MMImageCropperDelegate, WCActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, MMImagePreviewBrowserControllerDelegate>
{
    NSMutableArray *_imageDictionaries;
    UIImageView *_bottomBar;
    UIButton *_previewButton;
    float _realBottomBarHeight;
    BOOL _isOriginalImageForSend;
    BOOL _needThumbImage;
    int _compressType;
    unsigned int _colNum;
    id <UIViewControllerPreviewing> _previewingContext;
    MMAssetPickerSendButton *m_sendButton;
    UIButton *m_originImageCheck;
    MMAssetSelectedCollectionView *m_selectedCollectionView;
    BOOL _m_isJustReturnMMAsset;
    BOOL _m_hasClickSendButton;
    id <MMAssetPickerControllerDelegate> _m_delegate;
    id <MMImagePickerControlCenter> _controlCenter;
    MMTableView *_tableView;
    MMAlbum *_m_album;
    NSMutableArray *_selectedAssetInfos;
    MMAssetPickerControllerProxyObject *_m_proxyPreviewObject;
    MMAssetPickerControllerProxyObjectForAllAsset *_m_proxyPreviewObjectForAllAsset;
    unsigned int _m_adjustRevertIndex;
}

@property(nonatomic) unsigned int m_adjustRevertIndex; // @synthesize m_adjustRevertIndex=_m_adjustRevertIndex;
@property(retain, nonatomic) MMAssetPickerControllerProxyObjectForAllAsset *m_proxyPreviewObjectForAllAsset; // @synthesize m_proxyPreviewObjectForAllAsset=_m_proxyPreviewObjectForAllAsset;
@property(retain, nonatomic) MMAssetPickerControllerProxyObject *m_proxyPreviewObject; // @synthesize m_proxyPreviewObject=_m_proxyPreviewObject;
@property(retain, nonatomic) NSMutableArray *selectedAssetInfos; // @synthesize selectedAssetInfos=_selectedAssetInfos;
@property(nonatomic) BOOL m_hasClickSendButton; // @synthesize m_hasClickSendButton=_m_hasClickSendButton;
@property(nonatomic) BOOL m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset=_m_isJustReturnMMAsset;
@property(retain, nonatomic) MMAlbum *m_album; // @synthesize m_album=_m_album;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(nonatomic) __weak id <MMAssetPickerControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)OnCompressedSuccess:(id)arg1;
- (void)OnCompressEnd;
- (void)OnCompressBegin;
- (BOOL)getPickerWAVideoCompressedFromOptionObj;
- (unsigned int)getPickerSceneFromOptionObj;
- (CDUnknownBlockType)getVideoExportCallbackBlockWithAsset:(id)arg1 URL:(id)arg2 noCompress:(BOOL)arg3 exifLogInfo:(id)arg4;
- (void)compressVideo:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)sendVideoWithDraft:(id)arg1;
- (void)sendVideoWithURL:(id)arg1;
- (struct CGRect)assetViewFrameGlobal:(id)arg1;
- (int)indexInSelectedAssetInfosForAssetInfo:(id)arg1;
- (void)onOriginImageCheckChanged;
- (void)onMoveSelectedInfo:(id)arg1 toIndex:(unsigned int)arg2;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned int)arg2;
- (void)onRemoveSelectedInfo:(id)arg1;
- (void)onFinishEditAssetInfo:(id)arg1;
- (void)sendImageFromScene:(int)arg1;
- (void)postProcessImages;
- (void)processingImage;
- (void)stopLoadingAfterSent;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)assetsForIndexPath:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)adjustTableViewInitOffset;
- (void)addOutterSelectInfo;
- (void)OnBack:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)OnPreview:(id)arg1;
- (void)onQuit;
- (void)onOriginImageCheck:(id)arg1;
- (void)editPhoto:(id)arg1 withScene:(int)arg2;
- (void)saveAsset:(BOOL)arg1;
- (void)saveEditedVideo;
- (void)saveEditedImage:(BOOL)arg1;
- (void)previewImageOfSelectedWithIndex:(unsigned long)arg1;
- (void)previewImageWithAssetInfo:(id)arg1;
- (void)preparePreviewImageWithAssetInfo:(id)arg1;
- (int)pickerScene;
- (void)reloadBottomBar;
- (void)reloadPhotoView;
- (void)fixOffset;
- (void)adjustSubviewRects;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)initBottomBar;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (unsigned int)selectedAssetInfosCount;
- (id)init;
- (id)initForJustReturnMMAsset:(BOOL)arg1 withAdjustRevertIndex:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

