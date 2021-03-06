//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface LoginUserInfo : NSObject <PBCoding>
{
    BOOL m_bIsOpenVoicePrint;
    BOOL m_bIsOpenFace;
    NSString *m_nsUserName;
    NSString *m_nsLoginName;
    NSString *m_nsNickName;
    unsigned long m_uiBindAcountFlag;
    unsigned long m_uiLastLoginAcountType;
    NSString *m_nsPhoneNumber;
    NSString *m_nsNoPwdLoginTicket;
    NSData *m_dtAutoAuthKey;
    NSString *m_bindLoginUserName;
    unsigned long long m_ui64Uin;
}

+ (void)initialize;
@property(nonatomic) BOOL m_bIsOpenFace; // @synthesize m_bIsOpenFace;
@property(retain, nonatomic) NSString *m_bindLoginUserName; // @synthesize m_bindLoginUserName;
@property(retain, nonatomic) NSData *m_dtAutoAuthKey; // @synthesize m_dtAutoAuthKey;
@property(nonatomic) BOOL m_bIsOpenVoicePrint; // @synthesize m_bIsOpenVoicePrint;
@property(retain, nonatomic) NSString *m_nsNoPwdLoginTicket; // @synthesize m_nsNoPwdLoginTicket;
@property(retain, nonatomic) NSString *m_nsPhoneNumber; // @synthesize m_nsPhoneNumber;
@property(nonatomic) unsigned long m_uiLastLoginAcountType; // @synthesize m_uiLastLoginAcountType;
@property(nonatomic) unsigned long m_uiBindAcountFlag; // @synthesize m_uiBindAcountFlag;
@property(nonatomic) unsigned long long m_ui64Uin; // @synthesize m_ui64Uin;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsLoginName; // @synthesize m_nsLoginName;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
- (void).cxx_destruct;
- (id)getLastLoginName;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

