//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact;

@interface RoomReportController : NSObject
{
    CContact *m_oChatContact;
    unsigned int m_uiStayTime;
    unsigned int m_uiUnReadCount;
    unsigned int m_uiReceiveCount;
    unsigned int m_uiSendCount;
    struct timeval m_tvStart;
    BOOL m_bReport;
    BOOL m_bStart;
    BOOL m_bShowUnreadTip;
    BOOL m_bClickUnreadTip;
}

- (void).cxx_destruct;
- (void)report;
- (void)report:(BOOL)arg1;
- (void)onClickUnreadTip;
- (void)setHasShowUnreadTip;
- (void)addMsg:(id)arg1;
- (unsigned long)getStayTime;
- (void)setStartTime;
- (void)willTerminate:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)dealloc;
- (id)initWithChatContact:(id)arg1 UnReadCount:(unsigned int)arg2;

@end

