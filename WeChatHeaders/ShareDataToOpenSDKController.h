//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IShareTo3rdAppSettingViewControllerExt.h"
#import "IWCLanDeviceMsgForwardMgrExt.h"
#import "MMShareActionSheetDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"

@class CMessageWrap, MMShareActionSheet, MMShareActionSheetSection, NSArray, NSMutableDictionary, NSString, ShareTo3rdAppSettingViewController, UIDocumentInteractionController, UIView, UIViewController, WCDataItem;

@interface ShareDataToOpenSDKController : MMObject <MMShareActionSheetDelegate, IWCLanDeviceMsgForwardMgrExt, IShareTo3rdAppSettingViewControllerExt, UIDocumentInteractionControllerDelegate>
{
    MMShareActionSheet *m_shareSheet;
    MMShareActionSheetSection *m_deviceSheetSection;
    MMShareActionSheetSection *m_3rdAppSection;
    UIViewController *fromViewController;
    CMessageWrap *m_oMessageWrap;
    WCDataItem *m_oDataItem;
    NSString *m_nsUsrName;
    NSString *_tmpFilePath;
    NSString *_tmpFileName;
    NSMutableDictionary *m_shareStateMap;
    NSArray *m_arrLanDevices;
    UIDocumentInteractionController *m_vcDocument;
    ShareTo3rdAppSettingViewController *_appSettingVC;
    id <ShareDataToOpenSDKControllerDelegate> m_delegate;
    int m_opScene;
    UIView *m_viewToShow;
}

+ (BOOL)canSendTo3rdAppWithMessageWrap:(id)arg1;
+ (id)shareInstance;
@property(nonatomic) __weak UIView *m_viewToShow; // @synthesize m_viewToShow;
@property(nonatomic) int m_opScene; // @synthesize m_opScene;
@property(nonatomic) __weak id <ShareDataToOpenSDKControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onActionSheetConfirmCancel;
- (id)itemForLanDevice:(id)arg1;
- (void)onWCLanDeviceForwardMsgProgressUpdate:(float)arg1 toDevice:(id)arg2;
- (void)onWCLanDeviceForwardMsgFinishedWithErrCode:(int)arg1 toDevice:(id)arg2;
- (void)onWCLanDeviceFoundDeviceListUpdated:(id)arg1;
- (void)onShouldReloadView;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)OnOpenByApp:(id)arg1;
- (id)copyFileToTmpPathAndRetPath:(id)arg1;
- (id)GetFilePath;
- (BOOL)hasMessageTypeSupportOpenBySystem;
- (BOOL)actionSheetShouldCancel:(id)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 didSelectWithItem:(id)arg2 atSection:(id)arg3;
- (void)shareTimeLineToOpenSDKByDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)shareMsgToOpenSDKByMessageWrap:(id)arg1 withSessionUserName:(id)arg2 fromViewController:(id)arg3;
- (id)make3rdAppSection;
- (id)getCurrentVC;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

