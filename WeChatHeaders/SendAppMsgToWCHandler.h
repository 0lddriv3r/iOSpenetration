//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt.h"
#import "ShareUploadTaskConfirmLogicHelperDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCCommitViewResultDelegate.h"
#import "WCShareAuthViewControllerDelegate.h"

@class AppCommunicateData, NSString, ShareUploadTaskConfirmLogicHelper, UIAlertView, UINavigationController;

@interface SendAppMsgToWCHandler : MMObject <WCShareAuthViewControllerDelegate, ShareUploadTaskConfirmLogicHelperDelegate, UIAlertViewDelegate, IPreEnterWechatLogicExt, WCCommitViewResultDelegate>
{
    NSString *_appId;
    NSString *_bundleId;
    AppCommunicateData *_appData;
    ShareUploadTaskConfirmLogicHelper *_shareHelper;
    UINavigationController *m_confirmViewController;
    UIAlertView *_alertView;
    UINavigationController *_m_navigationController;
}

@property(retain, nonatomic) UINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
- (void).cxx_destruct;
- (void)removeAuthViewController;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)doAppAuth;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showAlertView;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)sendTimeLineWithComunicateData:(id)arg1 withAppID:(id)arg2;
- (void)closeConfirmView;
- (void)showConfirmView;
- (id)sendTimeLine3rdAppWithComunicateData:(id)arg1;
- (id)sendTimeLineFeedWithComunicateData:(id)arg1;
- (id)sendTimeLineVideoFileWithComunicateData:(id)arg1 withAppID:(id)arg2;
- (id)saveAndCheckVideoWithComunicateData:(id)arg1;
- (id)getTmpFilePathWithMP4Ext;
- (id)sendTimeLineVideoWithComunicateData:(id)arg1;
- (id)sendTimeLineMusicWithComunicateData:(id)arg1;
- (id)sendTimeLinePhotoWithComunicateData:(id)arg1;
- (id)sendTimeLineTextWithComunicateData:(id)arg1;
- (void)clearAllHandleAndReturn3rdApp:(int)arg1;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (void)cancelSendAppMsgToWC;
- (void)sendAppMsgToWC:(id)arg1 bundleId:(id)arg2 withData:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

