//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCPayFaceHBItem : NSObject <PBCoding>
{
    BOOL _isLucky;
    NSString *msg;
    unsigned long createTime;
    unsigned long _uniqueID;
    NSString *_userName;
    NSString *_sendId;
    NSString *_nativeurl;
    NSString *_externMess;
    long long svrID;
    unsigned long long _money;
}

+ (void)initialize;
@property(nonatomic) BOOL isLucky; // @synthesize isLucky=_isLucky;
@property(retain, nonatomic) NSString *externMess; // @synthesize externMess=_externMess;
@property(nonatomic) unsigned long long money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *nativeurl; // @synthesize nativeurl=_nativeurl;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId=_sendId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) long long svrID; // @synthesize svrID;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
- (void).cxx_destruct;
- (void)parse;
- (id)initWithWrap:(id)arg1;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

