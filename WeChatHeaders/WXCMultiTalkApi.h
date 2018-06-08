//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WXCMultiTalkApi : NSObject
{
}

+ (id)sharedInstance;
- (int)setNeedBigVideo:(BOOL)arg1 forUser:(id)arg2;
- (BOOL)requestActiveGroupBriefInfoList:(id)arg1;
- (id)genMultiTalkClientGroupId;
- (BOOL)resumeFriendOrSendPokerToFriend;
- (BOOL)reawakeFriendOrSendPokerToFriend:(id)arg1 friendUserName:(id)arg2 extData:(id)arg3;
- (BOOL)isMultiTalkWorking;
- (BOOL)holdMultiTalk:(BOOL)arg1 holdType:(int)arg2;
- (id)getMemberQualityInfoList:(id)arg1;
- (id)getTalkIngMember:(id)arg1;
- (BOOL)handleMultiTalkNotFriendNotify:(id)arg1;
- (BOOL)handleMultiTalkBanner:(id)arg1 WxGroupId:(id)arg2;
- (BOOL)handleMultiTalkNotify:(id)arg1;
- (BOOL)handleMultiTalkResp:(int)arg1 seq:(int)arg2 data:(id)arg3;
- (void)setOpenLog:(BOOL)arg1 logLevel:(int)arg2;
- (void)setMultiTalkSpeaker:(BOOL)arg1;
- (int)VideoEncAndSend:(char *)arg1 Length:(unsigned long)arg2 Format:(void *)arg3 resolutionMode:(int)arg4 cameraMode:(int)arg5;
- (void)closeMultiTalkVideo;
- (void)subscribeLargeVideoForUser:(id)arg1 isCancel:(BOOL)arg2;
- (void)setMultiTalkVideo:(BOOL)arg1;
- (void)setMultiTalkMute:(BOOL)arg1;
- (BOOL)modifyCustomGroupName:(id)arg1 grpName:(id)arg2;
- (BOOL)rejectMultiTalk:(id)arg1;
- (BOOL)exitMultiTalk:(id)arg1;
- (BOOL)addMultiTalkMember:(id)arg1 wxGroupId:(id)arg2 addMemberList:(id)arg3;
- (BOOL)enterMultiTalkFromBanner:(id)arg1 routId:(int)arg2 roomId:(unsigned int)arg3 roomKey:(unsigned long long)arg4;
- (BOOL)enterMultiTalk:(id)arg1 routId:(int)arg2 isAnswerCall:(BOOL)arg3;
- (BOOL)createMultiTalk:(id)arg1 wxGroupId:(id)arg2 memberList:(id)arg3;
- (BOOL)unInit;
- (void)setMultiTalkInfo:(id)arg1 uin:(long)arg2;
- (BOOL)init:(id)arg1 wxDelegate:(id)arg2;
- (id)init;

@end

