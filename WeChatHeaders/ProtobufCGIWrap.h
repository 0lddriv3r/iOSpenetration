//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSString, UrlInfo, WXPBGeneratedMessage;

@interface ProtobufCGIWrap : NSObject <NSCopying>
{
    WXPBGeneratedMessage *m_pbRequest;
    Class m_pbRespClass;
    WXPBGeneratedMessage *m_pbResponse;
    unsigned long m_uiChannelType;
    unsigned long m_uiCgi;
    unsigned long m_uiScene;
    NSString *m_nsCgiName;
    NSString *m_nsUri;
    unsigned long m_uiRequestEncryptType;
    NSData *m_dtResponseDecryptKey;
    unsigned long m_uiMessage;
    Class m_eventHandlerClass;
    NSObject *m_oUserData;
    UrlInfo *m_oUrlInfo;
    BOOL m_bNotifyPartLen;
    unsigned long m_uiRetryCount;
    double m_douTimeout;
    double m_douReadTimeout;
    int m_netwrokStrategy;
}

@property(nonatomic) int m_netwrokStrategy; // @synthesize m_netwrokStrategy;
@property(nonatomic) double m_douReadTimeout; // @synthesize m_douReadTimeout;
@property(nonatomic) double m_douTimeout; // @synthesize m_douTimeout;
@property(nonatomic) unsigned long m_uiRetryCount; // @synthesize m_uiRetryCount;
@property(nonatomic) BOOL m_bNotifyPartLen; // @synthesize m_bNotifyPartLen;
@property(retain, nonatomic) UrlInfo *m_oUrlInfo; // @synthesize m_oUrlInfo;
@property(retain, nonatomic) NSObject *m_oUserData; // @synthesize m_oUserData;
@property(nonatomic) Class m_eventHandlerClass; // @synthesize m_eventHandlerClass;
@property(nonatomic) unsigned long m_uiMessage; // @synthesize m_uiMessage;
@property(retain, nonatomic) NSData *m_dtResponseDecryptKey; // @synthesize m_dtResponseDecryptKey;
@property(nonatomic) unsigned long m_uiRequestEncryptType; // @synthesize m_uiRequestEncryptType;
@property(nonatomic) unsigned long m_uiChannelType; // @synthesize m_uiChannelType;
@property(retain, nonatomic) NSString *m_nsUri; // @synthesize m_nsUri;
@property(retain, nonatomic) NSString *m_nsCgiName; // @synthesize m_nsCgiName;
@property(nonatomic) unsigned long m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) unsigned long m_uiCgi; // @synthesize m_uiCgi;
@property(retain, nonatomic) WXPBGeneratedMessage *m_pbResponse; // @synthesize m_pbResponse;
@property(nonatomic) Class m_pbRespClass; // @synthesize m_pbRespClass;
@property(retain, nonatomic) WXPBGeneratedMessage *m_pbRequest; // @synthesize m_pbRequest;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
