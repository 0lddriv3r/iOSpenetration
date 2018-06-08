//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt.h"
#import "IMsgExt.h"
#import "MMService.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface OutLinkHijackDetector : MMService <MMService, ICdnComMgrExt, IMsgExt>
{
    NSString *_uploadingFile;
    NSMutableDictionary *_fileRecord;
    BOOL _isLoadConfigFile;
    NSMutableArray *_configList;
    unsigned long _configFileExpireTime;
    NSMutableDictionary *_sucReportUrl;
    unsigned long _blockConfigFlag;
    NSArray *_blockBlackList;
    NSArray *_blockWhiteList;
    BOOL _needReportOperatorsHijack;
    NSString *_hijackUrl;
}

@property(retain, nonatomic) NSString *hijackUrl; // @synthesize hijackUrl=_hijackUrl;
@property(nonatomic) BOOL needReportOperatorsHijack; // @synthesize needReportOperatorsHijack=_needReportOperatorsHijack;
- (void).cxx_destruct;
- (void)handleBlockConfigMsg:(id)arg1;
- (void)handleDectConfigMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnCdnUpload:(id)arg1;
- (void)reportOperatorsHijackHtmlContent:(id)arg1;
- (int)getOperatorsHijackBlockControlFlag;
- (id)getOperatorsHijackBlockBlackList;
- (BOOL)isOperatorsHijackBlockEnable:(id)arg1;
- (void)reportCdnInfoToServer:(id)arg1;
- (void)tryUploadUnFinishFile;
- (id)getHijackConfigFileDir;
- (id)getWebReportRootDir;
- (void)storageHtmlContent:(id)arg1;
- (void)startDetect:(id)arg1;
- (void)markUrlHasBeenReported:(id)arg1;
- (BOOL)urlHasBeenReported:(id)arg1;
- (void)saveHijackConfigFile;
- (void)tryloadHijackConfigFile;
- (id)init;
- (void)dealloc;
- (int)getAbtestOperatorsHijackBlockControlFlag;
- (id)getAbtestOperatorsHijackBlockBlackList;
- (id)getOperationsHijackBlockWhiteList;
- (void)tryAbTestDataMigration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
