//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDownloadImageExt.h"
#import "IMsgExt.h"
#import "IRecordDownloadExt.h"

@class CMessageWrap, NSString;

@interface MsgDataDownloadLogic : NSObject <IMsgExt, IDownloadImageExt, IRecordDownloadExt>
{
    CMessageWrap *m_msgWrap;
    id <MsgDataDownloadDelegate> _delegate;
}

@property(nonatomic) __weak id <MsgDataDownloadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnRecordMessageDownloadOK:(id)arg1;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadForSaveAlbumFail:(id)arg1 Expired:(BOOL)arg2;
- (void)OnDownloadImageStop:(id)arg1;
- (void)OnDownloadImageStopByChatName:(id)arg1 FromDelMsg:(BOOL)arg2;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnMsgDownloadVideoCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)dealloc;
- (void)stopDownload;
- (BOOL)startDownloadMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

