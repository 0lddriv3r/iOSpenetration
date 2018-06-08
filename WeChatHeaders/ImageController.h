//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ImageBrowseDelegate.h"
#import "ImagePreviewDelegate.h"
#import "MMImagePickerManagerDelegate.h"
#import "MMSightCameraViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class CaptureVideoInfo, MMLoadingView, NSString, UINavigationController, UIViewController;

@interface ImageController : MMObject <MMSightCameraViewControllerDelegate, WCActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, ImagePreviewDelegate, ImageBrowseDelegate, MMImagePickerManagerDelegate, UIAlertViewDelegate>
{
    id <ImageControllerDelegate> m_delegate;
    CaptureVideoInfo *m_oVideoInfo;
    UINavigationController *m_oVideoPicker;
    MMLoadingView *m_loadingView;
    BOOL m_isJustReturnMMAsset;
}

@property(nonatomic) BOOL m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset;
@property(retain, nonatomic) UIViewController *m_oVideoPicker; // @synthesize m_oVideoPicker;
@property(retain, nonatomic) CaptureVideoInfo *m_oVideoInfo; // @synthesize m_oVideoInfo;
@property(nonatomic) __weak id <ImageControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(BOOL)arg3 isMuted:(BOOL)arg4 editVideoAttr:(id)arg5;
- (id)chatUserNameForSightStatistics;
- (void)downloadFailInImageBrowse;
- (void)Reset;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(BOOL)arg3 fromImagePicker:(id)arg4;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 fromImagePicker:(id)arg3;
- (void)didSelectImage:(id)arg1 fromImagePicker:(id)arg2;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(BOOL)arg3 ImageInfo:(id)arg4 fromImagePicker:(id)arg5;
- (void)didSelectMMAsset:(id)arg1 finish:(BOOL)arg2 fromImagePicker:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)statusBarShowOniOS10;
- (void)willPresentAlertView:(id)arg1;
- (void)handleVideo:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)SendImageWithURL:(id)arg1;
- (void)onSendCaptrueCancel:(id)arg1;
- (void)OpenCameraController;
- (void)OpenMediaBrowser;
- (void)showImagePicker:(int)arg1 useSightCamera:(BOOL)arg2 sightCameraMode:(unsigned int)arg3;
- (void)showImagePicker:(int)arg1;
- (id)getViewController;
- (void)initLoadingView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

