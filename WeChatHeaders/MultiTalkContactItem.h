//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class MultiTalkMemberList, NSString;

@interface MultiTalkContactItem : MMObject <WCTTableCoding>
{
    BOOL isAutoIncrement;
    unsigned int localID;
    NSString *groupID;
    NSString *clientGroupID;
    NSString *wxGroupID;
    int routID;
    MultiTalkMemberList *contactMemberList;
    NSString *createUserName;
    NSString *nickName;
    unsigned int memberListCount;
    long long lastInsertedRowID;
}

+ (const struct WCTProperty *)memberListCount;
+ (const struct WCTProperty *)nickName;
+ (const struct WCTProperty *)createUserName;
+ (const struct WCTProperty *)contactMemberList;
+ (const struct WCTProperty *)routID;
+ (const struct WCTProperty *)wxGroupID;
+ (const struct WCTProperty *)clientGroupID;
+ (const struct WCTProperty *)groupID;
+ (const struct WCTProperty *)localID;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) unsigned int memberListCount; // @synthesize memberListCount;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName;
@property(retain, nonatomic) MultiTalkMemberList *contactMemberList; // @synthesize contactMemberList;
@property(nonatomic) int routID; // @synthesize routID;
@property(retain, nonatomic) NSString *wxGroupID; // @synthesize wxGroupID;
@property(retain, nonatomic) NSString *clientGroupID; // @synthesize clientGroupID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)checkHasActiveMember;
- (BOOL)isContactItemValid;
- (id)getContactDisplayName;
- (void)dealloc;

@end
