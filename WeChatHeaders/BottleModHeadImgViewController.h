//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImagePickerManagerDelegate.h"
#import "MMPickerViewDelegate.h"
#import "MMSightCameraViewControllerDelegate.h"
#import "MessageObserverDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class DelaySwitchSettingLogic, MMHeadImageView, MMLoadingView, MMTableView, NSString;

@interface BottleModHeadImgViewController : MMUIViewController <MMSightCameraViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, MessageObserverDelegate, MMPickerViewDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    MMTableView *m_tableView;
    MMHeadImageView *m_headImage;
    MMLoadingView *m_loadingView;
    unsigned long m_uiUploadHeadEventID;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

- (void).cxx_destruct;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeShowInMainFrameCell:(id)arg1;
- (void)showInMainFrame:(id)arg1;
- (void)setShowInMainFrameOpen:(BOOL)arg1 configType:(unsigned long)arg2 status:(unsigned long)arg3;
- (void)makeSetHeadImageCell:(id)arg1;
- (void)updateHead:(id)arg1;
- (id)getSettingHeadImage;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showChangeImg;
- (void)showImagePicker:(int)arg1;
- (id)getViewController;
- (void)handleImage:(id)arg1;
- (void)stopLoadingAndShowOK:(id)arg1;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)OnLeave:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

