//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface WAConfigInfo : NSObject <WCTTableCoding>
{
    NSString *appID;
    unsigned long type;
    unsigned long version;
    NSData *configData;
    unsigned long updateTime;
}

+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)configData;
+ (const struct WCTProperty *)version;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)appID;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned long updateTime; // @synthesize updateTime;
@property(retain, nonatomic) NSData *configData; // @synthesize configData;
@property(nonatomic) unsigned long version; // @synthesize version;
@property(nonatomic) unsigned long type; // @synthesize type;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
