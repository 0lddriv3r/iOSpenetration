//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WAInfoData : MMObject <WCTTableCoding>
{
    BOOL _ignorePackageCheckSumOnDebugType;
    BOOL _hasDownloadPatchData;
    NSString *_appID;
    NSString *_username;
    unsigned long _updateTime;
    unsigned long _packageSize;
    NSString *_packageCheckSum;
    unsigned long _versionStatus;
    NSString *_realAppId;
    NSString *_moduleName;
    unsigned int _packageType;
    unsigned long _appServiceType;
    unsigned int _encryptType;
    unsigned long _debugModeType;
    unsigned long _oldExistVersion;
    unsigned long _downloadDataSize;
    NSString *_downloadUrl;
    NSString *_debugDownloadUrl;
    unsigned long _debugDevKey;
    unsigned long long _version;
}

+ (id)getEncryptTypeString:(unsigned int)arg1;
+ (const struct WCTProperty *)encryptType;
+ (const struct WCTProperty *)appServiceType;
+ (const struct WCTProperty *)packageType;
+ (const struct WCTProperty *)moduleName;
+ (const struct WCTProperty *)realAppId;
+ (const struct WCTProperty *)versionStatus;
+ (const struct WCTProperty *)packageCheckSum;
+ (const struct WCTProperty *)packageSize;
+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)version;
+ (const struct WCTProperty *)username;
+ (const struct WCTProperty *)appID;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned long debugDevKey; // @synthesize debugDevKey=_debugDevKey;
@property(retain, nonatomic) NSString *debugDownloadUrl; // @synthesize debugDownloadUrl=_debugDownloadUrl;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic) BOOL hasDownloadPatchData; // @synthesize hasDownloadPatchData=_hasDownloadPatchData;
@property(nonatomic) unsigned long downloadDataSize; // @synthesize downloadDataSize=_downloadDataSize;
@property(nonatomic) BOOL ignorePackageCheckSumOnDebugType; // @synthesize ignorePackageCheckSumOnDebugType=_ignorePackageCheckSumOnDebugType;
@property(nonatomic) unsigned long oldExistVersion; // @synthesize oldExistVersion=_oldExistVersion;
@property(nonatomic) unsigned long debugModeType; // @synthesize debugModeType=_debugModeType;
@property(nonatomic) unsigned int encryptType; // @synthesize encryptType=_encryptType;
@property(nonatomic) unsigned long appServiceType; // @synthesize appServiceType=_appServiceType;
@property(nonatomic) unsigned int packageType; // @synthesize packageType=_packageType;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(retain, nonatomic) NSString *realAppId; // @synthesize realAppId=_realAppId;
@property(nonatomic) unsigned long versionStatus; // @synthesize versionStatus=_versionStatus;
@property(retain, nonatomic) NSString *packageCheckSum; // @synthesize packageCheckSum=_packageCheckSum;
@property(nonatomic) unsigned long packageSize; // @synthesize packageSize=_packageSize;
@property(nonatomic) unsigned long updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (BOOL)isEqualToInfoData:(id)arg1;
- (id)initModuleInfoData:(id)arg1;
- (id)initDefaultInfoData;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
