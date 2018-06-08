//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"
#import "WCTColumnCoding.h"

@class MMResSignatureDataInfos, NSData, NSString;

@interface MMResDownloadUrlInfo : MMObject <PBCoding, WCTColumnCoding>
{
    BOOL isEncrypt;
    BOOL isCompress;
    BOOL isLoginUsrRelated;
    BOOL isDownloaded;
    BOOL _isPage;
    NSString *srcUrl;
    NSString *version;
    NSString *md5;
    unsigned long fileId;
    unsigned long supportVersion;
    NSData *signatureData;
    MMResSignatureDataInfos *arrSignatureDataInfo;
    NSString *originalMd5;
    unsigned long downloadPriority;
    unsigned long retryCnt;
    unsigned long _protocal;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long protocal; // @synthesize protocal=_protocal;
@property(nonatomic) BOOL isPage; // @synthesize isPage=_isPage;
@property(nonatomic) unsigned long retryCnt; // @synthesize retryCnt;
@property(nonatomic) unsigned long downloadPriority; // @synthesize downloadPriority;
@property(retain, nonatomic) NSString *originalMd5; // @synthesize originalMd5;
@property(retain, nonatomic) MMResSignatureDataInfos *arrSignatureDataInfo; // @synthesize arrSignatureDataInfo;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData;
@property(nonatomic) BOOL isDownloaded; // @synthesize isDownloaded;
@property(nonatomic) unsigned long supportVersion; // @synthesize supportVersion;
@property(nonatomic) unsigned long fileId; // @synthesize fileId;
@property(nonatomic) BOOL isLoginUsrRelated; // @synthesize isLoginUsrRelated;
@property(nonatomic) BOOL isCompress; // @synthesize isCompress;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) BOOL isEncrypt; // @synthesize isEncrypt;
@property(retain, nonatomic) NSString *version; // @synthesize version;
@property(retain, nonatomic) NSString *srcUrl; // @synthesize srcUrl;
- (void).cxx_destruct;
- (void)dealloc;
- (id)archivedWCTValue;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
