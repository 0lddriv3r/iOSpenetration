//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayBrandPrepayRequestStruct : NSObject
{
    NSString *appId;
    NSString *nonceStr;
    NSString *timestamp;
    NSString *package;
    NSString *paySign;
    NSString *signType;
    NSString *stepInURL;
    NSString *stepInAppUserName;
    unsigned long payChannel;
    NSString *extInfo;
    unsigned long payScene;
    unsigned long _payScene;
    unsigned long _weappEnterScene;
}

@property(nonatomic) unsigned long weappEnterScene; // @synthesize weappEnterScene=_weappEnterScene;
@property(nonatomic) unsigned long payScene; // @synthesize payScene=_payScene;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo;
@property(nonatomic) unsigned long payChannel; // @synthesize payChannel;
@property(retain, nonatomic) NSString *stepInURL; // @synthesize stepInURL;
@property(retain, nonatomic) NSString *stepInAppUserName; // @synthesize stepInAppUserName;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSString *signType; // @synthesize signType;
@property(retain, nonatomic) NSString *package; // @synthesize package;
@property(retain, nonatomic) NSString *paySign; // @synthesize paySign;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
- (void).cxx_destruct;
- (void)dealloc;

@end
