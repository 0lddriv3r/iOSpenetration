//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString, ShakeInfo;

@interface ShakeBgImgDownloadMgr : MMService <MMService, PBMessageObserverDelegate>
{
    ShakeInfo *m_oShakeInfo;
    unsigned long m_uiCurDownloadID;
    unsigned long m_uiCurTotalLen;
    unsigned long m_uiCurEventID;
    unsigned long m_uiCurDownloadCount;
}

@property(retain, nonatomic) ShakeInfo *m_oShakeInfo; // @synthesize m_oShakeInfo;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)DownloadBgImg:(unsigned long)arg1 TotalLen:(unsigned long)arg2;
- (void)CreateDownloadEvent;
- (void)AddShakeTimes:(unsigned long)arg1;
- (unsigned long)GetShakeBgImgID;
- (unsigned long)GetShakeTimes;
- (void)SaveShakeInfo;
- (void)LoadShakeInfo;
- (void)dealloc;
- (id)init;
- (void)ResetDownloadInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

