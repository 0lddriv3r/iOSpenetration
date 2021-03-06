//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CdnComMediaInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    NSString *m_nsFileID;
    NSString *m_nsAesKey;
    unsigned long m_uiFileTotalLen;
    unsigned long m_uiScene;
    NSString *m_nsExtInfo;
    BOOL m_bNeedMediaId;
    BOOL _m_bNeedStorage;
    NSString *m_nsMediaType;
}

@property(nonatomic) BOOL m_bNeedStorage; // @synthesize m_bNeedStorage=_m_bNeedStorage;
@property(nonatomic) BOOL m_bNeedMediaId; // @synthesize m_bNeedMediaId;
@property(retain, nonatomic) NSString *m_nsMediaType; // @synthesize m_nsMediaType;
@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo;
@property(nonatomic) unsigned long m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) unsigned long m_uiFileTotalLen; // @synthesize m_uiFileTotalLen;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsFileID; // @synthesize m_nsFileID;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (void).cxx_destruct;
- (id)init;

@end

