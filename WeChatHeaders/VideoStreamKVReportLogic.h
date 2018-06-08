//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, CdnDownloadTaskInfo, VideoStreamInfo, WCMediaItem;

@interface VideoStreamKVReportLogic : NSObject
{
    CMessageWrap *m_oMessageWrap;
    WCMediaItem *m_oMediaItem;
    struct C2CDownloadResult m_stResult;
    unsigned long m_uiPreloadStatus;
    float _m_fTotalPlayedDuration;
    long _m_siPlayErrorCode;
    unsigned long _m_uiBufferCount;
    VideoStreamInfo *_m_oVideoInfo;
    CdnDownloadTaskInfo *_m_oCdnDownloadTaskInfo;
    unsigned long _m_uiHasPreloadSize;
    double _m_tOnClickToStartTime;
    double _onToLeavePageTime;
    double _m_tStartDownloadTime;
    double _m_tOnMoovWaitTime;
    double _onGetFristPreDataTime;
    double _m_tFristPlayTime;
    unsigned long long _m_uTotalBufferTime;
}

@property(nonatomic) unsigned long m_uiHasPreloadSize; // @synthesize m_uiHasPreloadSize=_m_uiHasPreloadSize;
@property(retain, nonatomic) CdnDownloadTaskInfo *m_oCdnDownloadTaskInfo; // @synthesize m_oCdnDownloadTaskInfo=_m_oCdnDownloadTaskInfo;
@property(retain, nonatomic) VideoStreamInfo *m_oVideoInfo; // @synthesize m_oVideoInfo=_m_oVideoInfo;
@property(nonatomic) unsigned long long m_uTotalBufferTime; // @synthesize m_uTotalBufferTime=_m_uTotalBufferTime;
@property(nonatomic) unsigned long m_uiBufferCount; // @synthesize m_uiBufferCount=_m_uiBufferCount;
@property(nonatomic) long m_siPlayErrorCode; // @synthesize m_siPlayErrorCode=_m_siPlayErrorCode;
@property(nonatomic) double m_tFristPlayTime; // @synthesize m_tFristPlayTime=_m_tFristPlayTime;
@property(nonatomic) float m_fTotalPlayedDuration; // @synthesize m_fTotalPlayedDuration=_m_fTotalPlayedDuration;
@property(nonatomic) double onGetFristPreDataTime; // @synthesize onGetFristPreDataTime=_onGetFristPreDataTime;
@property(nonatomic) double m_tOnMoovWaitTime; // @synthesize m_tOnMoovWaitTime=_m_tOnMoovWaitTime;
@property(nonatomic) double m_tStartDownloadTime; // @synthesize m_tStartDownloadTime=_m_tStartDownloadTime;
@property(nonatomic) double onToLeavePageTime; // @synthesize onToLeavePageTime=_onToLeavePageTime;
@property(nonatomic) double m_tOnClickToStartTime; // @synthesize m_tOnClickToStartTime=_m_tOnClickToStartTime;
@property(nonatomic) unsigned long m_uiPreloadStatus; // @synthesize m_uiPreloadStatus;
@property(nonatomic) struct C2CDownloadResult m_stResult; // @synthesize m_stResult;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getIplist:(vector_36fe4106)arg1;
- (void)reportKVVideoArgsWithMessageWrap;
- (void)reportKVVideoArgsWithMediaItem;
- (void)reportKVVideoArgs;
- (void)logFeatureWithId:(unsigned long)arg1 Key:(unsigned long)arg2 value:(unsigned long)arg3 isImportant:(BOOL)arg4;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithMessageWrap:(id)arg1;
- (id)init;

@end

