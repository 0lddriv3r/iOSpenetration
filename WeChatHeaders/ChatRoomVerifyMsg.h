//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChatRoomVerifyMsg : NSObject
{
    unsigned long createTime;
    unsigned long msgSvrID;
    NSString *chatRoomName;
    NSString *inviterName;
    NSString *inviterNickName;
    unsigned long scene;
    NSString *desc;
    NSString *ticket;
    NSString *userName;
    NSString *userNickName;
    NSString *country;
    NSString *province;
    NSString *city;
    NSString *hdHeadImgUrl;
    NSString *headImgUrl;
    NSString *sign;
    NSString *weibo;
    NSString *weiboNickname;
    unsigned long albumFlag;
    unsigned long albumStyle;
    NSString *albumBgId;
    unsigned long snsFlag;
    NSString *snsBgId;
    unsigned long snsBgObjId;
    BOOL isRead;
    BOOL isVerified;
    unsigned long snsObjId;
}

+ (void)initialize;
@property(nonatomic) unsigned long snsObjId; // @synthesize snsObjId;
@property(retain, nonatomic) NSString *snsBgId; // @synthesize snsBgId;
@property(nonatomic) unsigned long snsFlag; // @synthesize snsFlag;
@property(retain, nonatomic) NSString *albumBgId; // @synthesize albumBgId;
@property(nonatomic) unsigned long albumStyle; // @synthesize albumStyle;
@property(nonatomic) unsigned long albumFlag; // @synthesize albumFlag;
@property(retain, nonatomic) NSString *weiboNickname; // @synthesize weiboNickname;
@property(retain, nonatomic) NSString *weibo; // @synthesize weibo;
@property(retain, nonatomic) NSString *sign; // @synthesize sign;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl;
@property(retain, nonatomic) NSString *hdHeadImgUrl; // @synthesize hdHeadImgUrl;
@property(retain, nonatomic) NSString *city; // @synthesize city;
@property(retain, nonatomic) NSString *province; // @synthesize province;
@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(retain, nonatomic) NSString *userNickName; // @synthesize userNickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) BOOL isVerified; // @synthesize isVerified;
@property(nonatomic) BOOL isRead; // @synthesize isRead;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(nonatomic) unsigned long scene; // @synthesize scene;
@property(retain, nonatomic) NSString *inviterNickName; // @synthesize inviterNickName;
@property(retain, nonatomic) NSString *inviterName; // @synthesize inviterName;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName;
@property(nonatomic) unsigned long msgSvrID; // @synthesize msgSvrID;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

