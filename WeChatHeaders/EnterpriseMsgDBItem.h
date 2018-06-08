//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface EnterpriseMsgDBItem : MMObject <WCTTableCoding>
{
    BOOL isAutoIncrement;
    unsigned long m_uiMesLocalId;
    unsigned long m_uiCreateTime;
    unsigned long m_uiDesc;
    unsigned long m_uiStatus;
    unsigned long m_uiImgStatus;
    NSString *m_nsMessage;
    unsigned long m_uiType;
    NSString *m_nsMsgSource;
    NSString *m_nsFromUsr;
    NSString *m_nsToUsr;
    NSString *m_nsBizChatId;
    NSString *m_nsRealChatUsr;
    NSString *m_nsPattern;
    unsigned long long m_ui64MesSvrId;
    long long lastInsertedRowID;
}

+ (const struct WCTProperty *)m_nsPattern;
+ (const struct WCTProperty *)m_nsRealChatUsr;
+ (const struct WCTProperty *)m_nsBizChatId;
+ (const struct WCTProperty *)m_nsToUsr;
+ (const struct WCTProperty *)m_nsFromUsr;
+ (const struct WCTProperty *)m_nsMsgSource;
+ (const struct WCTProperty *)m_uiType;
+ (const struct WCTProperty *)m_nsMessage;
+ (const struct WCTProperty *)m_uiImgStatus;
+ (const struct WCTProperty *)m_uiStatus;
+ (const struct WCTProperty *)m_uiDesc;
+ (const struct WCTProperty *)m_uiCreateTime;
+ (const struct WCTProperty *)m_uiMesLocalId;
+ (const struct WCTProperty *)m_ui64MesSvrId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
@property(retain, nonatomic) NSString *m_nsPattern; // @synthesize m_nsPattern;
@property(retain, nonatomic) NSString *m_nsRealChatUsr; // @synthesize m_nsRealChatUsr;
@property(retain, nonatomic) NSString *m_nsBizChatId; // @synthesize m_nsBizChatId;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;
@property(nonatomic) unsigned long m_uiType; // @synthesize m_uiType;
@property(retain, nonatomic) NSString *m_nsMessage; // @synthesize m_nsMessage;
@property(nonatomic) unsigned long m_uiImgStatus; // @synthesize m_uiImgStatus;
@property(nonatomic) unsigned long m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) unsigned long m_uiDesc; // @synthesize m_uiDesc;
@property(nonatomic) unsigned long m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned long m_uiMesLocalId; // @synthesize m_uiMesLocalId;
@property(nonatomic) unsigned long long m_ui64MesSvrId; // @synthesize m_ui64MesSvrId;
- (void).cxx_destruct;
- (int)compareMessageAscending:(id)arg1;

@end

