//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt.h"
#import "ShareFavoritesConfirmLogicHelperDelegate.h"
#import "WCShareAuthViewControllerDelegate.h"

@class AppCommunicateData, NSString, ShareFavoritesConfirmLogicHelper, UINavigationController;

@interface SendAppMsgToFavoritesHandler : MMObject <WCShareAuthViewControllerDelegate, ShareFavoritesConfirmLogicHelperDelegate, IPreEnterWechatLogicExt>
{
    NSString *_appId;
    NSString *_bundleId;
    AppCommunicateData *_appData;
    ShareFavoritesConfirmLogicHelper *_shareHelper;
    UINavigationController *_m_navigationController;
}

@property(retain, nonatomic) UINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
- (void).cxx_destruct;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)doAppAuth;
- (void)removeFavSourcePathFileWithDataList:(id)arg1;
- (void)OnShareFavoritesItemCancel:(id)arg1;
- (void)OnShareFavoritesItemFail:(id)arg1 WithError:(int)arg2;
- (void)OnShareFavoritesItemOK:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)sendFavoritesWithComunicateData:(id)arg1;
- (id)sendFavoritesFileWithComunicateData:(id)arg1;
- (id)sendFavoritesFeedWithComunicateData:(id)arg1;
- (id)sendFavoritesVideoWithComunicateData:(id)arg1;
- (id)sendFavoritesMusicWithComunicateData:(id)arg1;
- (id)sendFavoritesPhotoWithComunicateData:(id)arg1;
- (id)sendFavoritesTextWithComunicateData:(id)arg1;
- (void)saveData:(id)arg1 ToFile:(id)arg2;
- (void)removeConfirmView;
- (void)clearAllHandleAndReturn3rdApp:(BOOL)arg1;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (void)cancelSendAppMsgToFavorites;
- (void)sendAppMsgToFavorites:(id)arg1 bundleId:(id)arg2 withData:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
