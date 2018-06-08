//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class DownloadImageInfo, NSMutableArray;

@interface DownloadImageMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *m_arrQueue;
    DownloadImageInfo *m_oCurInfo;
}

@property(retain, nonatomic) DownloadImageInfo *m_oCurInfo; // @synthesize m_oCurInfo;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)DownloadFail:(long)arg1;
- (void)DownloadFail:(long)arg1 Expired:(BOOL)arg2;
- (void)HandleDownload:(id)arg1;
- (id)GetTempFilePath:(id)arg1;
- (id)GetFilePath:(id)arg1;
- (BOOL)StopImageDownloadTaskWithMsg:(id)arg1;
- (BOOL)IsDownloading:(id)arg1;
- (BOOL)CreateDownload;
- (BOOL)CreateImplGetImg:(id)arg1;
- (void)CheckQueue;
- (void)StopDownloadImage:(id)arg1;
- (void)StartDownloadImage:(id)arg1 HD:(BOOL)arg2;
- (void)RemoveInfoFromQueue:(id)arg1;
- (BOOL)CheckMsgIsInQueue:(id)arg1;
- (void)StopCurrentDownload;
- (void)dealloc;
- (id)init;

@end
