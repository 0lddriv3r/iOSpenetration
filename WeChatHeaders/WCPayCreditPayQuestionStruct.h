//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayCreditPayQuestionStruct : NSObject
{
    unsigned long m_uiSelected;
    NSString *m_nsParentID;
    NSString *m_nsQuestionID;
    NSString *m_nsQuestion;
    NSString *m_nsAnswer;
    NSString *m_nsTips;
    unsigned long m_uiMaxLength;
    BOOL m_bUsed;
    BOOL m_bSelect;
    BOOL m_bTwoLevel;
}

@property(nonatomic) BOOL m_bUsed; // @synthesize m_bUsed;
@property(nonatomic) unsigned long m_uiMaxLength; // @synthesize m_uiMaxLength;
@property(retain, nonatomic) NSString *m_nsTips; // @synthesize m_nsTips;
@property(retain, nonatomic) NSString *m_nsAnswer; // @synthesize m_nsAnswer;
@property(retain, nonatomic) NSString *m_nsQuestion; // @synthesize m_nsQuestion;
@property(retain, nonatomic) NSString *m_nsQuestionID; // @synthesize m_nsQuestionID;
@property(retain, nonatomic) NSString *m_nsParentID; // @synthesize m_nsParentID;
@property(nonatomic) unsigned long m_uiSelected; // @synthesize m_uiSelected;
@property(nonatomic) BOOL m_bTwoLevel; // @synthesize m_bTwoLevel;
@property(nonatomic) BOOL m_bSelect; // @synthesize m_bSelect;
- (void).cxx_destruct;
- (void)dealloc;

@end
