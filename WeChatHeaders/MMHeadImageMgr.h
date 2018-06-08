//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "HeadImgDelegate.h"
#import "IBottleContactMgrExt.h"
#import "IClearDataMgrExt.h"
#import "IContactMgrExt.h"
#import "INewSyncExt.h"
#import "IStrangerBrandContactHeadImageExt.h"
#import "IStrangerContactMgrExt.h"
#import "MMService.h"
#import "WAContactMgrExtension.h"

@class CUploadHDHeadImg, MMHeadImageCacher, MMHeadImageDownloader, NSString;

@interface MMHeadImageMgr : MMService <HeadImgDelegate, IContactMgrExt, IBottleContactMgrExt, IStrangerContactMgrExt, IStrangerBrandContactHeadImageExt, WAContactMgrExtension, IClearDataMgrExt, INewSyncExt, MMService>
{
    MMHeadImageCacher *_headImgCacher;
    MMHeadImageDownloader *_headImgDownloader;
    CUploadHDHeadImg *_headImgUploader;
}

+ (id)getUsrHeadImgForLogin:(id)arg1;
+ (id)tryGenHQImage:(id)arg1;
+ (id)resizeImage:(id)arg1;
+ (BOOL)isKFName:(id)arg1;
+ (BOOL)isGoogleName:(id)arg1;
+ (BOOL)isMobileName:(id)arg1;
+ (id)amendHeadImgIfNeed:(id)arg1;
+ (id)getPluginImage:(id)arg1;
+ (id)getDefaultHeadImage:(id)arg1;
+ (id)getRoundImgDirectoryPath;
+ (id)getOldHeadImgPathForLoginUsr:(id)arg1 isHD:(BOOL)arg2;
+ (id)getHeadImgRootDirectoryPath;
+ (id)getHeadImgDirectoryPath:(unsigned char)arg1;
+ (id)getHeadImgPathForNewVersionForLoadImage:(id)arg1 forCategory:(unsigned char)arg2 isHD:(BOOL)arg3 forLogin:(BOOL)arg4;
+ (id)getHeadImgPathForNewVersionForLoadImage:(id)arg1 forCategory:(unsigned char)arg2 isHD:(BOOL)arg3;
+ (id)getHeadImgPathForNewVersion:(id)arg1 forCategory:(unsigned char)arg2 isHD:(BOOL)arg3;
+ (id)getHeadImgPathForOldVersion:(id)arg1 isHD:(BOOL)arg2;
- (void).cxx_destruct;
- (void)internalUpdateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3;
- (void)internalUpdateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (BOOL)checkIsNeedUpdateBrandIcon:(id)arg1 isHeadImgExistedInLocal:(BOOL)arg2;
- (BOOL)checkIsNeedUpdateKFBrandHeadImg:(id)arg1 isHeadImgExistedInLocal:(BOOL)arg2;
- (BOOL)checkIsNeedUpdateEnterpriseHeadImg:(id)arg1 isHeadImgExistedInLocal:(BOOL)arg2;
- (BOOL)checkIsNeedUpdateHeadImg:(id)arg1 isHeadImgExistedInLocal:(BOOL)arg2;
- (BOOL)isMobileName:(id)arg1;
- (BOOL)checkIsNeedUpdate:(id)arg1 category:(unsigned char)arg2 isHeadImgExistedInLocal:(BOOL)arg3;
- (void)handleModUserImg:(id)arg1;
- (void)onNewSyncModUserImage:(id)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned long)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)onStrangerBrandHeadImageURLChange:(id)arg1;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onDeleteWeAppContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyBottleContact:(id)arg1;
- (void)onBrandContactHeadImageURLChange:(id)arg1;
- (void)onModifyContactHeadImage:(id)arg1;
- (void)onGetUsrImage:(id)arg1 Status:(id)arg2 Image:(id)arg3 Category:(unsigned char)arg4;
- (void)notifyHeadImageChange:(id)arg1;
- (BOOL)isNeedAutoUpdateHeadImgForUsr:(id)arg1;
- (void)setDownloadCommonMode;
- (void)setDownloadFastMode;
- (void)deleteHeadImageForBrand:(id)arg1;
- (void)deleteUsrHeadImg:(id)arg1;
- (BOOL)isNeedGetHDImg:(id)arg1;
- (BOOL)isUploadIngHeadImg;
- (unsigned long)uploadHDBottleImg:(id)arg1;
- (unsigned long)uploadHDHeadImg:(id)arg1 qualityType:(unsigned long)arg2;
- (unsigned long)uploadHDHeadImg:(id)arg1;
- (unsigned long)downloadHDHeadImg:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (unsigned long)downloadHDHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (void)fixSelfHeadImgByLocalImg;
- (void)cancelDownloadRequest:(id)arg1;
- (BOOL)createEmptyUsrImgInLocal:(id)arg1;
- (BOOL)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(BOOL)arg4 forceReload:(BOOL)arg5 saveAsTemp:(BOOL)arg6;
- (BOOL)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(BOOL)arg4 forceReload:(BOOL)arg5;
- (BOOL)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(BOOL)arg4;
- (BOOL)saveUsrImgToLocal:(id)arg1 withFile:(id)arg2 forCategory:(unsigned char)arg3 isHD:(BOOL)arg4;
- (void)forceUpdatrUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3 isHeadImgExistedInLocal:(BOOL)arg4;
- (void)forceUpdatrUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2 isHeadImgExistedInLocal:(BOOL)arg3;
- (void)updateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3 isHeadImgExistedInLocal:(BOOL)arg4;
- (void)updateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2 isHeadImgExistedInLocal:(BOOL)arg3;
- (void)updateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3;
- (void)updateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (id)getOriginalHDHeadImg:(id)arg1 withCategory:(unsigned char)arg2;
- (BOOL)isHeadImgExistInLocal:(id)arg1 isHD:(BOOL)arg2;
- (BOOL)isHeadImgExistInLocal:(id)arg1;
- (id)getRoundImage:(id)arg1 size:(struct CGSize)arg2 cornerSize:(unsigned long)arg3 withCategory:(unsigned char)arg4;
- (id)getRoundImage:(id)arg1 size:(struct CGSize)arg2 withCategory:(unsigned char)arg3;
- (id)getOriginalHeadImage:(id)arg1 withCategory:(unsigned char)arg2;
- (id)getHeadImageWithUseScene:(id)arg1 withScene:(unsigned char)arg2 withCategory:(unsigned char)arg3 retHeadImgIsExistedLocal:(char *)arg4;
- (id)getHeadImage:(id)arg1 withCategory:(unsigned char)arg2;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (BOOL)onServiceMemoryWarning;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
