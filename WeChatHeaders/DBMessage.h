//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface DBMessage : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement;
    unsigned long _version;
    unsigned long _msgLocalId;
    unsigned long _createTime;
    NSString *_message;
    unsigned long _status;
    unsigned long _imageStatus;
    unsigned long _type;
    unsigned long _des;
    long long lastInsertedRowID;
    long long _msgServerId;
}

+ (const struct WCTProperty *)des;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)imageStatus;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)message;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)msgServerId;
+ (const struct WCTProperty *)msgLocalId;
+ (const struct WCTProperty *)version;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned long des; // @synthesize des=_des;
@property(nonatomic) unsigned long type; // @synthesize type=_type;
@property(nonatomic) unsigned long imageStatus; // @synthesize imageStatus=_imageStatus;
@property(nonatomic) unsigned long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned long msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned long version; // @synthesize version=_version;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;

@end
