//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt.h"
#import "MsgDataDownloadDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CdnTaskInfo, MsgDataDownloadLogic, NSMutableArray, NSString;

@interface UploadImageCDNMgr : MMObject <MsgDataDownloadDelegate, ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray *m_arrQueue;
    CdnTaskInfo *m_oCurTaskInfo;
    id <UploadImageCDNMgrDelegate> m_delegate;
    MsgDataDownloadLogic *_msgDownloadLogic;
}

@property(retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic; // @synthesize msgDownloadLogic=_msgDownloadLogic;
@property(nonatomic) __weak id <UploadImageCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CdnTaskInfo *m_oCurTaskInfo; // @synthesize m_oCurTaskInfo;
- (void).cxx_destruct;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadAnyFail:(id)arg1;
- (void)startDownloadImage;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)CreateUploadEvent:(id)arg1 hitMd5:(BOOL)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)UploadFail:(long)arg1;
- (void)UploadOkByCdn:(id)arg1;
- (void)UploadOk:(id)arg1;
- (void)StopUploadImageByUsrName:(id)arg1;
- (void)StopUploadImage:(id)arg1;
- (void)StopCurUpload;
- (void)StartUploadImage:(id)arg1;
- (unsigned long)GetUploadPercent:(id)arg1;
- (BOOL)IsUploading:(id)arg1;
- (void)CheckQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

