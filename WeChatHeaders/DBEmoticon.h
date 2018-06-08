//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface DBEmoticon : NSObject <WCTTableCoding>
{
    NSString *_md5;
    NSString *_message;
    unsigned long _type;
    unsigned long _createTime;
    unsigned long _length;
    unsigned long _status;
    NSString *_catalog;
    unsigned long _catalogId;
    NSString *_draft;
    unsigned long _lastUsedTime;
    unsigned long _extFlag;
    unsigned long _indexInPack;
    NSString *_extInfo;
    NSString *_packageId;
    NSString *_ConStrRes3;
}

+ (const struct WCTProperty *)ConStrRes3;
+ (const struct WCTProperty *)packageId;
+ (const struct WCTProperty *)extInfo;
+ (const struct WCTProperty *)indexInPack;
+ (const struct WCTProperty *)extFlag;
+ (const struct WCTProperty *)lastUsedTime;
+ (const struct WCTProperty *)draft;
+ (const struct WCTProperty *)catalogId;
+ (const struct WCTProperty *)catalog;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)length;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)message;
+ (const struct WCTProperty *)md5;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3=_ConStrRes3;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned long indexInPack; // @synthesize indexInPack=_indexInPack;
@property(nonatomic) unsigned long extFlag; // @synthesize extFlag=_extFlag;
@property(nonatomic) unsigned long lastUsedTime; // @synthesize lastUsedTime=_lastUsedTime;
@property(retain, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(nonatomic) unsigned long catalogId; // @synthesize catalogId=_catalogId;
@property(retain, nonatomic) NSString *catalog; // @synthesize catalog=_catalog;
@property(nonatomic) unsigned long status; // @synthesize status=_status;
@property(nonatomic) unsigned long length; // @synthesize length=_length;
@property(nonatomic) unsigned long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
