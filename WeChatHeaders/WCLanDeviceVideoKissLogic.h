//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCLanDeviceBaseKissLogic.h"

#import "ICdnComMgrExt.h"
#import "PBMessageObserverDelegate.h"
#import "WCFacadeExt.h"

@class CdnUploadTaskInfo, NSMutableArray, NSMutableDictionary, NSString, WCLanDeviceData;

@interface WCLanDeviceVideoKissLogic : WCLanDeviceBaseKissLogic <ICdnComMgrExt, PBMessageObserverDelegate, WCFacadeExt>
{
    NSMutableDictionary *m_sendTaskMap;
    WCLanDeviceData *m_deviceData;
    NSMutableArray *m_deviceWaitingUploadArray;
    CdnUploadTaskInfo *m_uploadInfo;
    BOOL m_isUploading;
    unsigned long m_uploadProgress;
    BOOL m_isDownloading;
    NSMutableArray *m_deviceWaitingDownloadArray;
}

- (void).cxx_destruct;
- (BOOL)isSightVideoExist;
- (BOOL)cancelTaskWithDevice:(id)arg1;
- (void)onKissDeviceProgressResponeWithProgress:(float)arg1 queueType:(unsigned int)arg2;
- (void)onKissDeviceResponseWithErrorCode:(unsigned int)arg1 queueType:(unsigned int)arg2;
- (void)onSendFileToWCLanDevice:(long long)arg1 Progress:(float)arg2 isFinish:(BOOL)arg3 ErrCode:(int)arg4;
- (void)kissDeviceWithJsonStr:(id)arg1 filePath:(id)arg2 device:(id)arg3;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (BOOL)stopUploadWithDevice:(id)arg1;
- (void)uploadDeviceData;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(int)arg3 total:(int)arg4;
- (BOOL)stopDownloadVideo:(id)arg1;
- (void)startDownloadVideo;
- (void)handleDeviceMsgTransferAppMsg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)sendVideoRequestWithDevice:(id)arg1 isTroughSever:(BOOL)arg2 fileInfo:(id)arg3 CdnUrl:(id)arg4;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(BOOL)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

