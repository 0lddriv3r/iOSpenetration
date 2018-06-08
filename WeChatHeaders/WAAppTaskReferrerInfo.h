//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSString;

@interface WAAppTaskReferrerInfo : NSObject
{
    NSString *_referrerAppID;
    unsigned int _referrerType;
    id _referrerData;
    unsigned int _operateScene;
    NSString *_pluginSDKAppID;
    unsigned long _originScene;
    CContact *_hostContact;
    NSString *_hostUserName;
    unsigned long _hostVersion;
    unsigned long _pluginSessionID;
}

@property(nonatomic) unsigned long pluginSessionID; // @synthesize pluginSessionID=_pluginSessionID;
@property(nonatomic) unsigned long hostVersion; // @synthesize hostVersion=_hostVersion;
@property(retain, nonatomic) NSString *hostUserName; // @synthesize hostUserName=_hostUserName;
@property(retain, nonatomic) CContact *hostContact; // @synthesize hostContact=_hostContact;
@property(nonatomic) unsigned long originScene; // @synthesize originScene=_originScene;
@property(retain, nonatomic) NSString *pluginSDKAppID; // @synthesize pluginSDKAppID=_pluginSDKAppID;
@property(nonatomic) unsigned int operateScene; // @synthesize operateScene=_operateScene;
@property(retain, nonatomic) id referrerData; // @synthesize referrerData=_referrerData;
@property(nonatomic) unsigned int referrerType; // @synthesize referrerType=_referrerType;
@property(retain, nonatomic) NSString *referrerAppID; // @synthesize referrerAppID=_referrerAppID;
- (void).cxx_destruct;
- (id)description;

@end

