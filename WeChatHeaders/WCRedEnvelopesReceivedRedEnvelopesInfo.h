//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCRedEnvelopesReceivedRedEnvelopesInfo : NSObject
{
    NSString *m_nsSenderName;
    NSString *m_nsSenderHeadImg;
    long m_lReceiveAmount;
    unsigned long m_uiReceiveTime;
    NSString *m_nsReceiveTime;
    int m_enWCRedEnvelopesType;
    int m_enWCRedEnvelopesKind;
    NSString *m_nsReceiverID;
    NSString *m_nsSendID;
}

@property(nonatomic) int m_enWCRedEnvelopesKind; // @synthesize m_enWCRedEnvelopesKind;
@property(retain, nonatomic) NSString *m_nsSendID; // @synthesize m_nsSendID;
@property(retain, nonatomic) NSString *m_nsReceiveTime; // @synthesize m_nsReceiveTime;
@property(retain, nonatomic) NSString *m_nsReceiverID; // @synthesize m_nsReceiverID;
@property(nonatomic) unsigned long m_uiReceiveTime; // @synthesize m_uiReceiveTime;
@property(retain, nonatomic) NSString *m_nsSenderName; // @synthesize m_nsSenderName;
@property(retain, nonatomic) NSString *m_nsSenderHeadImg; // @synthesize m_nsSenderHeadImg;
@property(nonatomic) long m_lReceiveAmount; // @synthesize m_lReceiveAmount;
@property(nonatomic) int m_enWCRedEnvelopesType; // @synthesize m_enWCRedEnvelopesType;
- (void).cxx_destruct;

@end

