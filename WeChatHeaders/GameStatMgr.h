//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSString;

@interface GameStatMgr : MMService <MMService, PBMessageObserverDelegate>
{
    unsigned long _networkType;
    NSString *_UUID;
    NSMutableDictionary *_gameLaunchTime;
    NSMutableDictionary *_gameDescSDK;
    BOOL _appInfoExtendLoaded;
    int _opTypeForClickInConversation;
    NSMutableDictionary *_dictScene2LayerID;
}

+ (id)genExternInfoWithNoticeID:(id)arg1 withNew:(BOOL)arg2 sourceScene:(int)arg3;
+ (id)genExternInfoWithNoticeID:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *dictScene2LayerID; // @synthesize dictScene2LayerID=_dictScene2LayerID;
@property(nonatomic) int opTypeForClickInConversation; // @synthesize opTypeForClickInConversation=_opTypeForClickInConversation;
@property(retain, nonatomic) NSMutableDictionary *gameDescSDK; // @synthesize gameDescSDK=_gameDescSDK;
@property(retain, nonatomic) NSMutableDictionary *gameLaunchTime; // @synthesize gameLaunchTime=_gameLaunchTime;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) unsigned long networkType; // @synthesize networkType=_networkType;
- (void).cxx_destruct;
- (void)statGameCenterClickWithFeedType:(id)arg1 scene:(int)arg2 opType:(int)arg3 noticeId:(id)arg4 withNew:(BOOL)arg5 sourceScene:(int)arg6 feedType:(unsigned long)arg7;
- (void)statGameCenterJsapiJump:(int)arg1 sourceScene:(int)arg2;
- (BOOL)writeToFile:(id)arg1 data:(id)arg2;
- (BOOL)loadAppInfoExtend;
- (void)saveAppInfoExtend;
- (id)convertStr:(id)arg1;
- (BOOL)isGameForStat:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)uploadGameReport:(unsigned long)arg1 withLogExt:(id)arg2;
- (void)statGameCenterAppstoreInfo:(id)arg1 productIdentifier:(id)arg2 errCode:(unsigned int)arg3;
- (void)statGameHallViewWithRedDotOrNew:(int)arg1 appID:(id)arg2 opType:(int)arg3 noticeID:(id)arg4;
- (void)statDiffAccountShare:(id)arg1 appID:(id)arg2 withOpID:(unsigned long)arg3;
- (void)gameStatReport:(id)arg1 scenc:(int)arg2 opType:(int)arg3 fromUsrName:(id)arg4 msgType:(unsigned long)arg5 msgID:(unsigned long)arg6 sourceScenc:(int)arg7 msgSubType:(unsigned long)arg8 giftId:(id)arg9 giftUrl:(id)arg10 extInfo:(id)arg11;
- (void)statGameCenterClickAddSubMsgType:(id)arg1 scenc:(int)arg2 opType:(int)arg3 fromUsrName:(id)arg4 msgType:(unsigned long)arg5 msgID:(unsigned long)arg6 sourceScenc:(int)arg7 msgSubType:(unsigned long)arg8 noticeID:(id)arg9;
- (void)statGameCenterClick:(id)arg1 scenc:(int)arg2 opType:(int)arg3 fromUsrName:(id)arg4 msgType:(unsigned long)arg5 msgID:(unsigned long)arg6 sourceScenc:(int)arg7;
- (void)statGameCenterClickSimpleWithExternField:(id)arg1 scenc:(int)arg2 opType:(int)arg3 msgType:(unsigned long)arg4 noticeID:(id)arg5 withNew:(BOOL)arg6;
- (void)statGameCenterClickSimpleWithExternField:(id)arg1 scenc:(int)arg2 opType:(int)arg3 noticeID:(id)arg4 withNew:(BOOL)arg5;
- (void)statGameCenterClickSimpleWithExternField:(id)arg1 scenc:(int)arg2 opType:(int)arg3 noticeID:(id)arg4 withNew:(BOOL)arg5 sourceScene:(int)arg6 WithDownloadType:(unsigned int)arg7 WithIsSubscribed:(BOOL)arg8;
- (void)statGameCenterClickSimpleWithExternField:(id)arg1 scenc:(int)arg2 opType:(int)arg3 noticeID:(id)arg4 withNew:(BOOL)arg5 sourceScene:(int)arg6;
- (void)statGameCenterClickSimple:(id)arg1 scenc:(int)arg2 opType:(int)arg3;
- (void)statGameCenterClickWithExtInfo:(id)arg1 scenc:(int)arg2 opType:(int)arg3 fromUsrName:(id)arg4 msgType:(unsigned long)arg5 msgID:(unsigned long)arg6 sourceScenc:(int)arg7 extInfo:(id)arg8;
- (void)statGameDetailView:(id)arg1 sourceScene:(int)arg2;
- (void)statGameSettingDetailView:(id)arg1 isReceived:(BOOL)arg2;
- (void)statDeleteMsgInConversation:(id)arg1;
- (void)statRefuseMsgInGameSettingView:(id)arg1 isReceived:(BOOL)arg2;
- (void)statRefuseMsgInConversation:(id)arg1 isReceived:(BOOL)arg2;
- (void)statLoadMoreGameMsgs;
- (void)statTimeLinePlaySight:(id)arg1 opType:(int)arg2 ExternInfo:(id)arg3;
- (void)statClickTimeLineTail:(id)arg1 opType:(int)arg2 ExternInfo:(id)arg3 SceneType:(int)arg4;
- (void)statClickTimeLineMessage:(id)arg1 isSource:(BOOL)arg2;
- (void)statClickInConversation:(id)arg1 isSource:(BOOL)arg2 ExternInfo:(id)arg3;
- (void)statShowInAD:(id)arg1 index:(unsigned int)arg2;
- (void)statShowConversation:(id)arg1;
- (void)statShowTimeLineMessage:(id)arg1;
- (void)statGameStartShare:(id)arg1 mediaTagName:(id)arg2 scene:(int)arg3;
- (void)endStatAppInfoExtend;
- (void)statAppInfoExtend:(id)arg1 withLaunchTime:(id)arg2 withAppDescSDK:(id)arg3;
- (void)startStatAppInfoExtend;
- (void)initScene2LayerID;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
