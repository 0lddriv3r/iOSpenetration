//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding.h"
#import "PBCoding.h"

@class NSDate, NSString;

@interface WCScheduleItem : MMObject <PBCoding, NSCoding>
{
    NSString *username;
    NSString *content;
    NSDate *date;
    unsigned long favId;
    unsigned long favLocalId;
    unsigned int type;
    NSString *_remindId;
    int _opType;
    long long mesSvrID;
}

+ (void)initialize;
@property(nonatomic) int opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSString *remindId; // @synthesize remindId=_remindId;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(nonatomic) unsigned long favLocalId; // @synthesize favLocalId;
@property(nonatomic) unsigned long favId; // @synthesize favId;
@property(retain, nonatomic) NSDate *date; // @synthesize date;
@property(nonatomic) long long mesSvrID; // @synthesize mesSvrID;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

