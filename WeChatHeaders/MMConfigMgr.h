//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMLanguageMgrExt.h"
#import "IMsgExt.h"
#import "MMKernelExt.h"
#import "MMPackageDownloadMgrExt.h"
#import "MMService.h"

@class JDWebViewMenuData, NSDictionary, NSMutableDictionary, NSString;

@interface MMConfigMgr : MMService <MMPackageDownloadMgrExt, MMService, MMKernelExt, IMMLanguageMgrExt, IMsgExt>
{
    NSMutableDictionary *m_dicCacheConfigSeperator;
    NSMutableDictionary *m_dicConfig;
    NSMutableDictionary *m_dicDynamicConfig;
    NSMutableDictionary *m_dicDynamicConfigSplit;
    int m_iVersion;
    NSMutableDictionary *m_dicJDConfigCache;
    JDWebViewMenuData *m_JDMenuCache;
    NSDictionary *m_dicPrefetchDomains;
    BOOL m_bDomainPrefetchEnabled;
}

+ (BOOL)isAutoDownloadCloseForValue:(id)arg1;
@property(retain) NSMutableDictionary *m_dicCacheConfigSeperator; // @synthesize m_dicCacheConfigSeperator;
- (void).cxx_destruct;
- (BOOL)isAutoDownloadCloseForKey:(id)arg1;
- (BOOL)isCurrentTimeInRangeForKey:(id)arg1;
- (id)getJDWebviewMenuData;
- (id)prefetchedDomainDictWithXMLString:(id)arg1;
- (void)loadDNSPrefetchConfig;
- (id)prefetchedDomainsForDomain:(id)arg1;
- (void)updateSignalingScenes;
- (unsigned int)uintFromDynamicConfigForKey:(id)arg1 defaultValue:(unsigned int)arg2;
- (unsigned int)uintFromDynamicConfigForKey:(id)arg1;
- (unsigned int)uintWithHexFromDynamicConfigForKey:(id)arg1;
- (id)valueFromDynamicConfigForKey:(id)arg1;
- (unsigned int)uintForKey:(id)arg1 config:(id)arg2;
- (id)valueForKey:(id)arg1 config:(id)arg2;
- (id)arrSubValueForKey:(id)arg1 config:(id)arg2 seperator:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onLanguageChange;
- (void)onAuthOK;
- (void)dealloc;
- (id)init;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)loadData;
- (void)saveDynamicConfigSplit;
- (void)loadDynamicConfigSplit;
- (id)getDynamicConfigSplitFilePath;
- (id)getDynamicConfigFilePath;
- (void)initStaticConfig:(id)arg1;
- (void)mergeDynamicConfig:(id)arg1;
- (void)initDynamicConfig:(id)arg1;
- (id)parseDynamicConfig:(id)arg1 type:(const char *)arg2;
- (id)parseXMLToMenuItem:(struct XmlReaderNode_t *)arg1;
- (void)parseWebViewCustomizeConfig:(struct XmlReaderNode_t *)arg1 forMenuData:(id)arg2;
- (void)initConfig:(id)arg1 for:(id)arg2;
- (BOOL)isItemSupportCountry:(id)arg1 item:(struct XmlReaderNode_t *)arg2;
- (BOOL)isItemSupportLanguage:(id)arg1 item:(struct XmlReaderNode_t *)arg2;
- (id)addConfigName:(id)arg1 forConfig:(id)arg2;
- (void)downLoadConfig;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (int)getVideoHWMaxFPS;
- (int)getVideoHWMaxRes;
- (int)getVideoSWMaxFPS;
- (int)getVideoSWMaxRes;
- (int)getVideoHWEnable;
- (int)getVideoCaptureFps;
- (int)getVideoCaptureRes;
- (unsigned int)getEmotionStoreType;
- (int)getMultiTalkAudioUnitSubType;
- (int)getMultiTalkAgclimiter;
- (int)getMultiTalkAgcflag;
- (int)getMultiTalkAgcgaindb;
- (int)getMultiTalkAgctargetdb;
- (int)getMultiTalkAgcMode;
- (int)getMultiTalkAecMode;
- (int)getMultiTalkNsMode;
- (int)getAudioUnitSubType;
- (int)getEngineAgcRxLimiter;
- (int)getEngineAgcRxGain;
- (int)getEngineAgcRxTarget;
- (int)getEngineAgcRxFlag;
- (int)getOutputVolumeScale:(BOOL)arg1;
- (int)getInputVolumeScale:(BOOL)arg1;
- (int)getEngineECModeLevel:(BOOL)arg1;
- (int)getEngineXnoiseSupFlag;
- (int)getEngineAecMode;
- (int)getEngineAgclimiter;
- (int)getEngineAgcflag;
- (int)getEngineAgcgaindb;
- (int)getEngineAgctargetdb;
- (int)getEngineAgcMode;
- (int)getEngineNsMode;
- (int)getEngineSpkEcMode;
- (BOOL)shouldBlockVoipMinimizeMode;
- (BOOL)shouldBlockVoipIgnoreButton;
- (BOOL)shouldShowVoipInChat;
- (BOOL)shouldCloseVoiceAgc:(BOOL)arg1;
- (BOOL)shouldCloseVoiceProcess:(BOOL)arg1;
- (float)GetMinCompressEarningsPercent;
- (unsigned int)GetNoneCompressLongImageSize;
- (unsigned int)GetNoneCompressNormalImageSize;
- (unsigned int)compressLongImageLongEdge;
- (unsigned int)compressLongImageRatio;
- (id)getCompressParameterForScene:(unsigned int)arg1 parameterType:(unsigned int)arg2;
- (struct CGSize)compressResolutionForScene:(unsigned int)arg1;
- (float)compressQualityForScene:(unsigned int)arg1;
- (float)compressQualityForSnsWithoutWebp;
- (id)signalingScenes;
- (long)GetSignalInterval;
- (BOOL)IsShouldSendSignalInScene:(id)arg1;
- (BOOL)hasJDStoreCell;
- (id)GetJDStoreCellItem;
- (unsigned int)getHeightLimitForShowingTextMsg;
- (unsigned int)getInputLimitFileSize;
- (unsigned int)getInputLimitVideoSize;
- (unsigned int)getInputLimitFavVoiceLength;
- (unsigned int)getInputLimitFavImageSize;
- (unsigned int)getInputLimitEmotionWidth;
- (unsigned int)getInputLimitAppMsgEmotionBufSize;
- (unsigned int)getInputLimitEmotionBufSize;
- (unsigned int)getInputLimitForFavMsg;
- (unsigned int)getInputLimitForFloatBottleMsg;
- (unsigned int)getInputLimitForTextMsg;
- (int)getVoipkeyVer;
- (int)getVoipkeyPhone;
- (int)getVoipkeyTime;
- (int)getVoipkeyMicadd;
- (int)getVoipkeyMicnum;
- (int)getVoipkeyGtype;
- (int)getVoipkeyStype;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
