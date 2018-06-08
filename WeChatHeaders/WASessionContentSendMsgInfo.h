//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface WASessionContentSendMsgInfo : NSObject
{
    NSString *_title;
    NSString *_path;
    NSString *_imageURL;
    NSData *_imageData;
    NSString *_appID;
    NSString *_userName;
    unsigned long _appVersion;
    unsigned long _appType;
}

@property(nonatomic) unsigned long appType; // @synthesize appType=_appType;
@property(nonatomic) unsigned long appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;

@end
