//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WCDBSessionLastTimeObject : NSObject <WCTTableCoding>
{
    NSString *m_sessionName;
    unsigned long m_sessionLastTime;
}

+ (const struct WCTProperty *)m_sessionLastTime;
+ (const struct WCTProperty *)m_sessionName;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned long m_sessionLastTime; // @synthesize m_sessionLastTime;
@property(retain, nonatomic) NSString *m_sessionName; // @synthesize m_sessionName;
- (void).cxx_destruct;
- (id)description;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

