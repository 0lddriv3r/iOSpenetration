//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMCPUtil : NSObject
{
}

+ (BOOL)isWAMsgNodeUnsafeWithAppId:(id)arg1 debugMode:(unsigned int)arg2 widgetType:(unsigned int)arg3 version:(unsigned long long)arg4;
+ (id)cpKeyForWAMsgNodeAppId:(id)arg1 debugMode:(unsigned int)arg2 widgetType:(unsigned int)arg3 version:(unsigned long long)arg4;
+ (id)cpKeyForEmoticonMd5:(id)arg1;
+ (id)cpKeyForClientCheckCgiReportCalculateMd5;
+ (id)cpKeyForClientCheckKvReportCalculateMd5;
+ (BOOL)isWXPicConvertUnsafe:(id)arg1;
+ (id)cpKeyForWXPicConvert:(id)arg1;
+ (BOOL)isWebviewURLUnsafe:(id)arg1;
+ (id)cpKeyForWebviewURL:(id)arg1;
+ (BOOL)isWCTimeLineCommentUnsafe:(id)arg1;
+ (id)cpKeyForWCTimeLineComment:(id)arg1;
+ (BOOL)isWCTimeLineLikeUsersUnsafe:(id)arg1;
+ (id)cpKeyForWCTimeLineLikeUsers:(id)arg1;
+ (BOOL)isWCTimeLineContentUnsafe:(id)arg1;
+ (id)cpKeyForWCTimeLineContent:(id)arg1;
+ (BOOL)isChatRoomUnsafe:(id)arg1;
+ (BOOL)isChatRoomDisplayNameUnsafe:(id)arg1 userName:(id)arg2;
+ (id)cpKeyForChatRoomDisplayName:(id)arg1 userName:(id)arg2;
+ (BOOL)isMessageWrapUnsafe:(id)arg1;
+ (id)cpKeyForMessageWrap:(id)arg1;
+ (BOOL)isHelloMsgUnsafe:(id)arg1 content:(id)arg2;
+ (id)cpKeyForHelloMsg:(id)arg1 content:(id)arg2;
+ (BOOL)isSignatureUnsafe:(id)arg1;
+ (id)cpKeyForSignature:(id)arg1;
+ (BOOL)isHeadImageUnsafe:(id)arg1;
+ (id)cpKeyForHeadImage:(id)arg1;
+ (BOOL)isNicknameUnsafe:(id)arg1;
+ (id)cpKeyForNickname:(id)arg1;
+ (void)clearCrashCountWithKey:(id)arg1;
+ (void)decreaseCrashCountWithKey:(id)arg1;
+ (void)increaseCrashCountWithKey:(id)arg1;
+ (BOOL)isUnsafeWithKey:(id)arg1;

@end

