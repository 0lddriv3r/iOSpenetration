//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface DBContactMeta : NSObject <WCTTableCoding>
{
    NSString *_username;
    unsigned long _lastUpdate;
    unsigned long _flag;
    unsigned long _intCon2;
    unsigned long _intCon3;
    NSString *_strCon1;
    NSString *_strCon2;
    NSString *_strCon3;
}

+ (const struct WCTProperty *)strCon3;
+ (const struct WCTProperty *)strCon2;
+ (const struct WCTProperty *)strCon1;
+ (const struct WCTProperty *)intCon3;
+ (const struct WCTProperty *)intCon2;
+ (const struct WCTProperty *)flag;
+ (const struct WCTProperty *)lastUpdate;
+ (const struct WCTProperty *)username;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *strCon3; // @synthesize strCon3=_strCon3;
@property(retain, nonatomic) NSString *strCon2; // @synthesize strCon2=_strCon2;
@property(retain, nonatomic) NSString *strCon1; // @synthesize strCon1=_strCon1;
@property(nonatomic) unsigned long intCon3; // @synthesize intCon3=_intCon3;
@property(nonatomic) unsigned long intCon2; // @synthesize intCon2=_intCon2;
@property(nonatomic) unsigned long flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned long lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

