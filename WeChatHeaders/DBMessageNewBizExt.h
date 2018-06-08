//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface DBMessageNewBizExt : NSObject <WCTTableCoding>
{
    NSString *_chatUsername;
    unsigned long _msgLocalId;
    unsigned long _msgType;
    unsigned long _msgInnerType;
    NSString *_bizId;
    unsigned long _status;
    unsigned long _invalidTime;
    unsigned long _msgExtColInt1;
    unsigned long _msgExtColInt2;
    NSString *_msgExtColString1;
    NSString *_msgExtColString2;
}

+ (const struct WCTProperty *)msgExtColString2;
+ (const struct WCTProperty *)msgExtColString1;
+ (const struct WCTProperty *)msgExtColInt2;
+ (const struct WCTProperty *)msgExtColInt1;
+ (const struct WCTProperty *)invalidTime;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)bizId;
+ (const struct WCTProperty *)msgInnerType;
+ (const struct WCTProperty *)msgType;
+ (const struct WCTProperty *)msgLocalId;
+ (const struct WCTProperty *)chatUsername;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *msgExtColString2; // @synthesize msgExtColString2=_msgExtColString2;
@property(retain, nonatomic) NSString *msgExtColString1; // @synthesize msgExtColString1=_msgExtColString1;
@property(nonatomic) unsigned long msgExtColInt2; // @synthesize msgExtColInt2=_msgExtColInt2;
@property(nonatomic) unsigned long msgExtColInt1; // @synthesize msgExtColInt1=_msgExtColInt1;
@property(nonatomic) unsigned long invalidTime; // @synthesize invalidTime=_invalidTime;
@property(nonatomic) unsigned long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) unsigned long msgInnerType; // @synthesize msgInnerType=_msgInnerType;
@property(nonatomic) unsigned long msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned long msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *chatUsername; // @synthesize chatUsername=_chatUsername;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

