//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCJdRemindItem : MMObject <PBCoding>
{
    unsigned long long ui64SvrMsgId;
    unsigned long uiBizType;
    NSString *nsActivityId;
    unsigned long uiExpireTime;
    unsigned long uiStartTime;
    unsigned long uiUrlExpireTime;
    unsigned long uiUrlStartTime;
    unsigned long uiTitleExpireTime;
    unsigned long uiTitleStartTime;
    BOOL bFindNeedShowRedDot;
    BOOL bCellShowRedDot;
    NSString *nsCellTitle;
    NSString *nsTitle;
    NSString *nsIcon;
    NSString *nsPushContent;
    NSString *nsJumpUrl;
    NSString *nsAlertViewWording;
    NSString *nsConfirmWording;
    NSString *nsCancelWording;
    BOOL bHasRead;
}

+ (void)initialize;
@property(nonatomic) unsigned long uiTitleExpireTime; // @synthesize uiTitleExpireTime;
@property(nonatomic) unsigned long uiTitleStartTime; // @synthesize uiTitleStartTime;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle;
@property(retain, nonatomic) NSString *nsIcon; // @synthesize nsIcon;
@property(nonatomic) unsigned long uiUrlExpireTime; // @synthesize uiUrlExpireTime;
@property(nonatomic) unsigned long uiUrlStartTime; // @synthesize uiUrlStartTime;
@property(nonatomic) unsigned long uiStartTime; // @synthesize uiStartTime;
@property(nonatomic) BOOL bHasRead; // @synthesize bHasRead;
@property(retain, nonatomic) NSString *nsCancelWording; // @synthesize nsCancelWording;
@property(retain, nonatomic) NSString *nsConfirmWording; // @synthesize nsConfirmWording;
@property(retain, nonatomic) NSString *nsAlertViewWording; // @synthesize nsAlertViewWording;
@property(retain, nonatomic) NSString *nsJumpUrl; // @synthesize nsJumpUrl;
@property(retain, nonatomic) NSString *nsPushContent; // @synthesize nsPushContent;
@property(retain, nonatomic) NSString *nsCellTitle; // @synthesize nsCellTitle;
@property(nonatomic) BOOL bCellShowRedDot; // @synthesize bCellShowRedDot;
@property(nonatomic) BOOL bFindNeedShowRedDot; // @synthesize bFindNeedShowRedDot;
@property(nonatomic) unsigned long uiExpireTime; // @synthesize uiExpireTime;
@property(retain, nonatomic) NSString *nsActivityId; // @synthesize nsActivityId;
@property(nonatomic) unsigned long uiBizType; // @synthesize uiBizType;
@property(nonatomic) unsigned long long ui64SvrMsgId; // @synthesize ui64SvrMsgId;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
