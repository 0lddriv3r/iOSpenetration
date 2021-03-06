//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WALocalStorageMainInfo : NSObject <WCTTableCoding>
{
    NSString *_appID;
    unsigned long _lastModifyTime;
    unsigned long long _storageLength;
}

+ (const struct WCTProperty *)lastModifyTime;
+ (const struct WCTProperty *)storageLength;
+ (const struct WCTProperty *)appID;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned long lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned long long storageLength; // @synthesize storageLength=_storageLength;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

