//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface VoipMinimizeReportObject : MMObject
{
    unsigned long m_clickMinimizeButtonTime;
    unsigned int m_clickMinimizeButtonCount;
    unsigned long m_startVoipTime;
}

@property(nonatomic) unsigned long m_startVoipTime; // @synthesize m_startVoipTime;
@property(nonatomic) unsigned int m_clickMinimizeButtonCount; // @synthesize m_clickMinimizeButtonCount;
@property(nonatomic) unsigned long m_clickMinimizeButtonTime; // @synthesize m_clickMinimizeButtonTime;
- (void)reportTotalMinimizeCountWithTotalTalkTime;
- (void)recordVoipStartTime;
- (void)reportMinimizeModeTimeForAudio;
- (void)reportMinimizeModeTimeForVideo;
- (void)reportIgnoreButtonClickForAudio;
- (void)reportIgnoreButtonClickForVideo;
- (void)reportMinimizeButtonClickForAudio;
- (void)reportMinimizeButtonClickForVideo;
- (id)init;

@end

