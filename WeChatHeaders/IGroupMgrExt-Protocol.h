//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class BaseResponse, BaseResponseErrMsg, ChatRoomDetail, CreateChatRoomResponse, NSArray, NSObject, NSString, OplogErrMsg;

@protocol IGroupMgrExt

@optional
- (void)OnApproveChatRoomInvitation:(NSString *)arg1 ErrorInfo:(BaseResponseErrMsg *)arg2 Success:(BOOL)arg3 withUserData:(NSObject *)arg4;
- (void)OnSetChatRoomAccessType:(NSString *)arg1 Type:(unsigned long)arg2 ErrorInfo:(OplogErrMsg *)arg3 Success:(BOOL)arg4;
- (void)OnSetChatRoomTopic:(NSString *)arg1 ErrorInfo:(OplogErrMsg *)arg2 Success:(BOOL)arg3;
- (void)OnSetChatRoomDesc:(NSString *)arg1 Desc:(ChatRoomDetail *)arg2 Error:(BaseResponse *)arg3;
- (void)OnGetChatRoomInfo:(NSString *)arg1 Info:(ChatRoomDetail *)arg2;
- (void)OnChangeChatRoomOwner:(NSString *)arg1 NewOwner:(NSString *)arg2 Success:(BOOL)arg3;
- (void)OnInviteChatRoomMember:(NSString *)arg1 Ret:(int)arg2 Error:(BaseResponseErrMsg *)arg3 withUserData:(NSObject *)arg4;
- (void)OnChatRoomContactUpdateOK:(NSString *)arg1;
- (void)OnChatRoomUpgrade:(NSString *)arg1 rspCode:(int)arg2 restQuota:(unsigned long)arg3 maxCount:(unsigned long)arg4;
- (void)OnPersonalInfoVerified:(int)arg1;
- (void)OnSetChatRoomVerifyStutas:(NSString *)arg1 isOpen:(BOOL)arg2 rspCode:(int)arg3;
- (void)OnGetChatRoomUpgradeStatus:(unsigned long)arg1 quota:(unsigned long)arg2 maxCount:(unsigned long)arg3;
- (void)OnChangeMemberVerifyStatus:(NSString *)arg1;
- (void)OnChangeMemberShowDisplayName:(NSString *)arg1;
- (void)OnChangeMemberDisplayName:(NSString *)arg1;
- (void)OnDelGroupMember:(NSString *)arg1 withResult:(unsigned long)arg2 memberList:(NSArray *)arg3 errTip:(NSString *)arg4;
- (void)OnQuitGroup:(NSString *)arg1;
- (void)OnChangeGroup:(NSString *)arg1;
- (void)OnAddGroupMember:(NSString *)arg1 withStatus:(unsigned long)arg2 memberList:(NSArray *)arg3 inviteList:(NSArray *)arg4 Error:(BaseResponseErrMsg *)arg5;
- (void)OnCreateGroup:(NSString *)arg1 withStatus:(long)arg2 resp:(CreateChatRoomResponse *)arg3;
@end
