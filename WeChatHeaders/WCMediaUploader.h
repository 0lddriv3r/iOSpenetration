//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCUploader.h"

#import "ICdnComMgrExt.h"

@class CdnSnsTaskInfo, NSString, WCUploadMedia;

@interface WCMediaUploader : WCUploader <ICdnComMgrExt>
{
    int currentPos;
    int uploadResult;
    int uploadErrType;
    WCUploadMedia *m_media;
    id <WCMediaUploaderDelegate> m_delegate;
    CdnSnsTaskInfo *m_oCdnSnsTaskInfo;
    NSString *m_clientMediaID;
    BOOL m_useC2C;
    BOOL m_useWebp;
    BOOL m_useVCodec;
    BOOL m_useWxpc;
    unsigned long sightEventID;
    NSString *m_appID;
    int m_objectType;
}

@property(nonatomic) int m_objectType; // @synthesize m_objectType;
@property(retain, nonatomic) NSString *m_appID; // @synthesize m_appID;
@property(nonatomic) __weak id <WCMediaUploaderDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic, setter=setMedia:) WCUploadMedia *m_media; // @synthesize m_media;
- (void).cxx_destruct;
- (void)onResponse:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)onSetRequest:(id)arg1;
- (void)setFinished;
- (void)tryNextRequest;
- (void)OnCdnUpload:(id)arg1;
- (BOOL)isOverRoladRetCode:(int)arg1;
- (BOOL)startRequest;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
