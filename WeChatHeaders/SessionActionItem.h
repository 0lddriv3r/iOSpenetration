//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface SessionActionItem : MMObject <PBCoding>
{
    BOOL bNotifyOpen;
    unsigned long uiEnterTime;
    unsigned long uiStayTime;
    unsigned long uiSessionType;
    unsigned long uiMemberCount;
    unsigned long uiUnreadCount;
    unsigned long uiStayWebViewTime;
    NSString *nsUserName;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *nsUserName; // @synthesize nsUserName;
@property(nonatomic) unsigned long uiStayWebViewTime; // @synthesize uiStayWebViewTime;
@property(nonatomic) unsigned long uiUnreadCount; // @synthesize uiUnreadCount;
@property(nonatomic) BOOL bNotifyOpen; // @synthesize bNotifyOpen;
@property(nonatomic) unsigned long uiMemberCount; // @synthesize uiMemberCount;
@property(nonatomic) unsigned long uiSessionType; // @synthesize uiSessionType;
@property(nonatomic) unsigned long uiStayTime; // @synthesize uiStayTime;
@property(nonatomic) unsigned long uiEnterTime; // @synthesize uiEnterTime;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

