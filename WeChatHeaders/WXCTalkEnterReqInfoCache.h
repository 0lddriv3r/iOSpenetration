//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface WXCTalkEnterReqInfoCache : NSObject
{
    BOOL _isFrequentEnter;
    NSString *_svrGroupId;
    unsigned long _roomId;
    int _enterType;
    NSData *_reqData;
    unsigned long long _roomKey;
}

@property(nonatomic) BOOL isFrequentEnter; // @synthesize isFrequentEnter=_isFrequentEnter;
@property(retain, nonatomic) NSData *reqData; // @synthesize reqData=_reqData;
@property(nonatomic) int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned long long roomKey; // @synthesize roomKey=_roomKey;
@property(nonatomic) unsigned long roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *svrGroupId; // @synthesize svrGroupId=_svrGroupId;
- (void).cxx_destruct;
- (void)dealloc;

@end
