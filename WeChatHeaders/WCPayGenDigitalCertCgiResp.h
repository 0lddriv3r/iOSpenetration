//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface WCPayGenDigitalCertCgiResp : NSObject
{
    unsigned long _m_wxErrorType;
    NSString *_m_wxErrorMsg;
    NSString *_m_crtCrt;
    NSString *_m_crtNo;
    unsigned long _m_retCode;
    NSString *_m_retMsg;
    NSDictionary *_m_userInfo;
}

+ (id)GenFromDictionary:(id)arg1 WithErrorType:(unsigned long)arg2 ErrorMsg:(id)arg3;
@property(retain, nonatomic) NSDictionary *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property(retain, nonatomic) NSString *m_retMsg; // @synthesize m_retMsg=_m_retMsg;
@property(nonatomic) unsigned long m_retCode; // @synthesize m_retCode=_m_retCode;
@property(retain, nonatomic) NSString *m_crtNo; // @synthesize m_crtNo=_m_crtNo;
@property(retain, nonatomic) NSString *m_crtCrt; // @synthesize m_crtCrt=_m_crtCrt;
@property(retain, nonatomic) NSString *m_wxErrorMsg; // @synthesize m_wxErrorMsg=_m_wxErrorMsg;
@property(nonatomic) unsigned long m_wxErrorType; // @synthesize m_wxErrorType=_m_wxErrorType;
- (void).cxx_destruct;
- (id)init;

@end

