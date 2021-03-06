//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface FavSearchItem : NSObject <WCTTableCoding>
{
    unsigned long localId;
    NSString *xml;
    NSString *searchStr;
    unsigned long status;
    long type;
    long subTypes;
    NSString *StrRes1;
}

+ (const struct WCTProperty *)StrRes1;
+ (const struct WCTProperty *)subTypes;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)searchStr;
+ (const struct WCTProperty *)xml;
+ (const struct WCTProperty *)localId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) long subTypes; // @synthesize subTypes;
@property(nonatomic) long type; // @synthesize type;
@property(nonatomic) unsigned long status; // @synthesize status;
@property(retain, nonatomic) NSString *searchStr; // @synthesize searchStr;
@property(retain, nonatomic) NSString *xml; // @synthesize xml;
@property(nonatomic) unsigned long localId; // @synthesize localId;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

