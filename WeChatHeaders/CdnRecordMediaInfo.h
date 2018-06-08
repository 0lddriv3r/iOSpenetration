//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CdnUploadTaskInfo, NSString;

@interface CdnRecordMediaInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    NSString *m_nsUsername;
    NSString *m_nsFileID;
    NSString *m_nsAesKey;
    unsigned long m_uiFileTotalLen;
    unsigned long m_uiScene;
    NSString *m_nsExtInfo;
    unsigned long m_uiFileType;
    CdnUploadTaskInfo *_m_taskResultInfo;
}

@property(retain, nonatomic) CdnUploadTaskInfo *m_taskResultInfo; // @synthesize m_taskResultInfo=_m_taskResultInfo;
@property(nonatomic) unsigned long m_uiFileType; // @synthesize m_uiFileType;
@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo;
@property(nonatomic) unsigned long m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) unsigned long m_uiFileTotalLen; // @synthesize m_uiFileTotalLen;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsFileID; // @synthesize m_nsFileID;
@property(retain, nonatomic) NSString *m_nsUsername; // @synthesize m_nsUsername;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (void).cxx_destruct;

@end
