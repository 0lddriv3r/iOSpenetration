//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChatRoomMemMsgDataLogic : NSObject
{
    NSString *m_nsChatName;
    NSString *m_nsMemName;
    id <ChatRoomMemMsgDataLogicDelegate> m_delegate;
    unsigned long m_uiFromID;
    unsigned long m_uiCreateTime;
    unsigned long m_uiLeftCount;
}

- (void).cxx_destruct;
- (void)getMsgsLimit:(int)arg1;
- (BOOL)isMsgMatch:(id)arg1;
- (id)initWithChat:(id)arg1 memName:(id)arg2 delegate:(id)arg3;

@end

